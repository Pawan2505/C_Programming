#include<stdio.h> 

int main( )
{
    int arr[3][4] = {{1,2,3,4}, {10,20,30,40},{11,22,33,44}}; 
    int (*ptr)[4] = arr; 
    int row,col; 
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 4; col++)
        {
            printf("%u ", &arr[row][col]);
        }
        printf("\n");
    }
    printf("\n"); 

    //printf("%u ",ptr + 0); //400

    //printf("%u ",ptr + 1); //416 

    //printf("%u ",ptr + 2); //432

    // inner address 
    //printf("%u ",*(ptr + 0) ); //400

    //printf("%u ",*(ptr + 1)); //416 

    //printf("%u ",*(ptr + 2)); //432

    //printf("%u ",*(*(ptr + 0) ) ); //*(400) => 1

    //printf("%u ",*(*(ptr + 1)) ); //*(416) => 10  

    //printf("%u ",*(*(ptr + 2))); //*(432) => 11  

    //printf("%u ",*(ptr + 0) + 1 ); //404 

    //printf("%u ",*(ptr + 1)  + 1); //420  

    //printf("%u ",*(ptr + 2)+ 1 ); //436 

    // pointer notation 
    //printf("%u ",*(*(ptr + 0) + 1 ) ); //*(404) => 2  
    //printf("%u ",*(*(ptr + 1)  + 1) ); //*(420) => 20  
    //printf("%u ",*(*(ptr + 2)+ 1) ); //*(436) => 22  

    //printf("%u ",*(*(ptr + 0) + 1 ) ); 
    //printf("%u ",ptr[0][1]); //2  

    //printf("%u ",*(*(ptr + 1)  + 1) ); 
    //printf("%u ",ptr[1][1] );//20  

    //printf("%u ",*(*(ptr + 2)+ 1) );
    //printf("%u ",ptr[2][1] );//22  

    printf("%u ",ptr[2][-3] );//20 
    /*
            ptr[2][-3]
            *(*(ptr+2)+ -3)    
            *( *(ptr+2) - 3 ) 
            *(432 - 3 )
            *(432 - 3 * 4 )
            *(432 - 12)
            *(420)
            valueat(420)


    */

    return 0; 
}

//int (*ptr)[4] ==> ptr is a pointer to the block of 4 ints 