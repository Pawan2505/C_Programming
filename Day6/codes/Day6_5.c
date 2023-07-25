#include<stdio.h> 
int main()
{
    int num1 = 10; 
    int num2 = 50; 
    int num3 = 300; 
    if(num1 > num2) // 10 > 300 => F 
    {
         if(num1 > num3) 
         {
             printf("num1 is greatest");    
         }
         else 
         {
             printf("num3 is greatest");    
         }
    }
    else 
    {
        if(num2 > num3) // 50 > 300 => F 
        {
            printf("num2 is greatest");    
        }
        else 
        {
            printf("num3 is greatest");    
        }   
    }
    return 0;
}
