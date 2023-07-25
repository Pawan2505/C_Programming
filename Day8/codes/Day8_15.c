#include<stdio.h> 
// int main()
// {
//     int a = 10;// stack => main's FAR 
//     // a will be destroyed when main's FAR is destroyed 
//     static int num = 10; //data section 
//     // After main's FAR is destroyed 
//     // Afer completion of main 
//     return 0;
// }


int main()
{
    int a = 10;// stack => main's FAR 
    //static int num1 = a; // NOT OK 
    return 0;
}