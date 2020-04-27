#include <stdio.h>

int strlength(char *s)
{
		int i = 0;
		while (s[i++] != '\0');
		return i-1;
}


int strcopy(char *s, char *t)
{		
		int i;
		for (i = 0; s[i] != '\0'; i++)
				t[i] = s[i];
		t[i] = '\0';

		return i;
}

int strcompare(char *s, char *t, int n)
{
		if (n <= 0)
				n = strlength(s) + 1; //we set it to strlen(s) + 1 to include NUL char. 
									  //If s is shorter than t, and s is the prefix of t, then the loop will go up to the NUL char and then terminate. 
									  //If s is longer than t and t is the suffix of s, the loop will terminate early. 
									  //If they're both of the same length, and equal, then the loop will process the whole string and then terminate
		for (int i = 0; i < n; i++){
				if (s[i] - t[i] != 0)
						return (s[i] - t[i]);
		}
		return 0;
}

				

int main(void)
{		
		char s[101];
		scanf("%s ", s);

		int n;
		scanf("%d ", &n);
		
		char inp[101], cand[101], flag = 0;
		for (int i = 0; i < n; i++){
				scanf("%s ", inp);
				if ( (strcompare(s, inp, strlength(s)) == 0) ){
						if (flag == 0){
								strcopy(inp, cand);
								flag++;
						}
						else if (strcompare(inp, cand, -1) < 0)
								strcopy(inp, cand);
				}
		}

		if (flag)
				printf("%s\n", cand);
		else
				printf("%s\n", s);

		return 0;

}



