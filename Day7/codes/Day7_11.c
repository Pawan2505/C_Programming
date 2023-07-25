#include<stdio.h> 
int addition(int a , int b); //function declaration 
int main( )
{
    //num1 and num2 are also called as local variables 
    int num1 = 10; 
    int num2 = 20;
    int res;  
    res = addition( num1 , num2 ); 
    printf("\nres = %d",res); //30 
    res = addition( 30 , 40 );   
    printf("\nres = %d",res); //70 
    int num3 = 100; 
    int num4 = 200; 
    res = addition( num3 , num4); 
    printf("\nres = %d",res); //300 

    addition( 500, 500 ); // function call 
    return 0; 
}
int addition(int a , int b) // a and b are called as formal arguments 
{
    // a and b  and z  are local variables 
    int z; 
    z = a + b; // 1000
    return z; //1000 
}

// int res = printf("hello world"); 