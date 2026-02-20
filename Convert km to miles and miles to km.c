#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c;
    printf("Enter the distance in miles:\n");
    scanf("%f",&a);
    printf("Enter the distance in kms:\n");
    scanf("%f",&b);
    printf("The distance in kms is: %f\n",a*1.61);
    printf("The distance in miles is: %f\n",b*0.62);
    return 0;
}
