#include <stdio.h>

void somar(float, float, float *);

void somar(float x, float y, float *r)
{
	*r=x+y;
}

int main()
{
	float a, b, s;

	printf("A: ");
	scanf("%f", &a);
	printf("b: ");
	scanf("%f", &b);
	
	somar(a, b, &s);
	
	printf("S=%.2f\n", s);
return 0;
}
