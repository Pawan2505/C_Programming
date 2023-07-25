#include<stdio.h> 
int main()
{
    //sizeof( ) => operator ( keyword )    
    //sizeof => bytes => integer ( %d )
     
    int num1 = 10; 
    char ch = 'A'; 
    double dvar = 12.3; 
    float fvar = 10.3;   
    // printf("%d ",sizeof( num1 ));//4 bytes  
    // printf("%d ",sizeof( ch )); // 1 bytes 
    // printf("%d ",sizeof( dvar )); // 8 bytes 
    // printf("%d ",sizeof( fvar )); // 4 bytes 

    printf("%d ",sizeof( int ));//4 bytes  
    printf("%d ",sizeof( char )); // 1 bytes 
    printf("%d ",sizeof( double )); // 8 bytes 
    printf("%d ",sizeof( float )); // 4 bytes 

    return 0;
}
// 1 byte => 8 bits 

/*
        IMP 
        Number system 
        Decimal number system 
        binary number system 
        octal number system 
        hexadecimal number system 

        1s Compliment 
        2s Compliment 

        Binary addition 


*/