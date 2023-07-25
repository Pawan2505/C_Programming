#include<stdio.h> 

int main( )
{
   /*
          1. Declare 3 variables 
          2. Input 2 numbers
          3. Perform addition on 2 numbers and store it in third number 
          4. Display the output     

   */ 
        int num1,num2,result; 
        //1.Input
        printf("Enter the two integer numbers :: "); 
        scanf("%d%d",&num1,&num2);  

        //2.Processing  
        result = num1 + num2; 

        //3.Output 
        printf("result = %d",result); 
}


// int main( )
// {
//     char ch; 
//     printf("Enter the char"); 
//     scanf("%*c%c",&ch); 
//     printf("%c",ch); 
//     return 0; 
// }


// int main( )
// {
//     int i; 
//     float f; 
//     double d; 

//     printf("Enter the i , f , d :: "); 
//     scanf("%d%f%lf",&i,&f,&d);
//     printf("%d %.2f %.2lf",i,f,d);  


//     return 0; 
// }

// int main( )
// {
//     int i; 
//     float f; 
//     double d; 

//     printf("Enter the integer number :: "); 
//     scanf("%d",&i);
    
//     printf("Enter the float type value :: "); 
//     scanf("%f",&f);
    
//     printf("Enter the double type value :: "); 
//     scanf("%lf",&d);

//     printf("%d %.2f %.2lf",i,f,d); 



//     return 0; 
// }


// int main( )
// {
//     int a,b;
//     printf("Enter the value a and b \n"); 
//     scanf("%d%d",&a,&b); //avoid space in scanf 
//     printf("%d %d",a,b); 
//     return 0; 
// }


// int main( )
// {
//     int a,b;
//     printf("Enter the value a : \n"); 
//     scanf("%d",&a);

//     printf("Enter the value b : \n");
//     scanf("%d",&b);  

//     printf("%d %d",a,b); 

//     return 0; 
// }


// int main()
// {
//     //scanf(); 
//     int num; 
//     printf("Enter the integer number"); 
//     scanf("%d",&num); 

//     printf("number = %d",num); 
//     return 0;
// }
