/* prog8_6, ?p?? x??n???? */
#include <stdio.h>
#include <stdlib.h>
double power(double, int); /* ??i???power()???? */
int main(void)
{
   double x; /* x?????? */
   int n;    /* n?O???? */

   printf("?�e?J????P????:");
   scanf_s("%lf,%d", &x, &n); /* ??J????P???? */
   printf("%lf??%d????=%lf\n", x, n, power(x, n));

   system("pause");
   return 0;
}

double power(double base, int n) /* power()?????w?q */
{
   int i;
   double pow = 1.0;
   for (i = 1; i <= n; i++) /* for() ?j??A?�Z?N????s??n?? */
      pow = pow * base;
   return pow;
}
