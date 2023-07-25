#include<stdio.h>
void fun( int *p ); 
int main()
{
    int n = 10; 
    fun( &n ); 
    printf("Inside the main function %d",n); //10 
    return 0;
}
void fun( int *p )
{
    *p++; 
}


// void fun( int *p ); 
// int main()
// {
//     int n = 10; 
//     fun( &n ); 
//     printf("Inside the main function %d",n); 
//     return 0;
// }

// void fun( int *p )
// {
//     ++*p; 
// }