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
    int *ptr1 = &arr[4]; //116 
    int *ptr2 = &arr[0]; //100 

    int ans; 

    ans = ptr1 - ptr2; 
    /*
        ptr1 – ptr2 = (ptr1 – ptr2) / scale factor of ptr1
                      (116  - 100)  / 4 
                      (16) / 4 
                        4 


    */
    printf("ans = %d",ans); 
    
    return 0;
}
/*
    int num1 = 10; //104
    int num2 = 20; //100 
    int *ptr1 = &num1; 
    int *ptr2 = &num2; 

    ans = ptr1 - ptr2; 
          (ptr1 – ptr2) / scale factor of ptr1
           (104 - 100) / 4 
           4 / 4 
           1   
*/