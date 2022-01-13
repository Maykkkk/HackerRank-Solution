#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, a, b, c, d, e;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
a = n%10;
n = n/10;
b = n%10;
n = n/10;
c = n%10;
n = n/10;
d = n%10;
n = n/10;
e = n%10;

int sum;
sum = a + b + c + d + e;
printf("%d",sum);
    return 0;
}
