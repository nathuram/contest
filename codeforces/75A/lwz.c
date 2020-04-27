#include <stdio.h>

int pwr(int a, int b)
{
		int out = 1;	
		for (int i = 0; i < b; i++)
				out *= a;
		
		return out;
}

int remzero(int n)
{
		int out = 0, i = 0;
		while (n){
				if (n%10)
						out = out + ((n%10) * pwr(10, i++));
				n /= 10;
		}

		return out;
}

int main(void)
{
		int a, b, c, sum;
		scanf("%d %d ", &a, &b);

		c = remzero(a + b);
		sum = remzero(a) + remzero(b);

		if (c == sum)
				printf("YES\n");
		else
				printf("NO\n");
		

		return 0;
}

