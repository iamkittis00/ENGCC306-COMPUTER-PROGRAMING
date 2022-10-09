#include <stdio.h>
#include <string.h>

int main () {

    char name[100] ;
    int i ;

    printf( "Input your name : " ) ;
    scanf( "%s", name ) ;
    printf( "\n----| Result : ") ;

    for ( i =  strlen ( name ); i >= 0; i--)
    {
        printf( "%c", name [i] ) ;
    }//end for
    
    return 0 ;
}//end funtions