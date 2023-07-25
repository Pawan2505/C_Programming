#include<stdio.h> 
#include"Day14_1.h" 

int main()
{
    double rad,area; 

    printf("Enter the radius :: "); 
    scanf("%lf",&rad); 

    area = PI * rad * rad; 
    printf("%.2lf",area); 
    return 0;
}
//gcc Day14_1.c -E -o Day14_1.i  