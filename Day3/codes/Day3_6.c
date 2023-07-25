#include <stdio.h>
int main()
{
    
    int number;     // variable declaration
    int roll = 400; // variable declaration + init
    /*
           double basic_salary = 1000.00; 
           double total_salary = 2000.00;  
    */
    double basic_salary = 1000.00, total_salary = 2000.00;
    //we can declare multiple variables in single line

    char ch = 'C'; // variable declaration + init

    printf("Variables and datatypes \n");
    number = 120; //Assignment 
    printf("number = %d\n",number);//120
    //      number = 120
    roll = 800; //assignment 
    printf("roll = %4d",roll);    
    number = 600; //Assignment 
    printf("number = %d\n",number);//600 

    printf("basic-sal = %.2lf total-sal = %.2lf\n",basic_salary,total_salary); 
   
   
    printf("%d %d %.2lf %.2lf %c",roll,number,basic_salary,total_salary,ch); 
    return 0;
}
// Revision 

