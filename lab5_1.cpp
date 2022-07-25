#include <stdio.h>
int main() {
    int year ;
    printf("Input years : ");
    scanf("%d",&year);
    year = year % 4 ;
    switch (year)
    {
        case 0 :
            printf("February = 29 days");
        break;
        case 1 :
            printf("February = 28 days");
        break;
        case 2 :
            printf("February = 28 days");
        break;
        case 3 :
            printf("February = 28 days");
        break;
        default:
            printf("Error");
        break;
    }
    return 0 ;
}
