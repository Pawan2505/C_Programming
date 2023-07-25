#include<stdio.h> 
int main()
{
    // int ans; 
    // int a = 0; 
    // int b = 1; 
    // int c = 0; 
    // ans = a++ && b++  || c++; 
    // //   (a++ && b++) || c++; 
    // //   (F++ && XXX) || 
    // //       F        || F++ 
    // //              F
    // printf("ans = %d a = %d b = %d c = %d",ans,a,b,c); 
    
    
    // int ans; 
    // int a = 1; 
    // int b = 1; 
    // int c = 0; 
    // ans = a++ && b++  || c++; 
    // //   (a++ && b++) || c++; 
    // //   (T++ && T++) || 
    // //         T      || XXX
    // //                T      
    // printf("ans = %d a = %d b = %d c = %d",ans,a,b,c); 
    
    // int ans; 
    // int a = 1; 
    // int b = 1; 
    // int c = 0; 
    // ans =  a   || b++ && c++; 
    // //    opr1 || opr2 
    // //     a   || (b++ && c++);  
    // //     T   || XXX 
    // //         T 
    // printf("ans = %d a = %d b = %d c = %d",ans,a,b,c); 
   
    // int ans; 
    // int a = 0; 
    // int b = 1; 
    // int c = 10; 
    // ans =  a++ || b++   || c++;
    // //          T       || ??? 
    // //     (a++ || b++) || c++; 
    // //     (F++ || T++) || 
    // //          T       || XXX
    // //              T 
    // printf("ans = %d a = %d b = %d c = %d",ans,a,b,c); 
   
   
    int ans; 
    int a = 1; 
    int b = 1; 
    int c = 0; 
    ans =  a++ && b++   && c++;
    //     (a++ && b++) && c++;
    //     (T++ && T++)
    //          T       && F++
    //              F 
    printf("ans = %d a = %d b = %d c = %d",ans,a,b,c); 
   
    return 0;
}
