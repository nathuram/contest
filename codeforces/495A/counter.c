#include <stdio.h>

int arr[10][10] = {{1, 1, 1, 1, 1, 1, 0},	//0     
				   {0, 1, 1, 0, 0, 0, 0}, 	//1
				   {1, 1, 0, 1, 1, 0, 1},	//2 
				   {1, 1, 1, 1, 0, 0, 1},   //3
				   {0, 1, 1, 0, 0, 1, 1},	//4
				   {1, 0, 1, 1, 0, 1, 1},	//5
				   {1, 0, 1, 1, 1, 1, 1},	//6
				   {1, 1, 1, 0, 0, 0, 0},	//7
				   {1, 1, 1, 1, 1, 1, 1},	//8
				   {1, 1, 1, 1, 0, 1, 1}};	//9


// We need to check that given an integer X, what are the possible integers (from 0 to 9, that can show X, if some (or none) segment is broken. Thus, we need to count the number of integers, whose display can "devolve" into X


int devolve(int n)
{
		int count = 0;
		for (int i = 0; i < 10; i++){
				count++;
				for (int j = 0; j < 10; j++)
						if (arr[n][j] == 1 && arr[i][j] == 0){
								count--;
								break;
						}
		}
		
		return count;
}
int main(void)
{
		char x, y;
		scanf("%c", &x);
		scanf("%c", &y);

		x -= '0';
		y -= '0';

		printf("%d\n", devolve(x) * devolve(y));


		return 0;
}


