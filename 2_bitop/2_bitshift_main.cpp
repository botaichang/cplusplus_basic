#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(int argc, char const *argv[])
{
	float a; 
	int count = 100;
	//printf("%d\n", a);

       struct timespec start,finish;
       double time_mul;
       double time_shift; 


       //============================================================
       //time for multiplication
       //============================================================
       a = 1.01f;
       clock_gettime(CLOCK_MONOTONIC,&start);
       for(unsigned i = 0; i < count; ++i) {
		a *= 2; 
       }
       clock_gettime(CLOCK_MONOTONIC,&finish);

       time_mul = (finish.tv_nsec - start.tv_nsec);
       printf("a = %f\n", a);
       printf("time for multiplication %f\n", time_mul);


       //============================================================
       //time for bitshift 
       //============================================================
       a = 1.01;
       clock_gettime(CLOCK_MONOTONIC,&start);
       for(unsigned i = 0; i < count; ++i) {
       	a  = a << static_cast<float>(1.0); 
       	/* code */
       }
       clock_gettime(CLOCK_MONOTONIC,&finish);
       time_shift +=  finish.tv_sec - start.tv_sec;
       printf("a = %f\n", a);
       printf("time for shift  %f\n", time_shift);
	
       return 0;
}
