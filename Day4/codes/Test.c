// #include<stdio.h>
// int main(void)
// {
// char c1='z';

// printf("%d\t%c\t%o",c1-57,c1-'9',c1-32);
// //                 122-57,122-57,122-32

// return 0;
// }

#include<stdio.h>
int main(void)
{
signed char c1 = -1;//-1
unsigned char c2= -1;//0 to 255=> 256 
// 256 - 1 => 255 ( c2 )               
printf("%d\n",c1+c2 );
//            -1+255 => 254
return 0;
}