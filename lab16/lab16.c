#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Employee {
	char name[ 100 ] ;
	int age ;
	float salary ;
	char job[ 100 ] ;
} typedef em ;

int scandata( em [] ) ;
void showAge( em [], int ) ;
void showSalary( em [], int ) ;
void search( em [], int, int ) ;

int main() {
	FILE *fp ;
	int n , searcher ;
	em data[ 100 ] ;
	n = scandata( data ) ;
	printf( "...........................................\n" ) ;
	printf( "Find Age : " ) ;
	scanf( "%d", &searcher ) ;
	showAge( data, n ) ;
	showSalary( data, n ) ;
	search( data, n, searcher ) ;
}//end funtion main

int scandata (em data[] ) {
	int n = 0 ;
	FILE *fp ;
	fp = fopen( "salary.txt","r" ) ;
	if ( fp == NULL ) {
		printf( "Error opening file" ) ;
		exit( 0 ) ;
	}//end if
	fscanf( fp, "%s\t%s\t%s\t%s\n", data[0].name, data[0].name, data[0].name, data[0].name ) ;
	for ( int i = 0 ; i < 100 ; i++ ) {
		if (fscanf( fp, "%s\t%d\t%f\t%s\n", data[i].name, &data[i].age, &data[i].salary, data[i].job ) != EOF) {
			n++ ;
			printf("%s\t%d\t%.2f\t%s\n", data[i].name, data[i].age, data[i].salary, data[i].job ) ;
		}else {
			break ;
		}//end if else	
	}//end for
	fclose( fp ) ;
	return n ;
}//end funtion scandata

void showAge( em data[], int n ) {
	em pos ;
	for ( int i = 1; i < n ; i++ ) {
		for ( int j = 0 ; j < i ; j++ ) {
			if( data[i].age > data[j].age ) {
				pos = data[i] ;
				for( int k = i ; k > j ; k-- ) {
					data[k] = data[k-1] ;
				}//end for
				data[j] = pos ;
				break ; 
			}//end if
		}//end for
	}//end for
	printf( "\t\t\t" ) ;
	for ( int m = 0 ;  m < 5 ; m++ ) {
		printf( "%d\t", data[m].age ) ;
	}//end for
	printf( "\n" ) ;
	printf( "Age( 99 - 0 )\t\t" ) ;
	for ( int l = 0 ;  l < 5 ; l++ ) {
		printf( "%s\t", data[l].name ) ;
	}//end for
	printf( "\n" ) ;
}//end funtion showAge

void showSalary( em data[], int n ) {
	em pos ;
	for ( int i = 1; i < n ; i++ ) {
		for ( int j = 0 ; j < i ; j++ ) {
			if( data[i].salary < data[j].salary ) {
			    pos = data[i] ;
				for( int k = i ; k > j ; k-- ) {
					data[k] = data[k-1] ;
				}//end for
				data[j] = pos ;
				break ; 
			}//end if
		}//end for
	}//end for
	printf( "\n\t\t\t" ) ;
	for ( int m = 0 ;  m < 5 ; m++ ) {
		printf( "%.f\t", data[m].salary ) ;
	}//end for
	printf( "\n" ) ;
	printf( "Salary( 99999 - 0 )\t" ) ;
	for ( int l = 0 ;  l < 5 ; l++ ) {
		printf( "%s\t", data[l].name ) ;
	}//end for
	printf("\n") ;
}//end funtion showSalary

void search( em data[], int n, int agesearch ) {
	printf( "\nAge %d = ", agesearch ) ;
	for ( int i = 0 ; i < n ; i++) {
		if( data[i].age == agesearch ) {
			printf( "%s\t", data[i].name ) ;
		}//end if
	}//end for
}//end funtion search