#include <stdio.h>
#include <ctype.h>

int main(void)
{
		int n;
		scanf("%d ", &n);
		
		int keys[26], c;
		for (int i = 0; i < 26; i++)
				keys[i] = 0;
		
		int purchased = 0;
		for (int i = 0; i < 2*n - 2; i++){
				c = getchar();
				

				if (islower(c))
						keys[c - 'a']++;
				else{
						if (keys[c - 'A'] > 0)
								keys[c - 'A']--;
						else{
								purchased++;
						}
				}
		}

		printf("%d\n", purchased);

		return 0;
}



				
