#include <stdio.h>

struct tree { 
		int x;
		int a;
};

void merge(struct tree arr[], int low, int mid, int high)
{
		int R = high - mid, L = mid - low + 1;
		struct tree left_arr[L], right_arr[R];
	
		for (int i = low, j = 0; i <= mid; i++)
				left_arr[j++] = arr[i];

		for (int i = mid+1, j = 0; i <= high; i++)
				right_arr[j++] = arr[i];

		int l = 0, r = 0, i = low;
		while (l < L && r < R){
				if (left_arr[l].x < right_arr[r].x)
						arr[i++] = left_arr[l++];
				else
						arr[i++] = right_arr[r++];
		}

		while (l < L)
				arr[i++] = left_arr[l++];
		while (r < R)
				arr[i++] = right_arr[r++];

		return;
}

void msort(struct tree arr[], int low, int high){
		if (high - low < 1){
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

void swap(struct tree *x, struct tree *y)
{
		struct tree tmp;
		tmp = *x;
		*x = *y;
		*y = tmp;

		return;
}

void reverse(struct tree arr[], int n)
{
		n--;
		for (int i = 0; i <= n/2; i++)
				swap(&arr[i], &arr[n-i]);

		return;
}

void printarr(struct tree arr[], int n)
{
		for (int i = 0; i < n; i++)
				printf("%d ", arr[i].x);
		printf("\n");
}

int main(void)
{
		int n;
		scanf("%d ", &n);

		int left_num = 0, right_num = 0, pos, apple;
		struct tree left_arr[n], right_arr[n];

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

		int sum = 0, i, j = (left_num < right_num) ? left_num : right_num;
		for (i = 0; i < j; i++)
				sum += (left_arr[i].a + right_arr[i].a);

		if (left_num < right_num)
				sum += right_arr[i].a;

		if (right_num < left_num)
				sum += left_arr[i].a;
		
		printf("%d\n", sum);
		return 0;
			
}





