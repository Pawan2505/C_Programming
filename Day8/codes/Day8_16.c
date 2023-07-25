#include<stdio.h> 
//register int r = 500; // NOT OK 
int main()
{
    //register 
    //register int y; 
    //storage => cpu register ( fast accessible )
    //printf("%d ",y); // Garbage 
    {
        register int y = 100; 
        printf("%d ",y); // 100 
    }
    int x; // local variable => stack => process => RAM 
    //printf("%u ",&x); // address of x => OK 
    //printf("%u ",&y); // NOT OK 
    
    //register p = 10; 

     //int a = 10;
     //register int *ptr = &a;     

    //register int z = 10;   
    //int *ptr = &z; // NOT OK 
    
    //register static int i; // NOT OK 
    
    return 0;
}
