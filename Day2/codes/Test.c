#include<stdio.h> 

int main( )
{
    printf("Program starting ...\n");
    printf("Program started ...\n");
    printf("Program started ...\n");
    int num = 4; 
    int res = 4 / 0; //runtime error 
    printf("%d\n",res); 
    printf("Program about the end..\n"); 
    printf("Program ended..\n");
    return 0;  
}