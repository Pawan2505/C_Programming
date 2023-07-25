#include<stdio.h> 
void sumpro(int a, int b); 
int main()
{
    auto int d; // auto indicates local variable  
    //(in function variable ) => auto => optional 
    int c;  // if not init => garbage 

    int a = 10 , b = 4; // local variable 
    /*
            a,b,c,d will be created when main is called 
            on main's FAR ( on stack )
    */
    //printf("c = %d",c); // Garbage 
     {
         int c = 10; 
         printf("\n %d",c); //10 
         {
             int c = 100; 
             printf("\n %d",c);//100 
             {
                 int c = 1000; 
                 printf("\n %d",c); //1000 
             } 
             printf("\n %d",c); //100 
         }
         printf("\n %d",c); //10 
     }
    //printf("\n Inside main : a = %d b = %d",a,b); // 10 4 

    sumpro(a,b); 
    return 0;
}
void sumpro(int a, int b)
{
    int ps,pp;
    /*
            a,b,ps,pp will be created when sumpro is called 
            on sumpro's FAR 
    */
   ps = a + b; //14  
   pp = a * b; //40 
   //printf("sum = %d prod = %d",ps,pp);  
   a++; 
   b++; 
   /*
            modifying a,b in sumpro's FAR will not 
            affect main's "a" "b" variable

            a,b,ps,pp will be destroyed from the stack  

   */ 
}; 
