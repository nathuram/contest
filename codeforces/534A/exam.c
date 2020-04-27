#include <stdio.h>

int main(void)
{
		int n, x, y;
		scanf("%d ", &n);

		if (n == 1 || n == 2){
				printf("1\n1");
				return 0;
		}

		if (n == 3){
				printf("2\n1 3");
				return 0;
		}
		
		printf("%d\n", n);

		if (n%2){
				x = n;
				y = n-1;
		}
		else{
				x = n-1;
				y = n;
		}

		for (int i = x; i > 0; i-= 2)
				printf("%d ", i);
		for (int i = y; i > 2; i -= 2)
				printf("%d ", i);
		printf("2\n");

		return 0;
}
