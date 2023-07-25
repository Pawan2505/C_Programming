#include<stdio.h> 

int main( )
{
    int c = 10; 
    {
        int c = 10; 
        {
            printf("c = %d",c); //10 
            {
                c+=1;  
                printf("c = %d",c); //11 
            }
            printf("\n c = %d",c);//11 
        }
    }
    return 0; 
}



// int main()
// {
//     //int c = 10; 
//     {
//         {
//             {
//                 {
//                     int c = 1000; 
//                     //printf("\n %d ",c);//10  
//                 }
//             }
//         }
//     }
//     //printf("\n %d ",c);//NOT OK  
//     return 0;
// }
