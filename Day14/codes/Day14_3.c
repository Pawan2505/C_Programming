#include<stdio.h>

#define ADD(a,b) (a+b)
#define MULTIPLY(a,b) (a*b)
#define SQR(x) ((x) * (x))


int main()
{
    printf("add = %d\n",ADD(3,4)); 
    //printf("add = %d",(3+4));
    printf("multiply = %d\n",MULTIPLY(3,4));  
    //printf("multiply = %d",(3 * 4 ) );  

    printf("multiply = %d\n",MULTIPLY(2+1,3+1)); // 6   
    //printf("multiply = %d\n",MULTIPLY(2+1*3+1));  

    printf("SQR = %d\n",SQR(2+3)); 
    //printf("SQR = %d\n",((2+3) * (2+3));//25  
    return 0;
}
