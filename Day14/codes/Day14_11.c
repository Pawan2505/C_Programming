#include<stdio.h> 
//Global declaration 
struct emp // Blueprint
{
    int empno; //4 byte 
    char name[20]; // 20 byte 
    double salary; // 8 byte 
};

int main( )
{
    //int arr[3] = {1,2,3}; // init list 
      struct emp arr[3] = {
                    {1,"Ketan",10000.00},
                    {2,"Aditya",20000.00},
                    {3,"Amit",30000.00}    
                }; 

    int i; 
    for(i = 0 ; i < 3 ; i++)
            printf("%d %s %.2lf\n",arr[i].empno,arr[i].name,arr[i].salary);             
    return 0; 
}