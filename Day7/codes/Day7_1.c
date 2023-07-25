#include<stdio.h> 
int main()
{
  //for loop 
  //Entry controlled loop ( while , for)
  // int i; 
  // for( i = 1 ; i <=5 ; i++)
  // {
  //   printf("%d ",i); // 1 2 3 4 5    
  // }
  // printf("\n outside the loop %d",i); // 6 
  /*
    //step1 is executed only once 
        for(step1 ; step2 ; step4 )
        {
              step3;  
        }

  */
  //  int i; 
  //  for( i = 1 ; i <=5 ;  )
  //  {
  //    printf("%d ",i++); // 1 2 3 4 5    
  //  }
  // printf("\n outside the loop %d",i); // 6 

  //  int i = 1; 
  //  for(  ; i <=5 ;  )
  //  {
  //    printf("%d ",i++); // 1 2 3 4 5    
  //  }
  // printf("\n outside the loop %d",i); // 6 

  //  int i = 1; 
  //  for(  ;  ;  )// infinite loop 
  //  {
  //    printf("%d ",i++); // 1 2 3 4 5    
  //  }
  // printf("\n outside the loop %d",i); // 6 

  //  int i;
  //  int j;  
  //  for( i=1,j=1;i<=5,j<=10;i++,j++  )
  //  {
  //    printf("i:%d j:%d \n",i,j); 
  //  }

  int i; 
  for( i = 1 ; i<10 ; i++);

  {
    printf("%d ",i); //10 
  }

  return 0;
}
