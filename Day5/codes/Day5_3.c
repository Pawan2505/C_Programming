#include<stdio.h> 

int main( )
{
    //sizeof() is evaluated at compile time 

    int num; 
    char ch; 
    double d1; 
    short int s1; 
    int x = 1; 
    // printf("%d ",sizeof(10 + 2)); // 4 
    // printf("%d ",sizeof(num + ch + d1)); //double => 8 
    // printf("%d ",sizeof(10.22 + 'A')); // 8 bytes 
    // printf("%d ",sizeof(10.22f + 'A')); // 4 bytes
    // printf("%d ",sizeof(s1 + ch)); // 4 bytes 

    printf("%d ",sizeof( x = x + 1)); //4 bytes 
    printf("%d ",x); //1 
    return 0; 
}