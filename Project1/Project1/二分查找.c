#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void)
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int n;
	int mid = (left + right) / 2;
	scanf("%d",&n);
	while (left <= right)
	{
		if (arr[mid] < n)
		{
			left = mid + 1;
			mid = (left + right) / 2;
		}
		else if (arr[mid] > n)
		{
			right = mid - 1;
			mid = (left + right) / 2;
		}
		else
		{
			printf("find it! %d\n", mid);
			return 0;
		}
	}
	printf("Not find it!\n");

	return 0;
}