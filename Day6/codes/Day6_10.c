#include<stdio.h> 

int main()
{
    
    int choice = 44; 
    switch( choice )
    {
        
        case 1 || 2:        //case 1:  
        printf("one"); 
        break; 

        case 0 && 44:       // case 0:  
        printf("Two"); 
        break; 

        case 3: 
        printf("Three"); 
        break;

        default: 
        printf("invalid"); 

    }
    return 0;
}

// int main()
// {
//     int number = 55; 
//     int choice = 33; 
//     switch( (int)1.5 )
//     //switch( 1.5 ) // NOT OK 
//     //switch( choice++ )
//     //switch( ++choice )
//     //switch( choice )
//     {
        
//         //case 2-1:     //case 1: 
//          case 1: 
//         //case 33: 
//         //case 1 : case 33: 
//         case 34:           //case 65:  
//         case -11:
//         //case number: // NOT OK   
//         printf("one"); 
//         break; 

//         case 2: 
//         printf("Two"); 
//         break; 

//         case 3: 
//         printf("Three"); 
//         break;

//         default: 
//         printf("invalid"); 

//     }
//     return 0;
// }

// int main()
// {
//     int choice = 5; 
//     switch( choice )
//     {
        
//         case 2: 
//         printf("One "); 
//         break; 
        
//         //case 1: //NOT OK 
//         case 1:  
//         printf("Two "); 
//         break; 
        
//         case 4: 
//         printf("Three ");
//         break; 

//         case 3: 
//         printf("Four ");
//         break; 

//         default: 
//         printf("invalid"); 

//     }
//     return 0;
// }

// int main()
// {
//     int choice = 5; 
//     switch( choice )
//     {
        
//         case 1: 
//         printf("One "); 
//         break; 
        
//         case 2: 
//         printf("Two "); 
//         break; 
        
//         case 3: 
//         printf("Three ");
//         break; 

//         case 4: 
//         printf("Four ");
//         break; 

//         default: 
//         printf("invalid"); 

//     }
//     return 0;
// }
