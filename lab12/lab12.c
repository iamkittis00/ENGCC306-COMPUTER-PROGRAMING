#include <stdio.h>
#include <string.h>

void EmployeeInfo() ;
void Calculate() ;
void EmployeeOutput() ;

struct Employee {
    char name[100] ;
    float salary ;
    int year ;
} typedef Em ;

bool  condition = true ;
char  chack ;
int   n ,max ;
float avg ,sum ,salarymax ;
Em inputarr[100] ;

int main() {
    do {
        printf ( "Do you want to Enter Employee Information? (y/n) : " ) ;
        scanf  ( " %c",&chack ) ;
        if ( chack == 'y') {
            condition = true ;
            EmployeeInfo();
        } else if ( chack == 'n' ) {
            condition = false ;
            EmployeeOutput() ;
        }//end else if
    } while ( condition ) ; 
    return 0 ;
}//end funtion main

void EmployeeInfo() {
    n++ ;
    printf( "Employee Name : " ) ;
    char temp ;
    scanf ( "%c",&temp ) ;              //temp statement to clear buffer
    scanf ( "%[^\n]",inputarr[n].name ) ;
    printf( "Salary (Bath/Month) : " ) ;
    scanf ( "%f",&inputarr[n].salary ) ;
    printf( "Duration (Year) : " ) ;
    scanf ( "%d",&inputarr[n].year ) ;
    if ( inputarr[n].salary >= salarymax ) {
        salarymax = inputarr[n].salary ;
        max = n ;
    }//end if
}//end funtion EmployeeInfo

void Calculate() {
    for ( int i = 1 ; i <= n ; i++ ) {
        sum = sum + inputarr[i].salary ;
    }//end for
    avg = sum / n ;
}//end funtion Calculate

void EmployeeOutput() { 
    Calculate();
    printf( "\nAverage of Salary : %.2f Bath",avg ) ;
    printf( "\nPayment of every month : %.2f Bath",sum ) ;
    printf( "\n** Most salary in this business **" ) ;
    printf( "\nName : %s (%d Years)",inputarr[max].name,inputarr[max].year ) ;
    printf( "\nSalary : %.2f Bath",inputarr[max].salary ) ;
}//end funtion EmployeeOutput