#include<stdio.h> 
//int arr[5]; // 0 
int main()
{
    
    //array 
     int arr[5] = {1,2,3,4,5}; // init list 
    //int arr[5] = {1,2}; // partial init 
    //int arr[5]; // garbage 
    //int arr[] = {1,2,3,4,5}; // OK 
    //int arr[]; // NOT OK 
    //int arr[5] = {1,2,3,4,5,6,7,8,9,10}; // init list 
       
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
   
    int index; 
    for( index = 0 ; index < 5 ; index++)
            printf("%d ",arr[index]); 
    
    return 0;
}
// int arr[50] => 0 to 49 


/*
    Size of array is fixed (it cannot be grow/shrink at runtime).

        int arr[100]={1}; // 100 * 4 => 400 
        arr size should be given at compile time 
        int n; 
        int arr[10],int arr1[20]; // static approach 
        static => compile time 
        
        dynamic => runtime (dynamic memory allocation )
        (malloc ,calloc)

*/