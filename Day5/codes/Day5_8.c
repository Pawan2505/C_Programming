#include<stdio.h> 

int main( )
{
    int a = 1; 
    int b = 2; 
    int c = 3; 
    //a+=b+=c+=1;
    /*
         c = c + 1 => 3 + 1 => 4 
         b = b + c => 2 + 4 => 6   
         a = a + b => 1 + 6 => 7 

    */
    //printf("%d %d %d",a,b,c); // 7 6 4 
    
    a = b = c = 100; 
    printf("%d %d %d",a,b,c); 
    
    return 0; 
}

// int main( )
// {
//     int num = 1; 
//     //short hand assignment operator 
//     //num = num + 1; 
//     //num+=1; // num = num + 1   
//     //num-=10; // num = num - 10   
//     //num*=2; // num = num * 2; 
//     //num/=1; // num = num / 1;   
//     num%=1; // num = num % 1;   
//     printf("%d",num); //  
//     return 0; 
// }

/*
    unary 
    binary 
    ternary 

    num+=10; 
     num = num + 10; 


     num+=1; 
       num = num + 1; 

    num = +1; // unary opr     

    num-=1; 
      num = num - 1; 

    num = -1; //unary opr   
*/