#include <stdio.h>

int main(void)
{
		int visit = 0, counter = 1;
		char str[101];

		scanf("%s", str);

		for (int i = 1; i < 101; i++){
				if (str[i] == '\0')
						break;

				if (str[i] == str[i-1])
						counter++;
				else{
						visit++;
						counter = 1;
				}

				if (counter == 5){
						visit++;
						counter = 1;
				}


		}

		printf("%d\n", visit);
		return 0;
}

