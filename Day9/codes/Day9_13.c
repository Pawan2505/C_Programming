#include<stdio.h> 
int main()
{
    int num = 10; 
    int *ptr = &num ; 
    int **pptr = &ptr; // pointer to pointer 
    printf("num = %d\n",num); //10 
    printf("&num = %u\n",&num); //100
    printf("ptr = %u\n",ptr);//100 
    printf("&ptr = %u\n",&ptr);//200 

    printf("pptr = %u\n",pptr); //200
    printf("&pptr = %u\n",&pptr); //500 

    return 0;
}
/*
        int n = 10; 
        int *ptr = &n; 
        int **pptr = &ptr; 
        int ***ppptr = &pptr;  
*/