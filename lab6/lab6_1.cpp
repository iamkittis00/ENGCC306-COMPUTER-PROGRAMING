#include <stdio.h>

int main () {

    int i ;
    int lines ;
    int j ;
    char star = '*' ;

    printf( "Input your line : " ) ;
    scanf( "%d",&lines ) ;
    for ( i = 1 ; i <= lines ; i++ ){
        for ( j = 0; j < i; j++){                  
            printf("%c",star) ;
        }
        printf("%s","\n") ;
    }
    return 0 ;
}//end funtions