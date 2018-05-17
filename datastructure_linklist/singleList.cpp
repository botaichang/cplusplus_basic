/*
 链表的实质: 结构体变量与结构体变量连在一起
*/

#include "singleList.h"
int main()
{
  
  ////结构体变量
  //struct Node node1 = {1,NULL};
  //struct Node node2 = {2,NULL};
  //struct Node node3 = {3,NULL};
  //
  //node1.next = & node2; 
  //node2.next = & node3;
  
  
  struct Node * List = createList(); 
  insertNodeByHead(List, 1);
  insertNodeByHead(List, 2);
  insertNodeByHead(List, 3);
  insertNodeByHead(List, 4);
  printList(List);
  deleteNodeByAppoin(List,2);
  printList(List);
  
  return 0;
}
