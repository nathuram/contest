#include <stdio.h>

int main(void)
{
		int a, b, n;
		scanf("%d %d %d ", &n, &a, &b);

		int ans = (a + (b%n))%n;

		if (ans <= 0)
				ans = n + ans;
		
		printf("%d\n", ans);
		return 0;
}

