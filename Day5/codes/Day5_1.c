#include<stdio.h> 

int main( )
{
    int a; 
    float b; 
    a = 23 / 5; //(int) /(int) => (int)(4.6) =>4 
    //RHS => 4 (int)
    //LHS=>int => 4 
    //printf("%d",a); // 4 
    
    b = 23 / 5; //(int)/(int) => 4.6 => 4 
    //RHS => 4(int)
    //LHS => float
    //4.0<=4
    //printf("%.1f",b); // 4 
    
    b = 23.0f / 5; //(float) /(int) =>float => 4.6
    // RHS => 4.6
    // LHS => float    
    printf("%.2f",b); // 4 


    return 0; 
}
/*
    double 
    float
    int
    char 
if 2 operands are of diff type then smaller 
type is promoted to larger type for calculation 


 int + int => int 
 int + double => double 
 char * int => int 
 short / int => int 
 int / float => float 

 char and short are promoted to "int"
 for arithmatic calculation 
    char + char => int 
    short + char => int 
    char + short => int 

    (float)23 => 23 is an integer consider it as a float 
    for this calculation 

*/