#include<stdio.h>
#include <setjmp.h>
#include<math.h>
  #include<time.h>
  #include<windows.h>
  #include<stdlib.h>

   #define U 1
   #define D 2
   #define L 3
   #define R 4       //蛇的状态，U：上 ；D：下；L:左 R：右

typedef struct SNAKE //蛇身的一个节点
{
     int x;
    int y;
   struct SNAKE *next;
}snake;
//全局变量//
jmp_buf jmpbuffer;
int score = 0, add = 10;//总得分与每次吃食物得分。
int status, sleeptime = 200;//每次运行的时间间隔
snake *head, *food;//蛇头指针，食物指针
snake *q;//遍历蛇的时候用到的指针
  int endGamestatus = 0; //游戏结束的情况，1：撞到墙；2：咬到自己；3：主动退出游戏。

  //声明全部函数//
  void Pos();
  void creatMap();
  void initSnake();
  int biteSelf();
  void createFood();
  void cantCrossWall();
  void snakeMove();
  void pause();
  void runGame();
  void initGame();
  void endGame();
  void gameStart();
  int main()
{
   int a;
   char b;
   while(1)
   {gameStart();
    runGame();
     endGame(0);
     if(a==0)
     {setjmp(jmpbuffer);printf("%%%%%%%%%%%%%%%%%%%%%");
     }
     }}

  void Pos(int x, int y)//设置光标位置
  {
      COORD pos;
      HANDLE hOutput;
      pos.X = x;
      pos.Y = y;
      hOutput = GetStdHandle(STD_OUTPUT_HANDLE);//返回标准的输入、输出或错误的设备的柄，也就是获得输入、输出/错误的屏幕缓冲区的句柄
      SetConsoleCursorPosition(hOutput, pos);
  }

  void creatMap()//创建地图
  {
      int i;
      for (i = 0; i<58; i += 2)//打印上下边框
      {
          Pos(i, 0);
          printf("■");//一个方块占两个位置
          Pos(i, 26);
          printf("■");
      }
      for (i = 1; i<26; i++)//打印左右边框
      {
          Pos(0, i);
          printf("■");
          Pos(56, i);
          printf("■");
      }
  }
/*void creatblank()
{
    int i,j;
    for(i=0;i<58;i++)
        for(j=0;j<26;j++)
        printf(" ");
}*/

  void initSnake()//初始化蛇身
  {
      snake *tail;
      int i;
      tail = (snake*)malloc(sizeof(snake));//从蛇尾开始，头插法，以x,y设定开始的位置/
      tail->x = 2;
      tail->y = 5;
      tail->next = NULL;
      for (i = 1; i <= 4; i++)//初始长度为4
      {
          head = (snake*)malloc(sizeof(snake));
          head->next = tail;
          head->x = 24 + 2 * i;
          head->y = 5;
          tail = head;
      }
      while (tail != NULL)//从头到为，输出蛇身
      {
          Pos(tail->x, tail->y);
          printf("■");
          tail = tail->next;
      }
  }
  //??
  int biteSelf()//判断是否咬到了自己
  {
      snake *self;
      self = head->next;
      while (self != NULL)
      {
          if (self->x == head->x && self->y == head->y)
          {
             return 1;
         }
         self = self->next;
     }
     return 0;
 }

 void createFood()//随机出现食物
 {
     snake *food_1=head;
     srand((unsigned)time(NULL));//为了防止每次产生的随机数相同，种子设置为time
     food_1 = (snake*)malloc(sizeof(snake));
     //while ((food_1->x % 2) != 0)    //保证其为偶数，使得食物能与蛇头对其
     //{
         loop:food_1->x =rand()%52 + 2;
         if((food_1->x % 2)!=0) goto loop;
         //printf("%d",rand()%52 + 2);
     //}
     food_1->y =rand()%24 + 1;
     q = head;
     while (q->next == NULL)
     {
         if (q->x == food_1->x && q->y == food_1->y) //判断蛇身是否与食物重合
         {
             free(food_1);
             food_1=NULL;
             createFood();
             return;
         }
         q = q->next;
     }
     Pos(food_1->x, food_1->y);
     food = food_1;
     printf("●");
     //printf("■");
 }/*void CreateFood() //在地图上随机产生一个食物
{
 pSnake cur = head;
 Food = (pSnake)malloc(sizeof(Snake));

 //产生x~y的随机数 k=rand()%(Y-X+1)+X;
 srand((unsigned)time(NULL));
 Food->x = rand()%(ROW_MAP-2 - 1 + 1)+1;
 Food->y = rand()%(COL_MAP-3 - 2 + 1)+2;
 Food->next = NULL;
 while(cur) //检查食物是否与蛇身重合
 {
  if(cur->x == Food->x && cur->y == Food->y)
  {
   free(Food);
   Food = NULL;
   CreateFood();
   return;
  }
  cur = cur->next;
 }
 Pos(Food->y, Food->x);
 printf("%c", food);
}*/

 void cantCrossWall()//不能穿墙
 {
     if (head->x == 0 || head->x == 56 || head->y == 0 || head->y == 26)
     {
         endGamestatus = 1;
         endGame();
         return;
     }
 }

void snakeMove()//蛇前进,上U,下D,左L,右R
{
     snake * nexthead;
     cantCrossWall();
     if(endGamestatus == 1) return;
    nexthead = (snake*)malloc(sizeof(snake));
    if (status == U)
     {
         nexthead->x = head->x;
       nexthead->y = head->y - 1;
         if (nexthead->x == food->x && nexthead->y == food->y)//如果下一个有食物//
        {
            nexthead->next = head;
             head = nexthead;
            q = head;
            while (q != NULL)
           {
              Pos(q->x, q->y);
                printf("■");
               q = q->next;
            }
           score = score + add;
            createFood();
        }
         else                                               //如果没有食物//
         {
             nexthead->next = head;
             head = nexthead;
             q = head;
            while (q->next->next != NULL)
             {
                Pos(q->x, q->y);
                 printf("■");
                 q = q->next;
           }
            Pos(q->next->x, q->next->y);
             printf("  ");
             free(q->next);
             q->next = NULL;
         }
     }
    if (status == D)
    {
         nexthead->x = head->x;
        nexthead->y = head->y + 1;
         if (nexthead->x == food->x && nexthead->y == food->y)  //有食物
        {
             nexthead->next = head;
            head = nexthead;
            q = head;
             while (q != NULL)
             {
                Pos(q->x, q->y);
                 printf("■");
                 q = q->next;
            }
            score = score + add;
           createFood();
         }
         else                               //没有食物
        {
             nexthead->next = head;
            head = nexthead;
            q = head;
             while (q->next->next != NULL)
            {
               Pos(q->x, q->y);
                printf("■");
                q = q->next;
            }
            Pos(q->next->x, q->next->y);
             printf("  ");
             free(q->next);
           q->next = NULL;
        }
     }
     if (status == L)
     {
         nexthead->x = head->x - 2;
         nexthead->y = head->y;
         if (nexthead->x == food->x && nexthead->y == food->y)//有食物
         {
             nexthead->next = head;
             head = nexthead;
            q = head;
            while (q != NULL)
             {
                Pos(q->x, q->y);
                printf("■");
                q = q->next;
            }
             score = score + add;
             createFood();
        }
        else                                //没有食物
        {
            nexthead->next = head;
            head = nexthead;
           q = head;
           while (q->next->next != NULL)
             {
                Pos(q->x, q->y);
               printf("■");
                 q = q->next;
             }
             Pos(q->next->x, q->next->y);
            printf("  ");
             free(q->next);
            q->next = NULL;
        }
    }
     if (status == R)
     {
         nexthead->x = head->x + 2;
        nexthead->y = head->y;
        if (nexthead->x == food->x && nexthead->y == food->y)//有食物
        {
            nexthead->next = head;
             head = nexthead;
             q = head;
            while (q != NULL)
            {
              Pos(q->x, q->y);
                printf("■");
                q = q->next;
            }
            score = score + add;
            createFood();
       }
        else                                         //没有食物
         {
           nexthead->next = head;
           head = nexthead;
            q = head;
             while (q->next->next != NULL)
          {
                Pos(q->x, q->y);
                printf("■");
                q = q->next;
             }
            Pos(q->next->x, q->next->y);
            printf("  ");
          free(q->next);
             q->next = NULL;
        }
    }
     if (biteSelf() == 1)       //判断是否会咬到自己
     {
        endGamestatus = 2;
        endGame();
    }
}

void pause()//暂停
{
     while (1)
     {
        Sleep(300);
        if (GetAsyncKeyState(VK_SPACE))
       {
            break;
        }
    }
}
void runGame()//控制游戏
{
    Pos(64, 15);
    printf("不能穿墙，不能咬到自己\n");
   Pos(64, 16);
    printf("用↑.↓.←.→分别控制蛇的移动.");
   Pos(64, 17);
     printf("F1 为加速，F2 为减速\n");
    Pos(64, 18);
    printf("ESC ：退出游戏.space：暂停游戏.");
    Pos(64, 20);
    status = R;
    while (1)
    {
        Pos(64, 10);
        printf("得分：%d  ", score);
        Pos(64, 11);
         printf("每个食物得分：%d分", add);
        if (GetAsyncKeyState(VK_UP) && status != D)
        {
           status = U;
        }
      else if (GetAsyncKeyState(VK_DOWN) && status != U)
        {
             status = D;
         }
         else if (GetAsyncKeyState(VK_LEFT) && status != R)
        {
            status = L;
     }
        else if (GetAsyncKeyState(VK_RIGHT) && status != L)
       {
           status = R;
       }
        else if (GetAsyncKeyState(VK_SPACE))
        {
            pause();
        }
        else if (GetAsyncKeyState(VK_TAB))
      {
           endGamestatus = 3;
            break;
        }
        else if (GetAsyncKeyState(VK_ESCAPE))
      {
            exit(0);
        }
        else if (GetAsyncKeyState(VK_RIGHT) && status != L)
       {
           status = R;
       }
         else if (GetAsyncKeyState(VK_F1))
         {
           if (sleeptime >= 50)
             {
                 sleeptime = sleeptime - 30;
                 add = add + 2;
                if (sleeptime == 320)
               {
                  add = 2;//防止减到1之后再加回来有错
                 }
            }
        }
      else if (GetAsyncKeyState(VK_F2))
        {
            if (sleeptime<350)
           {
                sleeptime = sleeptime + 30;
             add = add - 2;
               if (sleeptime == 350)
                {
                    add = 1;  //保证最低分为1
                 }
             }
        }
        /*printf("0");*/
         Sleep(sleeptime);
         /*if(endGame==0) break;
         else*/ snakeMove();
         /*printf("%d",endGame);*/
     }
 }

 void initGame()//开始界面
 {
     Pos(40, 12);

     printf("欢迎来到贪食蛇游戏！");
     Pos(40, 25);
     system("pause");
     system("cls");
     Pos(25, 12);
     printf("用↑.↓.←.→分别控制蛇的移动， F1 为加速，F2 为减速\n");
     Pos(25, 13);
     printf("加速将能得到更高的分数。\n");
     system("pause");
     system("cls");
 }
void gameStart()//游戏初始化
{
     system("mode con cols=100 lines=30");
     initGame();
    creatMap();
     initSnake();
   createFood();
}
void endGame()//结束游戏
 {

     system("cls");
     Pos(24, 12);
     if (endGamestatus == 1)
     {
         printf("对不起，您撞到墙了。游戏结束.");
     }
     else if (endGamestatus == 2)
     {
         printf("对不起，您咬到自己了。游戏结束.");
     }
     else if (endGamestatus == 3)
     {
         printf("您已经结束了游戏。");
     }
     Pos(24, 13);
     printf("您的得分是%d\n", score);
     loop:printf("退出游戏?（请按ESC）（按TAB继续游戏）\n");
     /*char a=NULL;
     scanf("%c",&a);
     if(a=='Y') exit(0);
     else printf("请重新输入");
     goto loop;*/

     /*printf("###");
     return 0;
     system("mode con cols=150 lines=60");
     return 0;*/
     /*if(head!=NULL)
        do
     {
         free(head);
         head=head->next;
         printf("1 ");
     }while(head!=NULL);
     system("pause");*/
     /*if(x==0)
     return;*/
     /*if(head!=NULL)
        do
     {
         free(head);
         head=head->next;
         printf("1 ");
     }while(head!=NULL);
     head=NULL;
     printf("###########################");
     return 0;*/
     //exit (1);     //return 0;
     //gameStart();
     /*while (1)
     {
         printf("是否关闭游戏？（Y/N）");
         if(getchar()=='N')
         {
           gameStart();
           runGame();
           endGame();
         }
         else break;
    }*/
    /* while(head)
 {
  nexthead = head;
  cur = cur->next;
  free(del);
  del = NULL;
 }*/
/*for(int i=0;i<5;i++)
{
    head=head->next;
    free(head);
}*//*free(head);
creatblank();
loop:{snake * nexthead;
nexthead=head->next;
free(head);
free(nexthead);
if(nexthead!=NULL)
{goto loop;}}*/
/*char a;
     while (1)
     {
         printf("是否关闭游戏？（Y/N）");
         scanf(" %c",&a);
         if(a=='N');
         {
           gameStart();
           runGame();
         }
         if(a=='Y')
         {
             return 0;
         }
    }*/
    //return 0;
}
/*void gameStart()//游戏初始化
{
     system("mode con cols=100 lines=30");
     initGame();
    creatMap();
     initSnake();
   createFood();
}*/
/*int main()
{
   int a;
   char b;
   while(1)
   {gameStart();
    runGame();
     endGame(0);
     if(a==0)
     {setjmp(jmpbuffer);printf("%%%%%%%%%%%%%%%%%%%%%");
     }
     }
     /*if(a==0)
     {
         loop2:printf("是否再来一局Y/N");
         scanf("%c",&b);
         if(b=='Y') goto loop;
         else
         if(b=='N') return 0;
         else printf("输入错误，请重新输入\n");goto loop2;

     }*/
     /*while (1)
     {
         printf("是否关闭游戏？（Y/N）");
         if(getchar()=='N')
         {
           gameStart();
           runGame();
           endGame();
         }
         else break;
    }
    exit(0);*/


