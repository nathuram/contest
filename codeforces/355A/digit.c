#include <stdio.h>

int main(void)
{
		int k, n;
		scanf("%d %d ", &k, &n);

		if (n == 0){
				if (k == 1)
						printf("0\n");
				else
						printf("No solution\n");
				return 0;
		}

		printf("%d", n);
		for (int i = 1; i < k; i++)
				printf("0");
		printf("\n");

		return 0;
}
