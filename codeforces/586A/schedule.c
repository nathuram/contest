#include <stdio.h>

int main(void)
{
		int x, count = 0;
		scanf("%d ", &x);
		
		int arr[x];
		for (int i = 0;  i < x; i++)
				scanf("%d ", &arr[i]);

		for (int i = 0 ; i < x; i++)
				count += arr[i];

		for (int i = 0; i < x - 2; i++)
				if (arr[i] == 1 && arr[i+1] == 0 && arr[i+2] == 1)
						count++;
		printf("%d\n", count);
		return 0;
}


		
