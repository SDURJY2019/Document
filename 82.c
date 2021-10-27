#include<stdio.h>
#include<string.h>   //数据表

//置换函数
//参数： In：待置换数据指针
//Out：置换输出指针
//	    n:置换表长度
//P：置换表指针
//说明：将输入数据的指定位置作为输出数据的第i位。指定位置即置换表第i位的十进制数。得到的输出数据的长度
//即为置换表的长度。

void myPermutation(char *In,char *Out,int n,char *P)
{
    int i=0;
    for(i=0; i<n; i++)
        *(Out+i)=*(In+*(P+i)-1);
    *(Out+i)='\0';
}

//按位异或函数
//参数：In1：二进制串1
//In2：二进制串2
//n：二进制串长度
// Out:异或结果
//说明：循环比较两个二进制串每一位，不同则为'1'，相同则为'0'

void myXOR(char* In1,char* In2,int n,char* Out)
{
}

//循环左移函数
//参数： In:待移位二进制串
// Out:移位后二进制串
//n:二进制串长度
//s:循环位数
//说明：将输入二进制串移位后对应位置的值赋给输出串，为保证循环（即原二进制串的第一位变成移位后的
//最后一位），将位次相加后与串的长度做模运算。

void myShift(char *In,char *Out,int n,int s)
{
    int i=0;
    for(i=0; i<n; i++)
        *(Out+i)=*(In+(s+i)%n);
    *(Out+i)='\0';
}

//生成子密钥函数
//参数： K:64位的密钥
//(*SK)[49]:得到的一轮子密钥
//说明：输入64位密钥，进行置换选择1，之后进行16轮操作得到16个子密钥，每一轮对56位分成两部分，
//进行相应位数的移位操作，之后再拼接成56位进行置换选择2，得到该轮子密钥

void mySubkey(char* K,char (*SK)[49])
{
    char out[57],C[57],D[29],e[29],t[57];
    int i=0,j=0; //置换选择1
    strcpy(C,out);      //C0
    strcpy(D,out+28);   //D0
    for(j=0; j<16; j++)
    {//循环左移
        strcpy(C,e);                   //Cj
        strcpy(D,e);                   //Dj
        strncpy(t, C, 28);
        strncpy(t+28, D, 28);//置换选择2，得到Kj
    }
}

//轮函数f
//参数：  L: 第t轮的32位L
//R: 第t轮的32位R
//SK: 第t轮的48位子密钥
//t: 轮数
//说明：共进行16轮操作，每轮的32位R先进行拓展置换E变成48位,再与该轮子密钥异或，然后分成
//8组进行S盒代换。每组通过第1，6位组成的二进制串确定S盒行号，通过第2，3，4，5位确定列号，
//找到对应的数并转为4位二进制串。8组代换拼接成32位为S盒代换结果，然后进行置换P。每轮经过
//S盒代换得到的结果与上一轮的L异或作为本轮的R，上一轮的R作为本轮的L。

void myf(char* L,char* R,char* SK,int t)
{
    int i=0,j=0;
    int row,col;
    char out1[49]= {0},out2[49]= {0},out3[33]= {0},out4[33]= {0},temp[33]= {0};
    printf("K%d=",t+1);
    puts(SK);
  //扩展置换E
    printf("E(R%d)=",t);
    puts(out1);
    myXOR(out1,SK,48,out2);      //与子密钥异或
    printf("E(R%d)^K%d=",t,t+1);
    puts(out2);
   for(i=0; i<8; i++)           //S盒代换
    {
        row = ((out2[i*6]-'0')<<1)+(out2[i*6+5]-'0');   //第1，6位组成行号
        col = ((out2[i*6+1]-'0')<<3)+((out2[i*6+2]-'0')<<2)+((out2[i*6+3]-'0')<<1)
+(out2[i*6+4]-'0');  //第2，3，4，5位组成列号

 //将取到的S盒数据填到S盒输出的指定位置，先进行十进制转二进制
    }
    *(out3+32)='\0';
    printf("%d轮S盒输出=",t+1);
    puts(out3);
 //置换P
    printf("f(R%d,K%d)=",t,t+1);
    puts(out4);
    strcpy(temp,R);      //保存旧的R
    myXOR(L,out4,32,R);  //更新R
    printf("R%d=",t+1);
    puts(R);
    strcpy(L,temp);      //更新L
}


//主函数：
//说明：输入64位明文，先进行初始置换IP操作，接下来将置换输出的 64 位数据分成左右两半，左一半称为 L0 ，
//右一半称为 R0 ，各 32 位。然后进行16轮迭代，迭代过程我和轮函数写在了一起。迭代完成后再经逆IP置换得到密文。

int main()
{
    char* M="0000000100100011010001010110011110001001101010111100110111101111";
    char* K="0001001100110100010101110111100110011011101111001101111111110001";
    char out[65],L[33],R[33],SK[16][49],cipher[65];
    int i=0;
    mySubkey(K,SK);                //产生16轮子密钥
    myPermutation(M,out,64,*IP);   //初始置换IP
    printf("IP置换：");
    puts(out);
    strcpy(L,out);      //L0
    strcpy(R,out+32);   //R0
    for(i=0; i<16; i++)
    {
        printf("\n-------------------------------第%d轮------------------------------------\n"
,i+1);
        myf(L,R,*(SK+i),i);
    }
    strncpy(out, R, 32);   //L16 + R16
    strncpy(out+32, L, 32);
    myPermutation(out,cipher,64,*C_IP);    //逆IP置换
    printf("\n密文：");
    puts(cipher);
    return 0;
}
123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104105106107108109110111112113114115116117118119120121122123124125126127128129130131132133134135136137138139140141142143144145146147148149

//选择置换PC-1
char PC_1[8][7]=
{
    {57,49,41,33,25,17,9},
    {1,58,50,42,34,26,18},
    {10,2,59,51,43,35,27},
    {19,11,3,60,52,44,36},
    {63,55,47,39,31,23,15},
    {7,62,54,46,38,30,22},
    {14,6,61,53,45,37,29},
    {21,13,5,28,20,12,4}
};
//选择置换PC-2
char PC_2[8][6]=
{
    {14,17,11,24,1,5},
    {3,28,15,6,21,10},
    {23,19,12,4,26,8},
    {16,7,27,20,13,2},
    {41,52,31,37,47,55},
    {30,40,51,45,33,48},
    {44,49,39,56,34,53},
    {46,42,50,36,29,32}
};
//IP置换
char IP[8][8]=
{
    {58,50,42,34,26,18,10,2},
    {60,52,44,36,28,20,12,4},
    {62,54,46,38,30,22,14,6},
    {64,56,48,40,32,24,16,8},
    {57,49,41,33,25,17,9,1},
    {59,51,43,35,27,19,11,3},
    {61,53,45,37,29,21,13,5},
    {63,55,47,39,31,23,15,7}
};
//逆IP置换
char C_IP[8][8]=
{
    {40,8,48,16,56,24,64,32},
    {39,7,47,15,55,23,63,31},
    {38,6,46,14,54,22,62,30},
    {37,5,45,13,53,21,61,29},
    {36,4,44,12,52,20,60,28},
    {35,3,43,11,51,19,59,27},
    {34,2,42,10,50,18,58,26},
    {33,1,41,9,49,17,57,25}
};
//扩展置换E
char E[8][6]=
{
    {32,1,2,3,4,5},
    {4,5,6,7,8,9},
    {8,9,10,11,12,13},
    {12,13,14,15,16,17},
    {16,17,18,19,20,21},
    {20,21,22,23,24,25},
    {24,25,26,27,28,29},
    {28,29,30,31,32,1}
};
//扩展置换P
char P[4][8]=
{
    {16,7,20,21,29,12,28,17},
    {1,15,23,26,5,18,31,10},
    {2,8,24,14,32,27,3,9},
    {19,13,30,6,22,11,4,25}
};
//S盒
char S_Box[8][65]=
{
    {
        14,4,13,1,2,15,11,8,3,10,6,12,5,9,0,7,
        0,15,7,4,14,2,13,1,10,6,12,11,9,5,3,8,
        4,1,14,8,13,6,2,11,15,12,9,7,3,10,5,0,
        15,12,8,2,4,9,1,7,5,11,3,14,10,0,6,13
    },
    {
        15,1,8,14,6,11,3,4,9,7,2,13,12,0,5,10,
        3,13,4,7,15,2,8,14,12,0,1,10,6,9,11,5,
        0,14,7,11,10,4,13,1,5,8,12,6,9,3,2,15,
        13,8,10,1,3,15,4,2,11,6,7,12,10,5,14,9
    },
    {
        10,0,9,14,6,3,15,5,1,13,12,7,11,4,2,8,
        13,7,0,9,3,4,6,10,2,8,5,14,12,11,15,1,
        13,6,4,9,8,15,3,0,11,1,2,12,5,10,14,7,
        1,10,13,0,6,9,8,7,4,15,14,3,11,5,2,12
    },
    {
        7,13,14,3,0,6,9,10,1,2,8,5,11,12,4,15,
        13,8,11,5,6,15,0,3,4,7,2,12,1,10,14,9,
        10,6,9,0,12,11,7,13,15,1,3,14,5,2,8,4,
        3,15,0,6,10,1,13,8,9,4,5,11,12,7,2,14
    },
    {
        2,12,4,1,7,10,11,6,8,5,3,15,13,0,14,9,
        14,11,2,12,4,7,13,1,5,0,15,10,3,9,8,6,
        4,2,1,11,10,13,7,8,15,9,12,5,6,3,0,14,
        11,8,12,7,1,14,2,13,6,15,0,9,10,4,5,3
    },
    {
        12,1,10,15,9,2,6,8,0,13,3,4,14,7,5,11,
        10,15,4,2,7,12,9,5,6,1,13,14,0,11,3,8,
        9,14,15,5,2,8,12,3,7,0,4,10,1,13,11,6,
        4,3,2,12,9,5,15,10,11,14,1,7,6,0,8,13
    },
    {
        4,11,2,14,15,0,8,13,3,12,9,7,5,10,6,1,
        13,0,11,7,4,9,1,10,14,3,5,12,2,15,8,6,
        1,4,11,13,12,3,7,14,10,15,6,8,0,5,9,2,
        6,11,13,8,1,4,10,7,9,5,0,15,14,2,3,12
    },
    {
        13,2,8,4,6,15,11,1,10,9,3,14,5,0,12,7,
        1,15,13,8,10,3,7,4,12,5,6,11,0,14,9,2,
        7,11,4,1,9,12,14,2,0,6,10,13,15,3,5,8,
        2,1,14,7,4,10,8,13,15,12,9,0,3,5,6,11
    }
};
//左移位数
int move_time[16] = {1,1,2,2,2,2,2,2,1,2,2,2,2,2,2,1};
