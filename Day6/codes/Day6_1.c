#include<stdio.h> 
int main()
{
    //Bitwise AND( & )
    printf("%d ",10 & 5); 

    //Bitwise OR( | )
    //printf("%d ",10 | 5); 

    //Bitwise XOR( ^ )
    //printf("%d ",10 ^ 5); 
    
    //Bitwise NOT ~
    printf("%d ",~10); //-(n+1)=>-(10 + 1)=>-11 
    /*
                ~10

              0000 1010  (binary of 10)
               ~ (invert the bits)
              1111 0101 => o/p   

              1s Compliment => 0000 1010   
              2s Compliment 

               0000 1010 
                       1
              -----------
               0000  1011   => (11) => -11       

    */
    
    return 0;
}
