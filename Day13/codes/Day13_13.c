#include<stdio.h>
#include<stdlib.h> 
int main()
{
    //heap section 
    // void* malloc(size_t size); 
   float *ptr; 
   ptr =(float*)malloc(sizeof(float)); //request
   if(ptr == NULL) // check 
   {
       printf("memory not allocated"); 
       exit(1); 
   } 
   *ptr = 10.55; //use 
   printf("%.2f",*ptr); 

   free(ptr); // to avoid memory leakage 

   ptr = NULL; // to avoid dangling pointer  

   return 0;
}
