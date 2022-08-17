#include <stdio.h>

int main () {

    int n ;

    printf( "input : " ) ;
    scanf( "%d",&n ) ;

    while ( n > 1 ) {
        if ( n==2 || n==3 || n==5 || n==7 ) {
            printf( "%d ",n ) ;
        }
        else if ( n%2 > 0 && n%3 > 0 && n%5 > 0 && n%7 > 0 ) {
            printf( "%d ",n ) ;
        } //end if else   
        n-- ;   
    } //end while

    return 0 ;
    
}//end funtions