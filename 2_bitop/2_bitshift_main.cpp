#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(int argc, char const *argv[])
{
	int64_t  a; 
	int count = 5;
	a = 2;
	//printf("%d\n", a);

	for(unsigned i = 0; i < count; ++i) {
		a *= 2; 
	}

   struct timespec start,finish;
//   clock_gettime(CLOCK_MONOTONIC,&end);
//   time_mul = end.tv_sec - start.tv_sec;
    //time_mul = (end.tv_nsec - start.tv_nsec)/1000000000.0;
	printf("%d\n", a);
//	printf("%f\r\n", time_mul);


	a = 13;
    double time_shift = 0; 
    clock_gettime(CLOCK_MONOTONIC,&start);
	for(unsigned i = 0; i < count; ++i) {
		a <<= 1; 
		/* code */
	}
    clock_gettime(CLOCK_MONOTONIC,&finish);
    time_shift +=  finish.tv_sec - start.tv_sec;
    //time_shift = (end.tv_nsec - start.tv_nsec)/1000000000.0;
	printf("%d\r\n", a);
	printf("%f\r\n", time_shift);
	
	return 0;
}
