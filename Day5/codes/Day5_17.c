#include<stdio.h> 

int main( )
{
    //int x; 
    //x = printf("Hello world"); 
    //x = printf("\n\tHello world"); 
    //printf("\n%d",x); //13  
    
    // int a = 10; 
    // int c; 
    // c = printf(" %10d ",a);
    // //                     1 0  
    // //    - - - - - - - - - - -  -  
    // printf("%d",c); //12 

    int y = 10; 
    int x; 
    int num = 10; 
    x = printf("num = %d",num) + ++y; 
    //          num = 10   
    //              8          +  11 
    //                  19 
    printf("\n %d",x); //19 
    return 0; 
}