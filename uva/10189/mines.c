#include <stdio.h>

int main(void)
{
		int m, n, fieldnum = 0;
		scanf("%d %d ", &n, &m);
		if (n == 0 && m == 0)
				return 0;

		while(1){

				fieldnum++;
				char arr[n][m];
				for (int i = 0; i < n; i++){
						for (int j = 0; j < m; j++)
								arr[i][j] = getchar();
						getchar();
				}

				printf("Field #%d:\n", fieldnum);
				for (int i = 0; i < n; i++){
						for (int j = 0; j < m; j++)
								if (arr[i][j] == '*')
										printf("*");
								else{
										int count = 0;
										for (int a = -1; a <= 1; a++)
												for (int b = -1; b <= 1; b++){
														if (a + i >= n || a + i < 0)
																continue;
														if (b + j >= m || b + j < 0)
																continue;
														if (a == 0 && b == 0)
																continue;

														if (arr[a+i][b+j] == '*')
																count++;
												}
										printf("%d", count);
								}

						printf("\n");
				}
				scanf("%d %d ", &n, &m);
				if (n == 0 && m == 0)
						return 0;
				else
					printf("\n");
		}

		return 0;
}

													
