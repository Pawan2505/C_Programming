#include<stdio.h> 

int main( )
{
    char ch ='A';
    char *cptr = &ch; 
    char **cpptr = &cptr; 
    
    // printf("%d ",sizeof(ch)); //1 
    // printf("%d ",sizeof(cptr)); //4 or 8
    // printf("%d ",sizeof(*cptr)); //1 
    
      printf("%d ",sizeof(cpptr)); // 4
      printf("%d ",sizeof(*cpptr)); // 4 
      printf("%d ",sizeof(**cpptr)); // 1 
    
    return 0; 
}