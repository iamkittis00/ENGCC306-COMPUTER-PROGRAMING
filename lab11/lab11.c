#include<stdio.h>

char DetectOperator( char[] ) ;
int GetResult( int , int ) ;

int main() {
    char operator[ 100 ] ;

    printf( "Input : " ) ;
    scanf( "%d %c %d" ,&operator[0] ,&operator[1] ,&operator[2] ) ;

    DetectOperator( operator ) ;
    return 0 ;
}//end function main

char DetectOperator( char operator[] ) {
    int num1 = operator[0] ;
    int num2 = operator[2] ;
    int ans = 0 ;

    switch ( operator[1] ) {
        case '+' :
            ans = num1 + num2 ;
            GetResult( num1, ans ) ;
            break;
        case '-' :
            ans = num1 - num2 ;
            GetResult( num1, ans ) ;
            break;
        case '*' :
            ans = num1 * num2 ;
            GetResult( num1, ans ) ;
            break;
        case '/' :
            ans = num1 / num2 ;
            GetResult( num1, ans ) ;
            break;
    }
}//end function DetectOperator

int GetResult( int num1 , int ans ) {
    printf( "Result : %d" , ans ) ;
}//end function GetResult