#include <stdio.h>

int main(void)
{
		int n;
		scanf("%d ", &n);

		long int x = 0, y = 0, inp;
		for (int i = 0; i < n; i++){
				scanf("%ld ", &inp);
				x |= inp;
		}
		for (int i = 0; i < n; i++){
				scanf("%ld ", &inp);
				y |= inp;
		}

		printf("%ld\n", x+y);
		return 0;
}
