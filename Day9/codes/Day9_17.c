#include<stdio.h> 
int main()
{
    int a = 10; 
    int *p = &a; 
    int *q;  
    q = p; 
    printf("%d ",*p);//10
    /*
            *p 
            valueat(p)
            valueat(100)
            10
    */
    printf("%d ",*q);//10 
    /*
            *q 
            valueat(q)
            valueat(100)
            10 
    */ 
    return 0;
}
