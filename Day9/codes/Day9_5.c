#include<stdio.h> 
int myfact(int num); 
int main( )
{
    int result; 
    result = myfact( 5 ); 
    printf("\n main :  %d",result); 
    return 0; 
}

int myfact(int num)
{
    int result; 
    
     if(num == 0 ) // terminating condition 
        return 1; 
     else 
       result = num * myfact( num - 1); 
    printf("\n num = %d result = %d",num,result); 
    return result;   
}