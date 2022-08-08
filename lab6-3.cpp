#include <stdio.h>

int main() {
    int num ;
    int i ;
    int j ;
    int x ;
    int y ;
    char star = '*' ;
    printf( "Input your line : " ) ;
    scanf( "%d", &num ) ;
    if( num % 2 == 0 ) {
        for ( i = 1 ; i <= num ; i++ ) {
            for ( j = num ; j > i ; j-- ) {
                printf( " " ) ;
            }
            for (int x = 1 ; x < i ; x++ ) {
            printf( "%c", star ) ;
            }
            for (int z = 1 ; z <= i ; z++ ) {
            printf( "%c", star ) ;
            }
        printf( "\n" ) ;
        }
    } else if ( num % 2 == 1 ) {
        for ( i = 1 ; i <= num ; i++ ) {
            for ( j = 1 ; j < i ; j++ ) {
                printf( " " ) ; 
            }
            for (int x = num ; x > i ; x-- ) {
                printf( "%c", star ) ;
            }
            for (int z = num ; z >= i ; z-- ) {
                printf( "%c", star ) ;
            }
        printf( "\n" ) ;
        }
    } else {
        printf( "error" ) ;
    } //end else
    return 0 ;
} //end funtion