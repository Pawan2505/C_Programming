#include<stdio.h> 
/*
        I/p a number 
        0 => zero 
        1 => one
        2 => two 
*/
int main()
{
    int num; 
    char *numbers[] = {"zero","one","two","three","four"}; 
    //printf("%d ",sizeof(numbers)); // 4 * 5 => 20 
    printf("Enter the num"); 
    scanf("%d",&num);//3 
    printf("%s",numbers[num]); //numbers[3]; 
    return 0;
}


/*
       char *str1 = "One"; 
       char *str2 = "Two";
       char *str3 = "Three";
       char *str4 = "Four";    

 char *arr[] = {"one", "two","three","four"};       

*/