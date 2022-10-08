#include <stdio.h>
int main() {
    
    int year ;
    printf("years : ");
    scanf("%d",&year);
    year = year % 4 ;
    if( year == 0){
    	
        printf("February = 29 days");
    } else {
        printf("February = 28 days");
    }
    return 0;
}
