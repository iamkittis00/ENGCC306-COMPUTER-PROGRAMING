#include <stdio.h>

int main () {

    int array[100000] ;
    int num , i , j , z ;
    bool check ;

    printf( "Input Array Size : " ) ;
    scanf( "%d",&num ) ;
    i = 0 ;
    while ( i < num ) {
        printf( "Array[%d] : ", i ) ;
        scanf( "%d" ,&array[i] ) ;
        i++ ;
    } //end while

    printf( "Unique = " ) ;
    j = 0 ;
    while ( j < num ) {
        check = false ; 
        z = 0 ;
        while ( z < num ) {
            if ( j != z ) {
                if ( array[j] == array[z] ) {
                check = true ;
                } //end if
            } //end if
            z++ ;  
        } //end while
        if ( check == false ) {
            printf( "%d ", array[j] );
        } //end if
        j++ ;  
    } //end while
    return 0 ;
} //end funtion