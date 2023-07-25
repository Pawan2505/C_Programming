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
    
    // printf("%d ",arr[0]); //10 // array notation  
    // printf("%d ",*(arr+0)); //10 // pointer notation 
    // printf("%d ",0[arr]);//10
    // printf("%d ",*(0+arr));//10
    // printf("%d ",arr[1-1]);//arr[0] =>10   
    // printf("%d ",*(arr+1 - 1)); //*(arr+0) => 10 

    //printf("%d ",arr[-1]); // Garbage 
    /*
                arr[-1]
                *(arr + -1)
                *(arr - 1)
                *(100 - 1)
                *(100 - 1 * 4)
                *(100 - 4)
                *(96)
                valueat(96)

    */
    //consider following example 
    //int arr[5] = {1,2,3,4,5}; 
    //printf("%d ",arr[ arr[0] ] );//2 
    //           arr[   1     ]
    //                  2 

    // printf("%d ",arr[0]); //10
    // printf("%d ",++arr[0]); //11
    // printf("%d ",arr[0]); //11  
    
    //printf("%d ",arr[0]++); //10 
    //printf("%d ",arr[0]); //11  
    
    printf("%d ",*arr + 50); //60 
    /*  
            *arr + 50 
            valueat(arr)
            valueat(100)
            => 10 
            10 + 50 
    */
    return 0;
}
