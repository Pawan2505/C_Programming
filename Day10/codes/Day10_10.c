#include<stdio.h> 
int main()
{
     //array 
     int arr[5] = {1,2,3,4,5}; // init list 
     printf("%d ",sizeof(arr));  // 5 * 4 => 20 
     printf("%d ",sizeof(arr[0]));  // 1 * 4 => 4 
     printf("%d ",sizeof(arr[-1]));  // 1 * 4 => 4 

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
   
    return 0;
}
