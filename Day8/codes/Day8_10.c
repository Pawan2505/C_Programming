#include<stdio.h> 
void sumpro(int a, int b); 
int ps,pp; // Global variable 
/*
      variable declared inside the function => local variables 
      variable declared outside the function => Global variables   
*/
/*
    global var => can accessed throughout the program 
    stored inside the data section 

        //created when program is started 
                    //even before main is called 
             //created in datasection 
        //destroyed when program is terminated 
                //after completion of main( ) 
        //global variable scope => program scope                    

*/


int main()
{

    int a = 10 , b = 4; // local variable 
    sumpro(a,b); 
    printf("sum = %d , prod = %d",ps,pp); 
    return 0;
}
void sumpro(int a, int b)
{
    
    ps = a + b; 
    pp = a * b; 
   
}; 

/*
      static int y  
        int x(global)
        main.c        f1.c     f2.c 

        gcc main.c f1.c f2.c => a.exe 

*/