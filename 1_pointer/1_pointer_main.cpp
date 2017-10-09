#include <stdio.h>
#include <stdlib.h>

#define NUM 5

int Compare(const void* elem1, const void* elem2)
{
  unsigned int *p1,*p2;  
  p1 = (unsigned int*) elem1;
  p2 = (unsigned int*) elem2;
  return (*p1) - (*p2);
}

int main(int argc, char **argv) {
  unsigned int ary[NUM] = {8,123,11,10,4};
  
  qsort(ary,NUM,sizeof(unsigned int), Compare);
  for(unsigned i = 0; i < NUM; ++i) {
  	/* code */
  	printf("%d\n",ary[i] );
  }
  return 0;
}
