#include <stdio.h>
#include <string.h>

int static_time[] = {21, 6, 2018} ;
int max_year = 0, min_year = 100, max_month, min_month ;
char max_name[100], min_name[100] ;

void main(){
    FILE *info ;
    info = fopen("age.txt", "r") ;
    info == NULL ? printf("\nOpening File") : 0 ;
    calculate(info) ;
    show_min_max() ;
    fclose(info) ;
    while (getch() != ' ') ;
}//end funtions

void calculate(FILE *j){
    char name[100] ;
    int no, day, month, year;
    fscanf(j, "%*[^\n]");
    while (fscanf(j, "%d %s %d-%d-%d", &no, &name, &year, &month, &day) != EOF){
        day > static_time[0] ? month = month + 1 : 0;
        month = month + static_time[1] == 12 ? 0 : (month + static_time[1]) > 12 ? 12 - month + static_time[1] : (month + static_time[1]) < 12 ? static_time[1] - month : 0;
        year = month + static_time[1] >= 12 ? static_time[2] - year - 1 : static_time[2] - year;
        year > max_year ? max(name, year, month) : year < min_year ? min(name, year, month): 0;
        printf("%3s %d Years, %d Month \n", name, year, month);
    }//end while
}//end funtions

void max(char *n, int y, int m){
    strcpy(max_name, n);
    max_year = y;
    max_month = m;
}//end funtions

void min(char *n, int y, int m){
    strcpy(min_name, n);
    min_year = y;
    min_month = m;
}//end funtions

void show_min_max(){
    printf("\nMax: %s [%d Years, %d Months]", max_name, max_year, max_month) ;
    printf("\nMin: %s [%d Years, %d Months]", min_name, min_year, min_month) ;
}//end funtions