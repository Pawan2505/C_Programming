#include<stdio.h> 
int main()
{
   int a = 10; // created on stack when main( ) is called 
   static int b = 20; // created in data section when program is started ( before main( ) is called )
   //static int c = a; // created in data section when program is started ( before main( ) is called )
                     //but trying to initialize with local variable ( which is not created yet)
                     // Compiler error     
   
   // to init static and global variables , use const values ( not local variables )
   return 0;
}
