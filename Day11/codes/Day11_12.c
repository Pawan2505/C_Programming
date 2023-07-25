#include<stdio.h> 
int main()
{
    //int a = 1; 
    //int b = 2; 
    //printf("%d %d",a,b); 
    
    int a = 10; 
    int *ptr = &a; 
    printf("%d %d",a,++*ptr);
    //            11  11 
    
    //calling convention ( CDECL )
    return 0;
}
// printf("%d %d %d ",a,++a,a++);
//  a++ + a++ + a++;  