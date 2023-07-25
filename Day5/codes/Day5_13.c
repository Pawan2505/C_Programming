#include<stdio.h>
int main()
{
    // && , || , ! => logical opr 
    /*
            && ( logical AND)
      opr1   opr2     res 
        T     T        T
        F     T        F
        T     F        F
        F     F        F     

    */
    // printf("%d ",12 && 13); // 1 
    // //           T  && T  ==> T  
    // printf("%d ",12 && 0); // 0 
    // //            T && F  ==> F
    // printf("%d ",0 && 13); // 0   
    // //           F && T  ==> F  
    // printf("%d ",0 && 0); // 0 
    // //           F && F ==> F 
    
    
    /*
            || ( logical OR)
      opr1   opr2     res 
        T     T        T
        F     T        T
        T     F        T
        F     F        F     

    */
    
    // printf("%d ",12 || 13); // 1 
    // //           T  || T  ==> T  
    // printf("%d ",12 || 0); // 1 
    // //            T || F  ==> T
    // printf("%d ",0 || 13); // 1   
    // //           F || T  ==> T  
    // printf("%d ",0 || 0); // 0 
    // //           F || F ==> F 
    
    
    // printf("%d ",!0);// 1 
    // // 0 => F => !F => T  
    // printf("%d ",!11);// 0
    // // 11 => T => !T => F 
    // printf("%d ",!!11);// 1
    // // !!11 =>! !11 =>! !T =>!  F => T 
    // printf("%d ",!-1);// T =>!T => F => 0      
    return 0;
}
/*
    any non-zero value is considered as true 
    1,100,200,300,333,-33 , -1 => True
    False => 0 

      int a = 1 , b = 2;   
      a!=b => relational opr 

      int b = 13;   
      a = !b => logical opr    


*/
