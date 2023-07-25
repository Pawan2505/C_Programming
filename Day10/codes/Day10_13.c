#include<stdio.h> 
int main()
{
     //array 
     int arr[5] = {10,20,30,40,50}; // init list 
    /*
        array index starts from 0 to n-1 

        arr     

             10   20  30   40   50 
            [0]  [1]  [2]  [3]  [4]
            100  104  108  112  116 

            arr[0] => 1 
            arr[2] => 3 
            arr[4] => 5 
    */
   //The array name is treated as address of 0th element in any runtime expression.
   // name of array represents the base address  
    
    // pointer notation 
    //printf("%u ",*arr);
    printf("%d ",*(arr+0));//10   
    /*
            *arr
            valueat(arr)
            valuear(100) => 10

            *(arr + 0)
            *(100 + 0)
            *(100)
            valueat(100) => 10  
    */
     printf("%d ",*(arr +1)); //20 
     /*
                *(arr + 1)
                *(100 + 1 )
                *(100 + 1 * 4)
                *(104)
                valueat(104)

     */
    printf("%d ",*(arr +2));//30 
    /*
                *(arr + 2)
                *(100 + 2 * 4 )
                *(100 + 8)
                *(108)
                valueat(108)

    */
    printf("%d ",*(arr +3));//40  
    
    /*
            arr[0] => 10 ( array notation )

          array notation              pointer notation
            arr[0]          ==>         *(arr + 0)
            arr[1]          ==>         *(arr + 1)
            arr[4]          ==>         *(arr + 4)
    */
    return 0;
}
