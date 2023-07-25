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
    int index; 
    for( index = 0 ; index < 5 ; index++)
            printf("%u ",&arr[index]); 
    printf("\n"); 
    printf("%u ",arr); //104 

    printf("%u ",&arr + 1); 
    //100 + 1 * 20 => 120 
    return 0;
}
