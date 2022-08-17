#include <stdio.h>

int main () {

    int array [100000] ;
    int num , i , j , z ;
    bool check ;

    printf( "input Array Size : " ) ;
    scanf( "%d", &num ) ;
    for ( i = 0 ; i < num ; i++ ) {
        printf( "Array[%d] : ", i ) ;
        scanf( "%d" ,&array[i] ) ; 
    } //end for

    printf( "Unique = " ) ;
    for ( j = 0 ; j < num ; j++) {
        check = false ;
        for ( z = 0 ; z < num ; z++) {
            if ( j != z ) {
                if ( array[j] == array[z] ) {
                check = true ;
                } //end if
            } //end if
        } //end for
        if ( check == false ) {
            printf( "%d ", array[j] );
        } //end if  
    } //end for

    return 0 ;

}//end funtions