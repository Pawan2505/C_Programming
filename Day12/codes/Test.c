// #include <stdio.h>
// int main(void)
// {
// int a[10]={11,22,33,44,55};
// int *ptr=&a[4];
// printf("%d %d", ptr[-1], ptr[-3]);
// /*
//             11  22  33  44  55
//             100 104 108 112 116 
//             [0] [1] [2] [3] [4]

//             ptr = 116 

//             ptr[-1]
//             *(ptr + -1)
//             *(ptr - 1 )
//             *(116 - 1)
//             *(116 - 1 * 4)
//             *(116 - 4)
//             *(112)
//             valueat(112) => 44 

//             ptr[-3]
//             *(ptr + -3)
//             *(ptr - 3)
//             *(116 - 3)
//             *(116 - 3 * 4)
//             *(116 - 12)
//             *(104)
//             valueat(104)
//             22
            


// */
// return 0;
// }

// note: consider 64 bit compiler.
#include <stdio.h>
void print(int arr[]) // array notation 
{

//sizeof pointer here is 8 byte ( 64 bit compiler )
int n = sizeof(arr)/sizeof(arr[0]);
//          8     /     4 
//               2
// n = 2     
int i;
for (i = 0; i < n; i++)
printf("%d ", arr[i]);//11 22 
return;
}
int main( void )
{
int arr[] = {11, 22, 33, 44, 55, 66, 77, 88};
print(arr); // base address 
return 0;
}