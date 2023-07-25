#include<stdio.h> 
static int num2 = 20; //file scope 
int num3 = 50; // program scope 
int main()
{
    static int num1 = 10; // data section => block scope 
    // before main 
    // destroyed after main 
    return 0;
}

void fun1( )
{
    //printf("%d",num1); // NOT OK 
    printf("%d",num2); // OK 
}
