#include<stdio.h> 
#include<limits.h> 
int main()
{
    /*
        type modifier 
        signed 
        unsigned 
        short 
        long 
    */
     //int num = -10;
    //signed int num = 2147483647; // 4 bytes 
    // by default it is considered as signed
    /*
               4 bytes = 32 bits  
               1 bit => sign 
               ( 2 to the power 32 - 1 ) - 1   
               ( 2 to the power 31 ) - 1 
                  2147483647 => max range    
                  -2147483648 => min range 
    */ 
    //printf("%d",num);  
    //printf("%d ",INT_MAX);  //2147483647 
    //printf("%d", INT_MIN);  //-2147483648 
    
    unsigned int num1 = 4294967295; 
    //printf("%d ",sizeof(num1)); // 4 bytes 

     /*
               4 bytes = 32 bits  
               1 bit => sign 
               ( 2 to the power 32  ) - 1   
               
                 
    */
     printf("%u ",num1);  
    //printf("%u ",UINT_MAX); //4294967295 
    
    return 0;
}
