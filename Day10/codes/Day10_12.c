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
    
    printf("%u ",arr); //100
    
    printf("%u ",arr+1); //104 
    /*
            arr + 1
            100 + 1
            100 + 1 * 4 
            104  
    */
    printf("%u ",arr + 2); //108 
    /*
            arr + 2 
            100 + 2 
            100 + 2 * 4 
            108 
    */
    printf("%u ",arr + 3); //112    
    return 0;
}
