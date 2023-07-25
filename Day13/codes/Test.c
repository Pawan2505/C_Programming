// #include<stdio.h>
// #include<string.h>
// int main( void )
// {
// char str[] = "A Sunbeam", rev[20];
// int i = strlen(str), j=0;
// i= i-1;  
// for( ; i>=0; rev[j++] = str[i--]);
// rev[j] = '\0';
// puts(rev);

// return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main( void )
// {
// char *str = "hello,\tSunbeam\n\0Karad Pune";
// printf("%d", strlen(str));
// return 0;
// }

// #include<stdio.h>
// int main( void )
// {
// printf("Sunbeam IT Park Hinjewadi"+8);
// // _format + 8 => pointer arithmatic 
// //     100 + 8 
// //     100 + 8 * 1 
// //     108  
// return 0;
// }

#include <stdio.h>
#include<string.h> 
int main(void)
{
	char dest[] = "Visual basic",src[] = "C++";
	puts(strcpy(&dest[7],src) - 7);
	return 0;
}