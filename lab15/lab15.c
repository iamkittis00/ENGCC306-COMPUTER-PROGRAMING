#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Employee {
	char name[ 100 ] ;
	int age ;
	float salary ;
	char job[ 100 ] ;
}typedef Em ;
	
int inputdata( Em [] ) ;
void showdata( Em [], int ) ;
void calculate( float, Em [], int, char [] ) ;
	
int main() {
	Em nee[ 100 ] ;
	int n ;
	n = inputdata( nee ) ;
	printf("\n......................................\n\n") ;
	showdata( nee, n ) ;
	return 0 ;
}//end funtion main

int inputdata( Em set[] ) {
	int n = 0 ;
	FILE *fp ;
	fp = fopen( "salary.txt", "r" );
	if (fp == NULL ){
		printf( "Error opening file" ) ;
		exit( 0 ) ;
	}//end if
	fscanf( fp, "%s\t%s\t%s\t%s\n", set[0].name, set[0].name, set[0].name, set[0].name ) ;
	for ( int i = 0 ; i < 100 ; i++ ) {
		if (fscanf( fp, "%s\t%d\t%f\t%s\n", set[i].name, &set[i].age, &set[i].salary, set[i].job ) != EOF ) {
			n++ ;
			printf( "%s\t%d\t%.2f\t%s\n", set[i].name, set[i].age, set[i].salary, set[i].job ) ;
		}else {
			break ;
		}//end if else	
	}//end for
	fclose( fp ) ;
	return n ;
}//end funtion inputdata

void showdata( Em in[], int n ) {
	float salarymax = -999999999 ;
	char jobarr[100][100] = { "Programmer", "Support", "Advisor", "Founder", "HR" } ;
	char jobHolder[100] ;
	for ( int i = 0 ; i < 5 ; i++ ) {
		for ( int j = 0 ; j < 100 ; j++) {
			if ( jobarr[i][j] == '\0' ) {
				jobHolder[j] = '\0' ;
				break ;
			}//end if	
			jobHolder[j] = jobarr[i][j] ;
		}//end for	
		calculate(salarymax, in, n, jobHolder);
	}//end for	
}//end funtion showdata	

void calculate( float cmp, Em in[], int n, char opr[]) {
	char *name ;
	for (int i=0 ; i < n ; i++ ) {
		if ( strcmp(in[i].job, opr ) == 0 ) {
			if ( in[i].salary > cmp ) {
				cmp = in[i].salary ;
				name = in[i].name ;
			}//end if
		}//end if	
	}//end for
	printf("%s : %s %.2f bath\n",opr, name, cmp) ;
}//end funtion calculate