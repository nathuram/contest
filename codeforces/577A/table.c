#include <stdio.h>

int main(void)
{
		long int n, x, count = 0;
		scanf("%ld %ld ", &n, &x);

		for (int i = 1; i <= n; i++)
				if (x % i == 0 && x/i <= n)
						count++;

		printf("%ld\n", count);
		return 0;
}


