#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>



int main()

{

	int m, n;

	int count = 0;

	printf("������m��n��ֵ:\n");

	scanf("%d %d", &m, &n);

	while (m > 0 || n > 0)

	{

		if ((m^n) & 1 == 1)

		{

			count += 1;

		}

		m = m >> 1;

		n = n >> 1;

	}

	printf("%d\n", count);



	return 0;

}