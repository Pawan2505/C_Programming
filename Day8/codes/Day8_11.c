#include<stdio.h> 
void sumpro(int a, int b); 
extern int ps,pp; // declaration  
int main()
{

    int a = 10 , b = 4; // local variable 
    sumpro(a,b); 
    printf("sum = %d , prod = %d",ps,pp); 
    return 0;
}
int ps,pp; // Global variable 
void sumpro(int a, int b)
{
    
    ps = a + b; 
    pp = a * b; 
   
}; 

