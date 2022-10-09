#include<stdio.h>
#include<string.h>

struct Employees {
    char Name[ 20 ] ;
    int age ;
    int Salary ;
    char Job [ 20 ] ;
}  typedef Em ; 

void DefineEm( Em[] ) ;
int FindOldest(Em[] , int) ;
int FindLow_Salary(Em[] , int) ;
void ShowOldest(Em[] , int) ;
void ShowLow_Salary(Em[] , int) ;

int main() {
    int n = 7 ;
    Em A[ n ] ;
    DefineEm( A ) ;
    
    ShowOldest( A , FindOldest( A , n ) ) ;
    ShowLow_Salary( A , FindLow_Salary( A , n ) ) ;

    return 0 ;
}//end function main

void DefineEm( Em InputEm[] ){
    strcpy( InputEm[ 0 ].Name , "Pong" ) ;
    strcpy( InputEm[ 1 ].Name , "Sorm" ) ;
    strcpy( InputEm[ 2 ].Name , "Aoy" ) ;
    strcpy( InputEm[ 3 ].Name , "Ying" ) ;
    strcpy( InputEm[ 4 ].Name , "Yot" ) ;
    strcpy( InputEm[ 5 ].Name , "Pot" ) ;
    strcpy( InputEm[ 6 ].Name , "Vip" ) ;

    InputEm[ 0 ].age = 32 ;
    InputEm[ 1 ].age = 25 ;
    InputEm[ 2 ].age = 24 ;
    InputEm[ 3 ].age = 26 ;
    InputEm[ 4 ].age = 28 ;
    InputEm[ 5 ].age = 31 ;
    InputEm[ 6 ].age = 25 ;

    InputEm[ 0 ].Salary = 45000 ;
    InputEm[ 1 ].Salary = 23000 ;
    InputEm[ 2 ].Salary = 33250 ;
    InputEm[ 3 ].Salary = 34550 ;
    InputEm[ 4 ].Salary = 50000 ;
    InputEm[ 5 ].Salary = 24500 ;
    InputEm[ 6 ].Salary = 25450 ;

    strcpy( InputEm[ 0 ].Job , "Programmer" ) ;
    strcpy( InputEm[ 1 ].Job , "Support" ) ;
    strcpy( InputEm[ 2 ].Job , "Advisor" ) ;
    strcpy( InputEm[ 3 ].Job , "Programmer" ) ;
    strcpy( InputEm[ 4 ].Job , "Founder" ) ;
    strcpy( InputEm[ 5 ].Job , "HR" ) ;
    strcpy( InputEm[ 6 ].Job , "Programmer" ) ;
}//end function DefineEm

int FindOldest(Em InputEm[] , int n ){
    int Pos = -1 ;
    int Max = -99999 ;
    for( int i = 0 ; i < n ; i++ ){
        if( InputEm[ i ].age > Max ){
            Max = InputEm[ i ].age ;
            Pos = i ;
        }//end if 
    }// end for
    return Pos ;
}//end function FindOldest

int FindLow_Salary(Em InputEm[] , int n ){
    int Pos = -1 ;
    int Min = 99999999 ;
    for( int i = 0 ; i < n ; i++ ){
        if( InputEm[ i ].age < Min ){
            Min = InputEm[ i ].Salary ;
            Pos = i ;
        }//end if 
    }// end for
    return Pos ;
}//end function FindLow_Salary

void ShowOldest(Em InputEm[] , int Pos){
    printf( "Oldest = %s ( %2d ) %3d %10s\n" , InputEm[ Pos ].Name , InputEm[ Pos ].age , InputEm[ Pos ].Salary , InputEm[ Pos ].Job ) ;
}//end function ShowOldest

void ShowLow_Salary(Em InputEm[] , int Pos){
    printf( "Low Salary = %s ( %2d ) %3d %10s\n" , InputEm[ Pos ].Name , InputEm[ Pos ].age , InputEm[ Pos ].Salary , InputEm[ Pos ].Job ) ;
}//end function ShowLow_Salary