#include<stdio.h>
#include<string.h> 
//Global declaration 
struct emp // Blueprint
{
    int empno; //4 byte 
    char name[20]; // 20 byte 
    double salary; // 8 byte 
}; 
int main()
{
    //local structure 
    struct student 
    {
         int rollno; 
         char name[20]; 
    }; 
    // int x = 10;  //init 
    struct emp e1 = {1,"Ketan",10000.00};  
    struct emp e2 = {2,"Amit"}; 
    struct emp e3; 
    struct emp e4; 
    // e1,e2,e3,e4 are variables / object   

    //printf("%d %s %.2lf",e1.empno,e1.name,e1.salary);   
    /*
            int a; 
            int *ptr = &a; 
    */
    struct emp *p = &e1; // scale factor => 32 byte

    //printf("%d %s %.2lf",p->empno,p->name,p->salary);   
    /*
            int x; 
            x = 2; // assignment 

    */
    e3.empno = 3; 
    strcpy(e3.name,"Akshay");
    e3.salary = 5000.00;  
    
    //printf("%d %s %.2lf",e3.empno,e3.name,e3.salary);   
    /*
            int x; 
            scanf("%d",&x); 
    */
    printf("Enter empno name and sal"); 
    scanf("%d%s%lf",&e4.empno,e4.name,&e4.salary); 

    printf("%d %s %.2lf",e4.empno,e4.name,e4.salary); 
    return 0;
}
