/*
        I/P a char 
        char => uppercase , lowercase , digit , special char 

        65 - 90 => uppercase 
        97 - 122 => lowercase 
        48 - 57 => digit 
*/
#include<stdio.h> 

int main ()
{
    char ch; 
    //1. Input 
    printf("Enter the char"); 
    //scanf("%c",&ch); 
    ch = getchar(); 

    if(ch>=97 && ch<=122)
    {
        printf("lower case "); 
    }
    else 
    {
        if(ch>=65 && ch<=90)
          printf("Upper case"); 
        else 
        {
            if(ch>=48 && ch<=57)
                printf("Digit");
            else 
                printf("Special symbol");  
        }
    }

    return 0; 
}

