#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{int a,b,c,d;
float e,f,g,h;
scanf("%d%d",&a,&b);
c=a+b;
d=a-b;
scanf("%f%f",&e,&f);
g=e+f;
h=e-f;
printf("%d ",c);
printf("%d",d);
printf("\n%0.1f ",g);
printf("%0.1f",h);
return 0;
}
