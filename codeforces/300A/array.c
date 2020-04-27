#include <stdio.h>

int main(void)
{
		int n, zc = 0, firstneg = 0, firstnegpos, neg = 0, lastneg;
		scanf("%d ", &n);

		int arr[n];
		for (int i = 0; i < n; i++){
				scanf("%d ", &arr[i]);

				if (arr[i] == 0)
						zc++;

				if (arr[i] < 0){
					lastneg = i;
					if (firstneg == 0) {
						firstneg = 1;
						firstnegpos = i;
					}
					else
							neg++;
			}
		}

		printf("1 %d\n", arr[firstnegpos]);
	
		if (neg%2 == 0){
			printf("%d ", n - zc - 1);
			for (int i = 0; i < n; i++)
					if  (i != firstnegpos && arr[i] != 0)
							printf("%d ", arr[i]);
			printf("\n");

			printf("%d ", zc);
			for (int i = 0; i < zc -1; i++)
					printf("0 ");
			printf("0\n");
		}
		else{
				printf("%d ", n - zc -2);
				for (int i = 0; i < n; i++)
						if (i != firstnegpos && i != lastneg && arr[i] != 0)
								printf("%d ", arr[i]);
				printf("\n");

				printf("%d ", zc+1);
				for (int i = 0; i < zc; i++)
						printf("0 ");
				printf("%d\n", arr[lastneg]);
		}

		return 0;
}

