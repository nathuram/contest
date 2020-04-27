#include <stdio.h>

int main(void)
{
		int arr[2], conn, count = 0;
		scanf("%d %d ", &arr[0], &arr[1]);

		conn = (arr[1] < arr[0]);

		while (arr[0] > 0 && arr[1] > 0 && (arr[0] > 1 || arr[1] > 1)){
				arr[conn] += 1;
				arr[1-conn] -= 2;
				count++;
				conn = (arr[1] < arr[0]);
		}

		printf("%d\n", count);
		return 0;
}
