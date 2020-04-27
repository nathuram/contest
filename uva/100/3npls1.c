#include <stdio.h>
int collatz(int);

int main(void)
{
		int a, b;

		while (scanf("%d %d ", &a, &b) != EOF){
				int I = (a < b) ? a : b;
				int J = (a > b) ? a : b;
				long int maxlen = 0, len;
				for (int i = I; i <= J; i++){
						len = collatz(i);
						if (len > maxlen)
								maxlen = len;
				}

	
				printf("%d %d %ld\n", a, b, maxlen);
			}
	
		return 0;
}




int collatz(int n)
{
		int num = 0;
		while (n > 1){
				num++;
				if (n%2)
						n = (n*3) + 1;
				else
						n /= 2;
		}

		return ++num;
}
				
