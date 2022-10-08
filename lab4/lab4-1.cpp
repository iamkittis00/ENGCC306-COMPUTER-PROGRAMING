#include <stdio.h>
#define MAXID 10
int main(){
    char EmployeesID[MAXID];
    int Workhrs;
    int amount;
    printf("Employee ID : ");
    scanf("%s",&EmployeesID);
    printf("Working hrs = ");
    scanf("%d",&Workhrs);
    printf("Amount/hr(Bath) = ");
    scanf("%d",&amount);
    printf("Employees ID = %s Amount = %.2f Bath(s)",EmployeesID,(float)Workhrs * amount);
    return 0;
}
