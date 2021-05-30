#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int a = 0;
//	int Sn = 0;
//	int i = 0;
//	int j = 0;
//	int dig = 0;
//	printf("输入a的值：");
//	scanf("%d", &a);
//	for (i = 0; i <= 4; i++)
//	{
//		dig = 0;
//		for (j = 0; j <= i; j++)
//		{
//			dig += a * pow(10, j);
//		}
//		Sn += dig;
//	}
//	printf("Sn = %d\n", Sn);
//
//	return 0;
//}
//void print(int* parr, int n)
//{
//	int i = 0;
//	
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", *(parr + i));
//	}
//	
//	return;
//}
//
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	print(arr, sizeof(arr) / sizeof(arr[0]));
//	printf("\n");
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int temp = 0;
//	
//
//	for (i = 1; i < 100000; i++)
//	{
//		temp = i;
//		int count = 0;
//		int sum = 0;
//		while (temp)
//		{
//			count++;
//			temp = temp / 10;
//		}
//
//		temp = i;
//		while (temp)
//		{
//			sum += pow(temp % 10, count);
//			temp = temp / 10;
//		}
//
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//
//	}
//
//	printf("\n");
//
//	return 0;
//}
//
//#include<stdio.h>
//
//void Nixu(char* ss)
//{
//	int count = 0;
//	char str[100] = "\0";
//	char* pstr = ss;
//	while (*pstr)
//	{
//		str[count] = *pstr;
//		count++;
//		pstr++;
//	}
//	int i;
//
//	for (i = count - 1; i >= 0; i--,ss++)
//	{
//		*ss = str[i];
//	}
//
//	*ss = '\0';
//}
//
//int main()
//{
//	char s[] = "I am a students.";
//	printf("%s\n", s);
//	Nixu(s);
//
//	printf("%s\n",s);
//}

//#include<stdio.h>
//#include<assert.h>
//
//int my_strlen(char* pstr)
//{
//	assert(pstr != NULL);
//	int count = 0;
//	while (*pstr++)
//	{
//		count++;
//	}
//
//	return count;
//}
//
//int main()
//{
//	char str[100] = "\0";
//	scanf("%s",str);
//	printf("%d\n",my_strlen(str));
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//char* my_strcpy(char* dest, const char* src)
//{
//	while (*dest = *src)
//	{
//		dest++;
//		src++;
//	}
//
//	return dest;
//}
//
//int main()
//{
//	char str1[100] = "\0";
//	char str2[100] = "\0";
//	scanf("%s",str1);
//	scanf("%s", str2);
//
//	my_strcpy(str1, str2);
//	printf("%s\n",str1);
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//void Reverse(char* str)
//{
//	char* left = str;
//	char* right = str + strlen(str) - 1;
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		++left;
//		--right;
//	}
//}
//
//int main()
//{
//	char str[101] = { 0 };
//	while (gets(str))
//	{
//		Reverse(str);
//		printf("%s\n", str);
//		memset(str, 0, sizeof(str));
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int line = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d", &line);//7
//	//打印上半部分
//	for (i = 0; i < line; i++)
//	{
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	for (i = 0; i < line - 1; i++)
//	{
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		
//		for (j = 0; j < 2 * (line - i - 2) + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

#include<stdio.h>

int main()
{
	int money = 0;
	int sum = 0;
	int empty = 0;
	scanf("%d",&money);
	sum = money;
	empty = money;
	while (empty > 1)
	{
		sum += empty / 2;
		empty = empty / 2 + empty % 2;
	}

	printf("%d\n",sum);

	return 0;
}