#include<stdio.h> 
int main(int argc, char const *argv[])
{
    int *ptr; 
    char *cptr; 
    float *fptr; 
    double *dptr; 
    //scale factors 
    printf("%d",sizeof(*ptr));// 4 
    printf("%d",sizeof(*cptr)); //1
    printf("%d",sizeof(*fptr)); //4
    printf("%d",sizeof(*dptr)); //8 
    return 0;
}
