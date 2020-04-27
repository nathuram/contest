#include <stdio.h>

int countobj(int n, char arr[][n],  int x, int y);

int main(void)
{
		int n;
		scanf("%d ", &n);
		char arr[n][n];

		for (int i = 0; i < n; i++)
				for (int j = 0; j < n; j++)
						scanf("%c ", &arr[i][j]);

		for (int i = 0; i < n; i++)
				for (int j = 0; j < n; j++)
						if (countobj(n, arr, i, j)){
								printf("NO\n");
								return 0;
						}

		printf("YES\n");
		return 0;
}

int countobj(int n, char arr[][n], int x, int y)
{
		int count = 0;

		if (x != 0)
				if (arr[x-1][y] == 'o')
						count++;

		if (x != n-1)
				if (arr[x+1][y] == 'o')
						count++;

		if (y != 0)
				if (arr[x][y-1] == 'o')
						count++;

		if (y != n-1)
				if (arr[x][y+1] == 'o')
						count++;

		return (count%2);
}
