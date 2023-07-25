#include<stdio.h> 
void display(  int res ); 
int addition(  int a , int b);
int accept_num( void ); 
int main()
{
    int res; 
    int num1 = accept_num( ); 
    int num2 = accept_num( );
    addition( num1 , num2 );   
     
    return 0;
}
void display(  int res )
{
    printf("res = %d",res);
}

int addition(  int a , int b)
{
        int res; 
        res = a + b; 
        display( res ); //function call 
}

int accept_num( void )
{
    int num1; 
    printf("Enter the number"); 
    scanf("%d",&num1); 
    return num1; 
}
//main => addition( ) => display( ); 
//main <= addition( )<=display( );  