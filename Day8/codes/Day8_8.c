#include<stdio.h> 
void sumpro(int a, int b); 
int main()
{

    int a = 10 , b = 4; // local variable 
    sumpro(a,b); 
    //printf("sum = %d , prod = %d",ps,pp); 
    /*
            ps and pp not avail inside main 
            ps and pp belongs to sumpro 
    */
    return 0;
}
void sumpro(int a, int b)
{
    int ps,pp;
    ps = a + b; 
    pp = a * b; 
   
}; 
