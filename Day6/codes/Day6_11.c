/*
        A or a => Android 
        B or b => basic 
        c or C => C prog 
        d or D => Database 

*/
#include<stdio.h> 
int main(int argc, char const *argv[])
{
    char ch; 
    printf("Enter the character"); 
    scanf("%c",&ch);

    switch (ch)
    {
        case 'a': 
        case 'A': 
        printf("Android"); 
        break;

        case 'b': 
        case 'B': 
        printf("Basic"); 
        break;

        case 'c': 
        case 'C': 
        printf("C programming"); 
        break;

        case 'd': 
        case 'D': 
        printf("Database"); 
        break;
        
        default:
        printf("Invalid"); 
        break;
    } 
    return 0;
}
