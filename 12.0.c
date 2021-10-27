#include<stdio.h>
#include <setjmp.h>
#include<math.h>
  #include<time.h>
  #include<windows.h>
  #include<stdlib.h>

   #define U 1
   #define D 2
   #define L 3
   #define R 4       //�ߵ�״̬��U���� ��D���£�L:�� R����

typedef struct SNAKE //�����һ���ڵ�
{
     int x;
    int y;
   struct SNAKE *next;
}snake;
//ȫ�ֱ���//
jmp_buf jmpbuffer;
int score = 0, add = 10;//�ܵ÷���ÿ�γ�ʳ��÷֡�
int status, sleeptime = 200;//ÿ�����е�ʱ����
snake *head, *food;//��ͷָ�룬ʳ��ָ��
snake *q;//�����ߵ�ʱ���õ���ָ��
  int endGamestatus = 0; //��Ϸ�����������1��ײ��ǽ��2��ҧ���Լ���3�������˳���Ϸ��

  //����ȫ������//
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

  void Pos(int x, int y)//���ù��λ��
  {
      COORD pos;
      HANDLE hOutput;
      pos.X = x;
      pos.Y = y;
      hOutput = GetStdHandle(STD_OUTPUT_HANDLE);//���ر�׼�����롢����������豸�ı���Ҳ���ǻ�����롢���/�������Ļ�������ľ��
      SetConsoleCursorPosition(hOutput, pos);
  }

  void creatMap()//������ͼ
  {
      int i;
      for (i = 0; i<58; i += 2)//��ӡ���±߿�
      {
          Pos(i, 0);
          printf("��");//һ������ռ����λ��
          Pos(i, 26);
          printf("��");
      }
      for (i = 1; i<26; i++)//��ӡ���ұ߿�
      {
          Pos(0, i);
          printf("��");
          Pos(56, i);
          printf("��");
      }
  }
/*void creatblank()
{
    int i,j;
    for(i=0;i<58;i++)
        for(j=0;j<26;j++)
        printf(" ");
}*/

  void initSnake()//��ʼ������
  {
      snake *tail;
      int i;
      tail = (snake*)malloc(sizeof(snake));//����β��ʼ��ͷ�巨����x,y�趨��ʼ��λ��/
      tail->x = 2;
      tail->y = 5;
      tail->next = NULL;
      for (i = 1; i <= 4; i++)//��ʼ����Ϊ4
      {
          head = (snake*)malloc(sizeof(snake));
          head->next = tail;
          head->x = 24 + 2 * i;
          head->y = 5;
          tail = head;
      }
      while (tail != NULL)//��ͷ��Ϊ���������
      {
          Pos(tail->x, tail->y);
          printf("��");
          tail = tail->next;
      }
  }
  //??
  int biteSelf()//�ж��Ƿ�ҧ�����Լ�
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

 void createFood()//�������ʳ��
 {
     snake *food_1=head;
     srand((unsigned)time(NULL));//Ϊ�˷�ֹÿ�β������������ͬ����������Ϊtime
     food_1 = (snake*)malloc(sizeof(snake));
     //while ((food_1->x % 2) != 0)    //��֤��Ϊż����ʹ��ʳ��������ͷ����
     //{
         loop:food_1->x =rand()%52 + 2;
         if((food_1->x % 2)!=0) goto loop;
         //printf("%d",rand()%52 + 2);
     //}
     food_1->y =rand()%24 + 1;
     q = head;
     while (q->next == NULL)
     {
         if (q->x == food_1->x && q->y == food_1->y) //�ж������Ƿ���ʳ���غ�
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
     printf("��");
     //printf("��");
 }/*void CreateFood() //�ڵ�ͼ���������һ��ʳ��
{
 pSnake cur = head;
 Food = (pSnake)malloc(sizeof(Snake));

 //����x~y������� k=rand()%(Y-X+1)+X;
 srand((unsigned)time(NULL));
 Food->x = rand()%(ROW_MAP-2 - 1 + 1)+1;
 Food->y = rand()%(COL_MAP-3 - 2 + 1)+2;
 Food->next = NULL;
 while(cur) //���ʳ���Ƿ��������غ�
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

 void cantCrossWall()//���ܴ�ǽ
 {
     if (head->x == 0 || head->x == 56 || head->y == 0 || head->y == 26)
     {
         endGamestatus = 1;
         endGame();
         return;
     }
 }

void snakeMove()//��ǰ��,��U,��D,��L,��R
{
     snake * nexthead;
     cantCrossWall();
     if(endGamestatus == 1) return;
    nexthead = (snake*)malloc(sizeof(snake));
    if (status == U)
     {
         nexthead->x = head->x;
       nexthead->y = head->y - 1;
         if (nexthead->x == food->x && nexthead->y == food->y)//�����һ����ʳ��//
        {
            nexthead->next = head;
             head = nexthead;
            q = head;
            while (q != NULL)
           {
              Pos(q->x, q->y);
                printf("��");
               q = q->next;
            }
           score = score + add;
            createFood();
        }
         else                                               //���û��ʳ��//
         {
             nexthead->next = head;
             head = nexthead;
             q = head;
            while (q->next->next != NULL)
             {
                Pos(q->x, q->y);
                 printf("��");
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
         if (nexthead->x == food->x && nexthead->y == food->y)  //��ʳ��
        {
             nexthead->next = head;
            head = nexthead;
            q = head;
             while (q != NULL)
             {
                Pos(q->x, q->y);
                 printf("��");
                 q = q->next;
            }
            score = score + add;
           createFood();
         }
         else                               //û��ʳ��
        {
             nexthead->next = head;
            head = nexthead;
            q = head;
             while (q->next->next != NULL)
            {
               Pos(q->x, q->y);
                printf("��");
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
         if (nexthead->x == food->x && nexthead->y == food->y)//��ʳ��
         {
             nexthead->next = head;
             head = nexthead;
            q = head;
            while (q != NULL)
             {
                Pos(q->x, q->y);
                printf("��");
                q = q->next;
            }
             score = score + add;
             createFood();
        }
        else                                //û��ʳ��
        {
            nexthead->next = head;
            head = nexthead;
           q = head;
           while (q->next->next != NULL)
             {
                Pos(q->x, q->y);
               printf("��");
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
        if (nexthead->x == food->x && nexthead->y == food->y)//��ʳ��
        {
            nexthead->next = head;
             head = nexthead;
             q = head;
            while (q != NULL)
            {
              Pos(q->x, q->y);
                printf("��");
                q = q->next;
            }
            score = score + add;
            createFood();
       }
        else                                         //û��ʳ��
         {
           nexthead->next = head;
           head = nexthead;
            q = head;
             while (q->next->next != NULL)
          {
                Pos(q->x, q->y);
                printf("��");
                q = q->next;
             }
            Pos(q->next->x, q->next->y);
            printf("  ");
          free(q->next);
             q->next = NULL;
        }
    }
     if (biteSelf() == 1)       //�ж��Ƿ��ҧ���Լ�
     {
        endGamestatus = 2;
        endGame();
    }
}

void pause()//��ͣ
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
void runGame()//������Ϸ
{
    Pos(64, 15);
    printf("���ܴ�ǽ������ҧ���Լ�\n");
   Pos(64, 16);
    printf("�á�.��.��.���ֱ�����ߵ��ƶ�.");
   Pos(64, 17);
     printf("F1 Ϊ���٣�F2 Ϊ����\n");
    Pos(64, 18);
    printf("ESC ���˳���Ϸ.space����ͣ��Ϸ.");
    Pos(64, 20);
    status = R;
    while (1)
    {
        Pos(64, 10);
        printf("�÷֣�%d  ", score);
        Pos(64, 11);
         printf("ÿ��ʳ��÷֣�%d��", add);
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
                  add = 2;//��ֹ����1֮���ټӻ����д�
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
                    add = 1;  //��֤��ͷ�Ϊ1
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

 void initGame()//��ʼ����
 {
     Pos(40, 12);

     printf("��ӭ����̰ʳ����Ϸ��");
     Pos(40, 25);
     system("pause");
     system("cls");
     Pos(25, 12);
     printf("�á�.��.��.���ֱ�����ߵ��ƶ��� F1 Ϊ���٣�F2 Ϊ����\n");
     Pos(25, 13);
     printf("���ٽ��ܵõ����ߵķ�����\n");
     system("pause");
     system("cls");
 }
void gameStart()//��Ϸ��ʼ��
{
     system("mode con cols=100 lines=30");
     initGame();
    creatMap();
     initSnake();
   createFood();
}
void endGame()//������Ϸ
 {

     system("cls");
     Pos(24, 12);
     if (endGamestatus == 1)
     {
         printf("�Բ�����ײ��ǽ�ˡ���Ϸ����.");
     }
     else if (endGamestatus == 2)
     {
         printf("�Բ�����ҧ���Լ��ˡ���Ϸ����.");
     }
     else if (endGamestatus == 3)
     {
         printf("���Ѿ���������Ϸ��");
     }
     Pos(24, 13);
     printf("���ĵ÷���%d\n", score);
     loop:printf("�˳���Ϸ?���밴ESC������TAB������Ϸ��\n");
     /*char a=NULL;
     scanf("%c",&a);
     if(a=='Y') exit(0);
     else printf("����������");
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
         printf("�Ƿ�ر���Ϸ����Y/N��");
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
         printf("�Ƿ�ر���Ϸ����Y/N��");
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
/*void gameStart()//��Ϸ��ʼ��
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
         loop2:printf("�Ƿ�����һ��Y/N");
         scanf("%c",&b);
         if(b=='Y') goto loop;
         else
         if(b=='N') return 0;
         else printf("�����������������\n");goto loop2;

     }*/
     /*while (1)
     {
         printf("�Ƿ�ر���Ϸ����Y/N��");
         if(getchar()=='N')
         {
           gameStart();
           runGame();
           endGame();
         }
         else break;
    }
    exit(0);*/


