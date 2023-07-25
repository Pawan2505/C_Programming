#include<stdio.h> 

int main( )
{
    int num = 10; 
    int num2 = 20; 
    //printf("          %d",num); //10 
    //width specifier 
    //printf("%10d",num); //right justified 
    //                 1 0  
    // - - - - - - - - - - 

    //printf("%-10d%d",num,num2); //left justified 
    // 1 0                 2 0 
    // - - - - - - - - - - 

    //printf("%010d",num); //right justified 
    // 0 0 0 0 0 0 0 0 1 0 
    // - - - - - - - - - - 

    float fvar = 12.32; 
    //float => %f 
    //printf("%f",fvar);
    //printf("%.2f",fvar);  
    
    //printf("%10.2f",fvar);//right justified 
    //           1 2 . 3 2 
    // - - - - - - - - - -  
    

    //printf("%-10.2f",fvar);//left justified 
    // 1 2 . 3 2 
    // - - - - - - - - - -  

    //printf("%010.2f",fvar);//right justified 
     //0 0 0 0 0 1 2 . 3 2
    // - - - - - - - - - - 
    
    printf("%.f",fvar); //12.32 => 12 
    
    int var = 10; 
    printf("%*.*f",var,var-8,fvar); 
    //      %10.2f
    //           1 2 . 3 2 
    // - - - - - - - - - -  
    
    return 0; 
}
/*
    1.Classwork
    2.Assignment ( try )
    3.MCQ ( solve )

    Next Day 
    MCQ discuss 

    Revise MCQ ( 3-5  times ) 

*/