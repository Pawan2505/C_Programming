#include<stdio.h> 
int main()
{
    int empno; 
    char name[20]; 
    double salary; 

    printf("Empno   :   "); 
    scanf("%d",&empno); 
    printf("Name    :   "); 
    scanf("%s",name);
    printf("Salary  :   "); 
    scanf("%lf",&salary); 

    printf("Empno   :   %d\n",empno); 
    printf("Name    :   %s\n",name);
    printf("Salary  :   %.2lf\n",salary);   
    return 0;
}
