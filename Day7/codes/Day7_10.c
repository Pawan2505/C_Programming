#include<stdio.h> 
int addition(int a , int b); //function declaration 
int main( )
{
    //num1 and num2 are also called as local variables 
    int num1 = 10; 
    int num2 = 20;
    int res;  
    res = addition( num1 , num2 ); // function calling 
    //num1 and num2 actual arguments 
    printf("res = %d",res); 
    return 0; 
}

//main ( ) =>calling function 
//addition() => called function

//user-defined function 
//function defination 
//          10      20 
int addition(int a , int b) // a and b are called as formal arguments 
{
    // a and b  and z  are local variables 
    int z; 
    z = a + b; // 30 
    return z; // 30 
}