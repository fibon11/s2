#include<stdio.h>
#include<math.h>

#include<stdlib.h>
int main(void)
{
	double a, b, c, s, s2;
	scanf_s("%lf %lf %lf", &a, &b, &c);
	s = (a + b + c) / 2.0;
	s2 = sqrt(s * (s - a) * (s - b) * (s - c));
	printf("s2=%f", s2);
	system("pause");
}