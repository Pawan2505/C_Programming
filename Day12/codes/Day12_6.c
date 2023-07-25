#include<stdio.h> 
int main(int argc, char *argv[],char *envp[])
{
    int i = 0; 
    for( i = 0 ; i < envp[i]!=NULL ; i++)
         puts(envp[i]); 
    //last entry of envp is NULL       
    return 0;
}
