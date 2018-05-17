#include <stdio.h>


struct MM
{
  //结构体成员
  char name[6];
  int age; 
  int num;
  
};
int main()
{
  struct MM myMM; 
  //访问结构体成员  结构体变量.成员
  myMM.age = 12;
  myMM.num = 1;
  printf("age %d\n",myMM.age);
  
  
  
  
  struct MM *p = &myMM; 
  p->age = 16;
  printf("age %d\n",myMM.age);
  
  
 
  return 0;
}
