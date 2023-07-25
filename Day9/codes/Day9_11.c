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

    printf("*ptr = %d\n",*ptr); //10 //Dereference operator - * 
    /*
            *ptr
            valueat(ptr)
            valueat(100)
            10 

    */  
    
    *ptr = 50;
    /*
            *ptr 
            valueat(ptr)
            valueat(100)
                        ===> 50 
    */ 
    printf("num = %d \n",num);//50 
    printf("*ptr = %d \n",*ptr);//50 
    /*
            *ptr 
            valueat(ptr)
            valueat(100)
            50 
    */
    *ptr = 60; 
    printf("num = %d \n",num);//60 
    printf("*ptr = %d ",*ptr);//60 
    return 0;
}
