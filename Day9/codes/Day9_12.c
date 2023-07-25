#include<stdio.h> 
int main()
{
    int num = 10; 
    int num2 = 120; 
    int *ptr = &num;
    printf("num = %d ",num);//10 

    printf("*ptr = %d\n",*ptr); //10 
    // *ptr => valueat(ptr) => valueat(100) => 10 
    
    ptr = &num2; //pointer is updated 


    printf("Afer update ..\n"); 
    printf("%d ",*ptr); //120 
    // *ptr => valueat(ptr)=>valueat(300)=> 120 
    printf("%d \n",num2); //120 
    *ptr = 75; 
    // valueat(ptr) =>valueat(300) ===========> 75 
    printf("%d ",*ptr); //75 
    printf("%d ",num2); //75 
    
    return 0;
}
