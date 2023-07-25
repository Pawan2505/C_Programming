#include<stdio.h> 
int main()
{
     //array 
     int arr[5] = {1,2,3,4,5}; // init list 
    /*
        array index starts from 0 to n-1 

        arr     

             1    2    3    4    5 
            [0]  [1]  [2]  [3]  [4]
            100  104  108  112  116 

            arr[0] => 1 
            arr[2] => 3 
            arr[4] => 5 
    */
   //The array name is treated as address of 0th element in any runtime expression.
   // name of array represents the base address  
    
    printf("%d ",arr); //100
    printf("%d ",&arr[0]); //100 
    printf("%d ",&arr); //100 
    
    printf("\n"); 
     int index; 
    for( index = 0 ; index < 5 ; index++)
            printf("%u ",&arr[index]); 
    return 0;
}
