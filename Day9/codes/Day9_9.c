#include<stdio.h> 
int main()
{
    int num = 10; 
    int *ptr;
    // ptr => name of pointer  
    //ptr is a pointer to a integer 
    //ptr will store address of int variable 
    
    ptr = &num; // referencing operation  
    printf("num = %d\n",num); //10 
    printf("&num = %u\n",&num); //100 
    printf("ptr = %u\n",ptr); //100 
    printf("&ptr = %u\n",&ptr); //200 
    return 0;
}
