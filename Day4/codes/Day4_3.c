#include<stdio.h> 

int main( )
{   
    /*
            A - Z => 65 - 90
            a - z => 97 - 122 

    */

    //char ch = 'A';// 65 
    // 65 => binary => 1 byte ( 8 bits )
    //char are internally integral constants 
    //char ch = 65;// 65 
    //printf("%d %c",ch,ch); //65 A  
    
    //\n , \r , \t , \b => char constant  
    //printf("%d %d %d ",'\n','\r','\b'); //10 13 8  
    
     //printf("%d %c",'C','C'); 

    //printf("%d",'A'-'A'); // 65 - 65 => 0  

    //printf("%c",'A'+ 1 ); // 65 + 1 => 66 => %c => B  
    
    printf("%d %d",'0','9'); 
    //             48  57  
    
    return 0; 
}