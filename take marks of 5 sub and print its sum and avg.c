#include <stdio.h>

int main() {
    float sub1, sub2, sub3, sub4, sub5;
    float sum, average;

    printf("Enter marks for five subjects (separated by space): ");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);

    sum = sub1 + sub2 + sub3 + sub4 + sub5;
    average = sum / 5;

    printf("\nTotal Marks = %.2f", sum);
    printf("\nAverage Marks = %.2f\n", average);

    return 0;
}
