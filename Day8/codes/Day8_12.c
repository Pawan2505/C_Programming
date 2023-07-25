#include<stdio.h> 
int fun1( ); 
int fun2( ); 
extern int num1 ; 
int main()
{
    //extern int num1; 
    printf("%d ",num1); 
    fun1( ); 
    fun2( ); 
    return 0;
}
int fun1( )
{
    //extern int num1; 
    printf("%d ",num1); 
}
int fun2( )
{
    //extern int num1; 
    printf("%d ",num1); 
}
int num1 = 10; // Global variable 
