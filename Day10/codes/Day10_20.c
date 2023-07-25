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
    
    int *ptr = arr; 

    //printf("%d ",*ptr); //10 

    printf("%d ",++*ptr);//11
    //printf("%d ",arr[0]);//11 

    printf("%d ",*++ptr);//20 

    printf("%d ",*ptr++);//20 
    
    printf("%d ",*ptr); // 30  
    return 0;
}
