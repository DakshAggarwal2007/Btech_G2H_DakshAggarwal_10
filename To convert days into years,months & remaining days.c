#include <stdio.h>
#include <math.h>
int main() {
    int day,month,year,days;
    printf("Enter the number of days:\n");
    scanf("%d",&day);
    year=day/365;
    printf("Total Years=: %d\n",year);
    month=day/30;
    printf("Total Months=: %d\n",month);
    days=(day%365)%30;
    printf("Total Days left=: %d\n",days);
    return 0;
}
