#include<stdio.h>
void fun(int **p); 
int main()
{
    int num = 10; 
    int *p = &num; 
    printf("\n inside the main :: %d",num);//10 
    fun( &p );  
    printf("\n inside the main :: %d",num);//20 
    return 0;
}
void fun(int **p)
{
    printf("\n %d ",**p); //10 
    **p = **p + 10;  
}












// void fun(int *p); 
// int main()
// {
//     int num = 10; 
//     printf("\n inside the main :: %d",num);//10 
//     fun( &num );  
//     printf("\n inside the main :: %d",num);//20 
//     return 0;
// }
// void fun(int *p)
// {
//     printf("\n *p = %d",*p); //10 
//     *p = 20; 
//     printf("\n *p = %d",*p); //20  
// }
