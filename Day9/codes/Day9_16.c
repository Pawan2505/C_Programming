#include<stdio.h> 
int main()
{
    int a =10; 
    int b =20; 
    int *p1 = &a; 
    int *p2 = &b; 
    int ans; 

    // ans = p1 + p2; //NOT OK 
    // ans = p1 * p2; //NOT OK
    // ans = p1 / p2; //NOT OK
    // ans = p1 % p2; //NOT OK   

    ans = p1 - p2; //OK 

    ans = *p1 + *p2; //10 + 20 
    printf("ans = %d",ans); 
    return 0;
}
