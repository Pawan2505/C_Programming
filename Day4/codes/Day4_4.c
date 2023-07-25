#include<stdio.h> 
int main()
{
    //signed , unsigned 
    char ch = 127 ;
    //signed char ch; 
    /*
            char => 1 byte 
            1 byte => 8 bits
            (2 to the power 8 - 1 ) - 1
            (2 to the power 7 ) - 1
            127 => max range   
            -128 => min range 
    */
    //printf("%d ",ch);  
    unsigned char ch1 = 255;
     /*
            char => 1 byte 
            1 byte => 8 bits
            (2 to the power 8  ) - 1
            256 - 1 
            255 => max range     
            
    */ 
    printf("%u ",ch1); //255 
    return 0;
}
