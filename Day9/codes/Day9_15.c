#include<stdio.h> 

int main( )
{
    //local pointer => stack 
    int *ptr; 
    float *fptr; 
    char *cptr; 
    double *dptr; 
    /*
            32 bit compiler => 4 byte 
            64 bit compiler => 8 byte 

    */

    printf("%d ",sizeof(ptr)); //4 
    printf("%d ",sizeof(cptr));//4
    printf("%d ",sizeof(fptr));//4
    printf("%d ",sizeof(dptr));//4 
    return 0; 
}