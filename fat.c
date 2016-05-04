#include <stdio.h>

long fatorial(long);

long fatorial(long n)
{
	long r=1L;
	long f=n;
	while(f > 0)
	{
		r=f*r;
		f=f-1L;
	}
	
	return r;
}

int main()
{
	long n=0L;
	long f=fatorial(n);
	printf("N=%li, F=%li\n", n, f);
	return 0;
}
