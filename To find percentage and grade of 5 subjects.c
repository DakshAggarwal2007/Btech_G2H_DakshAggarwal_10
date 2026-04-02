#include <stdio.h>
#include <math.h>
int main() {
    float sub1,sub2,sub3,sub4,sub5,per;
    printf("Enter the marks of 1st subject:");
    scanf("%f",&sub1);
    printf("Enter the marks of 2nd subject:");
    scanf("%f",&sub2);
    printf("Enter the marks of 3rd subject:");
    scanf("%f",&sub3);
    printf("Enter the marks of 4rth subject:");
    scanf("%f",&sub4);
    printf("Enter the marks of 5th subject:");
    scanf("%f",&sub5);
    
    per=(sub1+sub2+sub3+sub4+sub5)/5;
    
    if (per>90 && per<=100){
        printf("Total percentage is:%f\n",per);
        printf("Grade:A");
    }
    else if (per>80 && per<=90){
        printf("Total percentage is:%f\n",per);
        printf("Grade:B");
    }
    else if (per>60 && per<=80){
        printf("Total percentage is:%f\n",per);
        printf("Grade:C");
    }
    else if (per<=60){
        printf("Total percentage is:%f\n",per);
        printf("Grade:D");
    }
   
    return 0;
}
