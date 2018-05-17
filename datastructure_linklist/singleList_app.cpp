
/*
 链表的实质: 结构体变量与结构体变量连在一起
*/

#include <stdio.h>
#include <boost/iterator/iterator_concepts.hpp>
#include <stdlib.h>
#include <string.h>

struct student
{
  char name[20];
  int age;
  int number;
};

struct Node
{
  //数据
  struct student st; 
  //指针
  struct Node *next; 
};


//创建链表
struct Node* createList()
{
  //指针用法: 1. 需要初始化 1.1 指向地址  1.2 堆内存
  struct Node * List = (struct Node*) malloc(sizeof(struct Node));
  //结构体指针: 结构体成员初始化
  List->next = NULL;
}

//创建节点
struct Node* createNode(struct student st)
{
  struct Node* node = (struct Node*) malloc(sizeof(struct Node));
  node->st = st;
  node->next = NULL;
  return node;
}

//头插法:
void insertNodeByHead(struct Node* List, struct student st)
{
  //创建插入的节点
  struct Node * newNode = createNode(st);
  //如何插入
  
  newNode->next = List->next;
  //表头的下一个
  List->next = newNode;
}


//指定位置删除 指定:参照点: -->data
void deleteNodeByAppoin(struct Node* List, char name[])
{
  struct Node* p = List; 
  struct Node* posNode = List->next;
  
  while(strcmp(posNode->st.name,name) != 0) //不等时
  {
    p = posNode; 
    posNode = p->next; 
    if(posNode == NULL)
    {
      printf("未找到位置,无法删除");
      return ; 
    }
  }
  p->next = posNode->next; 
  delete(posNode);
}

void printList(struct Node* List)
{
  struct Node* p = List->next; 
  while(p)
  {
    printf("%s\t%d\t%d\n",p->st.name,p->st.age,p->st.number);
    p = p->next; 
  }
  printf("\n");
}

void menu()
{
  printf("0. insert name\n");
  printf("1. display\n");
  printf("2. delete\n");
  printf("3. exit\n");
}

struct Node *List = createList();

void key_down()
{
  int choice; 
  struct student st; 
  char name[20] = ""; 
  scanf("%d",&choice);
  switch(choice)
  {
    case 0: 
      //insertNodeByHead(List, struct student st)
      printf("请输入学生的姓名,年龄,编号\n");
      scanf("%s,%d,%d",st.name,&(st.age),&(st.number));
      insertNodeByHead(List, st);
      break;
    case 1: 
      printList(List);
      break;
    case 2: 
      printf("输入删除学生的姓名:\n");
      setbuf(stdin,NULL);
      scanf("%s",name);
      deleteNodeByAppoin(List,name);
      break;
    case 3: 
      exit(0);
  }
}
int main()
{
  
  while(1)
  {
  menu(); 
  key_down();
  }
  return 0;
}










