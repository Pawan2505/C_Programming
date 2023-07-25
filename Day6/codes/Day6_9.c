#include<stdio.h> 

int main( )
{
    int num1 = 100; 
    int num2 = 20; 
    int ans; 
    /*
        if(num1 > num2)
            ans = num1; 
        else 
            ans = num2;
        printf("Greatest = %d",ans);  
    */
    //ans = num1 > num2 ? num1 : num2; 
    //      condtn    ? exp1 : exp2         
    //printf("%d",ans); 
    ans = num1 > num2 ? printf("%d is greatest",num1) : printf("%d is greatest",num2); 
    return 0; 
}
/*
                Greatest 
            num1 , num2 , num3 

ans =  num1 > num2 ? ( num1 > num3 ? num1 : num3 ) : ( num2 > num3 ? num2 : num3  );            


        greatest of a,b,c 

  a>b && a>c ? printf("%d",a) : ( b > c ? printf("%d",b) : printf("%d",c) );    


 max = a>b && a>c ? a : ( b > c ? b : c ); 
 printf("max = %d",max);     



*/