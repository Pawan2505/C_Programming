#include<stdio.h> 
int main()
{
    int num = 10; 
    int *ptr;
    // ptr => name of pointer  
    //ptr is a pointer to a integer 
    //ptr will store address of int variable 
    
    ptr = &num; // referencing operation  
    printf("num = %d ",num);//10 

    printf("*ptr = %d",*ptr); //10 //Dereference operator - * 
    /*
            *ptr
            valueat(ptr)
            valueat(100)
            10 

    */  
    return 0;
}
// int *ptr = 100;  // NOT OK 