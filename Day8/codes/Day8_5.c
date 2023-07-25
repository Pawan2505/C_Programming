#include<stdio.h> 
void fun( int num ); 
int main()
{
    int num = 4; 
    //fun( ++num ); 
    fun( num++ ); 
    printf("\ninside main function : %d",num);//5  
    return 0;
}
void fun( int num ) //4 
{
    printf("\ninside fun function : %d",num); //4
}
