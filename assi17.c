
#include <stdio.h>
int main() {
int n, i, j;
float x_deg, x, sum = 0, fact, power;
float pi = 3.14;
printf("Enter angle in degrees: ");
scanf("%f", &x_deg);
printf("Enter number of terms: ");
scanf("%d", &n);
x = x_deg * pi / 180;

for(i = 1; i <= 2*n-1; i += 2) {
 power = 1;
for(j = 1; j <= i; j++) {
 power = power * x;
 }
 fact = 1;
 for(j = 1; j <= i; j++) {
 fact = fact * j;
 }
if(i % 4 == 1)
sum = sum + (power / fact);
else
 sum = sum - (power / fact);
}
 printf("Sum of sine series = %f\n", sum);
return 0;
}
