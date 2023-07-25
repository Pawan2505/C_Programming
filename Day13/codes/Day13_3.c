#include <stdio.h>
int main()
{
    //2D array
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    /*
        arr 
                  [0]   [1]   [2]
          [0]      1     2     3   
          100     100   104   108  

          [1]      4     5     6   
          112     112   116   120 

          [2]      7     8     9 
          124     124   128   132  
    */

    int row, col;
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            printf("%u ", &arr[row][col]);
        }
        printf("\n");
    }

    //name of array represents the base address
    printf("\n");
    
    //printf("%u ",*(arr + 0) + 1  );//104 
    /*
            *(arr + 0) + 1 
            *(100 + 0) + 1 
            *(100) + 1
            100 + 1 
            100 + 1 * 4 
            104 
    */ 
    //printf("%u ",*(arr+1) + 2  ); //120 

    //printf("%u ",*(arr + 2) + 2  ); //132 

    //pointer notation of 2D array  
    //printf("%u ",*(*(arr + 0) + 1 ) ); //2 

    //printf("%u ",*(*(arr + 1) + 2 ) );// 6 

    //printf("%u ",*(*(arr + 2)+2 ));// 9    
    
    //printf("%d ",arr[0][1]); // array notation 
    //printf("%d ",*(*(arr+0)+1) ); // pointer notation 

    //printf("%d ",arr[1][2]); //array notation 
    //printf("%d ",*(*(arr + 1)+2)); // pointer notation 
    return 0;
}
/*
    array notation              pointer notation 
            arr[1][1] ======> *(*(arr + 1) + 1)

            arr[2][1] ======> *(*(arr + 2) + 1)   
*/