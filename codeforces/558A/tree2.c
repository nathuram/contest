#include <stdio.h>
#include <math.h>

struct tree { 
		int x;
		long int a;
};

void merge(struct tree [], int, int, int);

void msort(struct tree arr[], int low, int high){
		if (low - high <= 1){
				return;
		}
		else {
				int mid = (low + high)/2;
				msort(arr, low, mid);
				msort(arr, mid+1, high);
				merge(arr, low, mid, high);
		}

		return;
}

void merge(struct tree arr[], int low, int mid, int high)
{
		int R = high - mid, L = mid - low + 1;
		struct tree left_arr[L], right_arr[R];
	
		for (int i = low, j = 0; i <= mid; i++)
				left_arr[j++] = arr[i];

		for (int i = mid+1, j = 0; i <= high; i++)
				left_arr[j++] = arr[i];

		int l = 0, r = 0, i = low;
		while (l < L-1 && r < R-1){
				if (left_arr[l].x < right_arr[r].x)
						arr[i++] = left_arr[l++];
				else
						arr[i++] = right_arr[r++];
		}

		while (l < L-1)
				arr[i++] = left_arr[l++];
		while (r < R-1)
				arr[i++] = right_arr[r++];

		return;
}

void swap(struct tree *a, struct tree *b)
{
		struct tree c;
		 c = *a;
		*a = *b;
		*b = c;
		
		return;
}

void reverse(struct tree arr[], int n)
{
		for (int i = 0; i < n/2; i++)
				swap(&arr[i], &arr[n-i-1]);

		return;
}

int main(void)
{
		int n;
		scanf("%d ", &n);

		int left_num=0, right_num=0, pos, apple;
		struct tree left_arr[n]; struct tree right_arr[n];

		for (int i = 0; i < n; i++){
				scanf("%d %d ", &pos, &apple);
				if (pos < 0){
						left_arr[left_num].x = pos;
						left_arr[left_num].a = apple;
						left_num++;
				}
				if (pos > 0){
						right_arr[right_num].x = pos;
						right_arr[right_num].a = apple;
						right_num++;
				}
		}

		msort(left_arr, 0, left_num - 1);
		reverse(left_arr, left_num);
		msort(right_arr, 0, right_num - 1);
		
		long int sum = 0;
		int num = (left_num < right_num) ? left_num : right_num;
		struct tree *tmp = (left_num  < right_num) ? &left_arr: &right_arr;

		for (int i = 0; i < num; i++)
				sum += (arr_left[i].a + arr_right[i].a);

		for (int i = num; i < (num + abs(left_num - right_num)); i++)
				sum += tmp[i].a;

		printf("%ld\n", sum);
		return 0;
}





