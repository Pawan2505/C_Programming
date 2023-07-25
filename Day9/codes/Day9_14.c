#include<stdio.h> 
int main()
{
    int num = 10; 
    int *ptr = &num ; 
    int **pptr = &ptr; // pointer to pointer 
    printf("num = %d\n",num); //10 
    printf("*ptr = %d\n",*ptr);//10 
    // *ptr => valueat(ptr)=>10 

    printf("**pptr = %d \n",**pptr);//10 
    /*
            **pptr 
            valueat(valueat(pptr))
            valueat(valueat(200))
            valueat(100)
            10 
    */ 

    **pptr = 20; 
    printf("num = %d\n",num); //20 
    printf("*ptr = %d\n",*ptr);//20
    printf("**pptr = %d \n",**pptr);//20  
    
    
    printf("*\n *pptr = %u ",*pptr); //100 
    /*
              *pptr 
              valueat(pptr)
              valueat(200)
              100   
    */
    printf("ptr = %u ",ptr); //100 
    return 0;
}
 