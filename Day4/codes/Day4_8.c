#include<stdio.h> 

int main( )
{
    char ch; 
    // printf("%d ",sizeof(12.3));// 8 bytes 
    // printf("%d ",sizeof(12.3f));//float => 4 bytes 
    // printf("%d ",sizeof(12.3F));//float => 4 bytes 
    // printf("%d ",sizeof(10));// 4 bytes 

    //printf("%d ",sizeof('A')); //sizeof(65) => 4 byte 
    // const => char const => int 
    //printf("%d ",sizeof(ch)); // 1 byte 

    //printf("%d ",sizeof(10l));// long => 4 
    //printf("%d ",sizeof(10L));// long => 4  
    //printf("%d ",sizeof(10ll));// long long => 8  
    //printf("%d ",sizeof(10LL));// long long => 8 

    //printf("%d ",sizeof(10u));// unsigned => 4 
    //printf("%d ",sizeof(10U));// unsigned => 4 
    
    //printf("%d ",100);//100 
    
     //printf("%d ",0100);//octal to decimal 
     //printf("%o ",0100);//100 //octal to octal

     //printf("%d ",0x32); //hexadecimal to decimal 
     //printf("%x ",0x32); //hexadecimal to hexadecimal 

    printf("%c %o %x %d",65,65,65,65); 

    return 0; 
}