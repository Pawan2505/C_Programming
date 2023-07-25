#include <stdio.h>
int main()
{
    //array
    int arr[5] = {10, 20, 30, 40, 50}; // init list
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
    //int *ptr = &arr[0];

    int *ptr = arr; // pointer to the array

    //printf("%u ",arr); //100

    //printf("%u ", *(ptr + 0) );//10 ( pointer notation )  
    //printf("%u ",ptr[0]); //10
    //printf("%u ",ptr[1]);//20 
    //printf("%u ",*(ptr + 1) );//20   

    /*
        array notation          pointer notation 
            ptr[0]      ===>   *(ptr + 0 )
            ptr[1]      ===>   *(ptr + 1 )
    */
    // printf("%u ",ptr[0]); //10
    // printf("%u ",0[ptr]); //10
    // printf("%u ",ptr[1-1]); //10
    // printf("%u ", *(ptr + 0) );//10 
    // printf("%u ", *(0 + ptr) );//10
    // printf("%u ", *(ptr + 1 - 1) );//10  
    
    printf("%d ",ptr[-1]); //Garbage 
    /*
            ptr[-1]
            *(ptr + -1)
            *(ptr - 1)
            *(100 - 1)
            *(100 - 1  * 4)
            *(100 - 4)
            *(96)
            valueat(96)
            Garbage 

    */
    
    return 0;
}
