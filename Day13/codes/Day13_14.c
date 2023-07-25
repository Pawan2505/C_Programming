#include<stdio.h>
#include<stdlib.h>  
int main()
{
    //calloc => void* calloc(size_t n , size_t size); 
    int *ptr; 
    ptr = (int*)calloc(3,sizeof(int));
    if(ptr == NULL)
    {
        printf("mem not allocated"); 
        exit(1); 
    }
    int i; 
    for( i = 0 ; i<=2 ; i++ )
        *(ptr + i ) = 10 * (i + 1); //use 
    for( i = 0 ; i<=2 ; i++ )
       printf("%d ",ptr[i]); //*(ptr + i )

    free(ptr); // to avoid memory leakage 
    ptr = NULL; // to avoid dangling pointer     
    return 0;
}
