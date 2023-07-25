#include<stdio.h>
int main()
{
    //pointer arithmatic 
    int num = 10; 
    int *ptr = &num; 

    printf("%u ",&num); //100 
    printf("%u \n",ptr); //100

    //ptr = ptr  + 1 ;  
    //ptr = ptr % 1; // NOT OK
    //ptr = ptr / 1; // NOT OK  
    //ptr = ptr * 1; // NOT OK 
    /*
        ptr + n 
                = ptr + n * scale factor of ptr
                = 100 + 1 * 4
                = 100 + 4 
                = 104  
    */
    printf("%u \n",ptr); //104  
    ptr--;
    /*
            ptr = ptr - 1

                = 104 - 1 
                = 104 - 1 * 4 
                = 104 - 4 
                = 100     


    */
    printf("%u ",ptr); //100   
    return 0;
}
/*
        int *ptr; 
        ptr + 10 
        ptr + 10 * 4 
        ptr + 40 


        double *dptr; 
        dptr + 10;
        dptr + 10 * 8 
        dptr + 80  
*/  