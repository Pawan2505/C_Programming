
#include<stdio.h>
//int sqr( int ); //global declaration 
int sqr( int n ); //global declaration 
int main()
{
    printf("%d",sqr(2)); 
    return 0;
}
int sqr( int n)
{
    return n * n; 
}


// #include<stdio.h>
// //int sqr( int ); //global declaration 
// int sqr( int n ); //global declaration 
// int main()
// {
//     int n=3; 
//     //int sqr( int n); //local declaration 
//     int res = sqr( n ); 
//     printf("%d",res); 
//     return 0;
// }
// int sqr( int n)
// {
//     return n * n; 
// }



// #include<stdio.h>
// int sqr( int n)
// {
//     return n * n; 
// }
// int main()
// {
//     int n=3; 
//     int res = sqr( n ); 
//     printf("%d",res); 
//     return 0;
// }

// #include<stdio.h>
// int sqr( int n); 
// int main()
// {
//     int n=3; 
//     int res = sqr( n ); 
//     printf("%d",res); 
//     return 0;
// }
// int sqr( int n)
// {
//     return n * n; 
// }
