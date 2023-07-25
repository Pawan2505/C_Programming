#include<stdio.h> 

int main( )
{
    // / => quotient 
    // % => modulus ( remainder )
    
    printf("%d ", 4 % 3 ); // 1  
    printf("%d ", -4 % 3 ); // -1 
    printf("%d ", 4 % -3 ); // 1 
    printf("%d ", -4 % -3 ); // -1   
    
    return 0; 
}