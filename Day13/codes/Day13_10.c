#include<stdio.h> 
int main(int argc, char const *argv[])
{
    //a.exe 1 2 
    //printf("%u ",argv[0]); //92
    //printf("%u ",argv[1]);
    //printf("%u ",argv[2]); 

    //printf("%u ",*(argv + 0) + 0 ); //92 
    //printf("%u ",*(argv + 0) + 1 ); //93
    //printf("%u ",*(argv + 0) + 2 ); //94  

    //pointer notation 
   // printf("%c ",*(*(argv + 0) + 0 ) ); //a
   // printf("%c ",*(*(argv + 0) + 1 ) ); //.
   // printf("%c ",*(*(argv + 0) + 2 ) ); //e 

    //array notation 
    printf("%c ",argv[0][0] ); //a
    printf("%c ",argv[0][1] ); //.
    printf("%c ",argv[0][2] ); //e
    return 0;
}
