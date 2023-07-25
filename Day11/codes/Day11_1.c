#include<stdio.h> 
void readArray(int arr[]); 
void printArray(int arr[]) ; 
int main()
{
    int arr[5]; 
    //arr++; // NOT OK 
    printf("Enter the array elements"); 
    readArray(arr); // base address 
    printf("Array elements are :: "); 
    printArray(arr); // base address 
    return 0;
}

void readArray(int arr[]) // array notation 
{
    //printf("\n %d ",sizeof(arr)); //4 ( pointer size )  
     int i; 
     for( i = 0 ; i < 5 ; i++)
           scanf("%d",&arr[i]);  
}

void printArray(int arr[]) // array notation 
{
     int i; 
     for( i = 0 ; i < 5 ; i++)
           printf("%d ",arr[i]);  
}

