#include<stdio.h> 

int main( )
{
    //enum  => user defined datatype 
    // int x; 
    int number = 1; 
    enum  //annonymous enum 
    {
        RED,BLUE,GREEN,VIOLET 
    }c1,c2,c3;
    return 0; 
}


// int main( )
// {
//     //enum  => user defined datatype 
//     // int x; 
//     int number = 1; 
//     enum color //creating the datatype 
//     {
//         //RED,BLUE,GREEN,VIOLET 
//          RED=1,BLUE,GREEN,VIOLET 
//         //RED=1,BLUE=2,GREEN=3,VIOLET=4 
//         //RED,BLUE=2,GREEN,VIOLET=56,BLACK  
//         //RED=-1,BLUE,GREEN=-3,VIOLET 
//         //RED=-1,BLUE,GREEN=-1,VIOLET // OK 
//         //RED=-1,BLUE,GREEN=-1,RED // NOT OK 
//         //RED=-1,BLUE,GREEN=-1,Red //  OK
//         //RED='A',BLUE,GREEN,VIOLET  
//         //RED=1.5,BLUE,GREEN,VIOLET // NOT OK   
//         //RED=(int)1.5,BLUE,GREEN,VIOLET // NOT OK   
//         //RED = number,BLUE,GREEN,VIOLET // NOT OK 
//     };
    
//     enum color c1,c2,c3;  
//     // c1 , c2 , c3 => variables 
//     // enum color => datatype 
    
//     return 0; 
// }

// int main( )
// {
//     //enum  => user defined datatype 
//     // int x; 
//     enum color //creating the datatype 
//     {
//         RED,BLUE,GREEN 
//     };
//     //printf("%d ",RED);//0 
//     //printf("%d ",BLUE);//1
//     //printf("%d ",GREEN);//2   
    
//     //  int         x;  
//     //data-type variable-name

//     enum color c1,c2,c3;  
//     printf("%d",sizeof(c1)); // 4 bytes   
//     printf("%d",sizeof(enum color)); // 4 bytes   
    
//     c1 = RED;
//     printf("%d ",c1); // 0   
//     c1++; 
//     printf("%d ",c1); // 1    
//     //RED++;// 0++ => 0 = 0 + 1; // lvalue error  
    
//     return 0; 
// }
/*
        enum IPL 
        {
            MI , RR , CSK 
        };

*/