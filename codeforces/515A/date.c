#include <stdio.h>

int main(void)
{
		long int a, b, s, sum;
		scanf("%ld %ld %ld ", &a, &b, &s);

		if (a < 0)
				a = a * -1;
		if (b < 0)
				b = b * -1;

		sum = a + b;
		if (sum > s || (s - sum)%2)
				printf("No\n");
		else
				printf("Yes\n");

		return 0;
}

