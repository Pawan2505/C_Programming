#include<stdio.h> 
/*
    input a ammount if ammount is greater 
    than or equal to 5000 give 10% discount 
*/

int main( )
{
    float ammount , discount; 
    
    //1. Input 
    printf("Enter the ammount"); 
    scanf("%f",&ammount);//5000.00 

    //2.Processing  
    if(ammount>=5000.00)//3000.00 >= 5000.00=>F=>0 
         ammount = ammount * 0.90; 
    printf("Ammount = %.2f",ammount); 

    return 0; 
}
// int main( )
// {
//     float ammount , discount; 
    
//     //1. Input 
//     printf("Enter the ammount"); 
//     scanf("%f",&ammount);//5000.00 

//     //2.Processing  
//     if(ammount>=5000.00)//3000.00 >= 5000.00=>F=>0 
//     {
//         discount = ammount * 0.10; 
//         ammount = ammount - discount; 
//     }
//     printf("Ammount = %.2f",ammount); 

//     return 0; 
// }