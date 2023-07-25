#include<stdio.h> 

int main( )
{
    int a; 
    a = 1;
    //a = 1,2,3,4,5,1000,2000,33;  
    //a = (1,2,3); //3 
    a = ( (1,2) , 3 ); //3 
    //  (   2  ,3  );
    //       3     
    printf("%d ",a);  
    return 0; 
}