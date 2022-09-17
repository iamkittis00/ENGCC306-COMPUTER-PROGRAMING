#include <stdio.h>
#include <string.h>

char input = 'y';
char name[100],maxname[100] ;
int salary,duration,i,resultavg,maxsalary,maxyear ;

int main ( ){
     while (input == 'y'){
        printf( "Do you want to Enter Employee Information (y/n) : " ) ;
        scanf( " %c" ,&input) ;
        switch (input){
            case 'y' :
                check_q() ;
                break ;      
            case 'n' :
                output() ;
                break ;
        }
    }//end while loop
    return 0 ;
}//end funtion main

void check_q ( ){
    printf( "Employee name : " ) ;
    scanf( " %[^\n]" ,&name) ;
    printf( "Salary (Bath/Mouth) : " ) ;
    scanf( "%d" ,&salary) ;
    printf( "Duration (Year) : " ) ;
    scanf( "%d" ,&duration) ;
    i++ ;
    resultavg = resultavg + salary ;
    while (salary >= maxsalary)
    {
        strcpy(maxname,name) ;
        maxsalary = salary ;
        maxyear = duration ;
        break;
    } //end while loop
}//end funtion void check

void output ( ){
    printf( "\nAverage of Salary : %.2f Bath",(float)resultavg / (float)i ) ;
    printf( "\nPayment of every month : %.2f Bath",(float)resultavg) ;
    printf( "\n** Most duration in this business ** : ") ;
    printf( "\n||----- Name : %s (%d Years) -----||",maxname,maxyear) ;
    printf( "\n||----- Salary : %.2f Bath -----||",(float)maxsalary) ;
}//end funtion output

