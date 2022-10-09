#include<stdio.h>
#include<string.h>

struct Employee {
	char name[100] ;
	float salary;
} typedef em ;

int main() {
	em nee[100] ;
	char *name , check[100] = "-1" ;
	int breakloop = 1, num = 0 ;
	float sum = 0 , max = -999999999 , *salarymax ;
	while( breakloop != 0 ){
		printf( "Employee %d's Name : ", num+1 ) ;
		scanf( "%s", nee[num].name ) ;
		name = nee[num].name ;
		breakloop = strcmp( name , check ) ;
		if ( breakloop == 0 ){
			break ;
		}//end if
		printf( "Salary (Bath/Month) : " ) ;
		scanf( "%f", &nee[num].salary ) ;
		num++ ;
	}//end while
	for ( int i = 0 ; i < num ; i++ ) {
		sum = sum + nee[i].salary ;
		if ( nee[i].salary > max ) {
			max = nee[i].salary ;
			name = nee[i].name ;
			salarymax = &nee[i].salary ;
		}//end if
	}//end for
	printf( "\nAll salary per month : %.2f Bath\n", sum ) ;
	printf( "All salary per year : %.2f Bath\n", sum * 12 ) ;
	printf( "Tax (7%% per year) : %.2f Bath\n", sum * 12 * 7 / 100 ) ;
	printf( "Most tax in company : %s( %.2f Bath per year )", name, *salarymax * 12 * 7 / 100 ) ;
	return 0 ;
}//end funtion main