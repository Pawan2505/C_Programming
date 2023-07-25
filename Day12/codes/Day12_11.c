
#include<stdio.h> 
int* fun( void ); 
int main()
{
    int *p;
    p = fun( ); 
    printf("%d ",*p);  
    return 0;
}

int* fun( void )
{
    static int num = 10; 
    return &num; 
}


// #include<stdio.h> 
// int* fun( void ); 
// int main()
// {
//     int *p;
//     p = fun( ); 
//     printf("%d ",*p);  
//     return 0;
// }

// int* fun( void )
// {
//     int num = 10; 
//     return &num; 
// }
