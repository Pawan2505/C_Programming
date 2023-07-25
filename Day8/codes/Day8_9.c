#include<stdio.h> 
void sumpro(int a, int b); 
int ps,pp; // Global variable 
/*
        ps and pp will be allocated in datasection 
        by default => 0 
        scope => program 
        life => program 
*/
int main()
{

    int a = 10 , b = 4; // local variable 
    sumpro(a,b); 
    printf("sum = %d , prod = %d",ps,pp); 
    return 0;
}
void sumpro(int a, int b)
{
    
    ps = a + b; 
    pp = a * b; 
   
}; 
