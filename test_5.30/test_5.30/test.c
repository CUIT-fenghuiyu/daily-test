#define _CRT_SECURE_NO_WARNINGS
//
////#include<stdio.h>
////
////int main(void)
////{
////	int i = 0;
////	int j = 0;
////	int n = 0;
////	int arr[30][30] = { 0 };
////	
////	scanf("%d",&n);
////	for (i = 0; i < 30; i++)
////	{
////		for (j = 0; j <= i; j++)
////		{
////			arr[i][j] = 1;
////		}
////	}
////
////	for (i = 2; i < 30; i++)
////	{
////		for (j = 1; j <= i - 1 ; j++)
////		{
////			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
////		}
////	}
////
////	for (i = 0; i < n; i++)
////	{
////		for (j = 0; j <= i; j++)
////		{
////			printf("%d ",arr[i][j]);
////		}
////		printf("\n");
////	}
////	return 0;
////}
//
////#include<stdio.h>
////
////int main(void)
////{
////	int i = 0;
////	int arr[4] = {0};
////	for (i = 0; i < 4; i++)
////	{
////		arr[i] = 1;
////		if (
////			(arr[0] != 1) +
////			(arr[2] == 1) +
////			(arr[3] == 1) +
////			(arr[3] != 1) == 3
////			)
////		{
////			break;
////		}
////
////		arr[i] = 0;
////	}
////
////	printf("凶手是%c\n",'A'+i);
////
////	return 0;
////}
//
////#include <stdio.h>
////int main()
////{
////	char a[31], b[31];
////	int i;
////
////	printf("Please input a string a is:");
////	gets(a);
////	/******start******/
////	i = 0;
////	while(a[i])
////	{
////		b[i] = a[i];
////		i++;
////	}
////	b[i++] = '\0';
////	/******end******/
////	printf("Output:\n");
////	printf("string b is:");
////	for (i = 0; b[i] != '\0'; i++)
////		printf("%c", b[i]);
////	printf("\n");
////	return 0;
////}
////
//
////#include<stdio.h>
////
////int main()
////{
////	char* Pmonth[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
////	int month = 0;
////
////	printf("Please input a month number:\n");
////	scanf("%d", &month);
////	if (month < 1 || month > 12)
////	{
////		printf("Output:\nInput Error!\n");
////	}
////	else
////		printf("Output:\nThis month's English name is %s.\n", *(Pmonth + month - 1));
////
////	return 0;
////}
//
//#include <stdio.h>
//
//void fun(double *sn, int n);
//
//int main(void)
//{
//	int n;
//	double Sum;
//
//	printf("Please input n: ");
//	scanf("%d", &n);
//
//	/* 本部分代码功能建议：调用相应的函数计算S */
//	/* Limit: lines<=1, lineLen<=50, 考生可在本行后添加代码、最多1行、行长<=50字符 */
//	/******start******/
//	fun(&Sum, n);
//	/******end******/
//	/* 考生添加代码结束 */
//
//	printf("Output:\nS=1/1!+1/2!+...+1/%d!=%.16f\n", n, Sum);
//	return 0;
//}
//
//
//void fun(double *sn, int n)
//{
//	int i;
//	double Sum = 0, jc = 1;
//
//	for (i = 1; i <= n; i++)
//	{
//		jc *= i;
//		Sum += 1 / jc;
//	}
//
//	/* 考生可在本行后添加代码、最多1行、行长<=30字符) */
//	/******start******/
//	sn
//	/******end******/
//	/* 考生添加代码结束。 */
//}

//#include <stdio.h>
//void inv(int *x, int n);
//int  main()
//{
//	int i, arr[5], *p = arr;
//	printf("The original array:\n");
//	for (i = 0; i<5; i++, p++)
//		scanf("%d", p);
//	printf("Output:\n");
//	/******start******/
//	p = arr;
//	/******end******/
//	inv(p, 5);
//	printf("The array has been inverted:\n");
//	for (p = arr; p<arr + 5; p++)
//		printf("%d ", *p);
//	printf("\n");
//	return 0;
//}
//
//void inv(int *x, int n)
//{
//	/******start******/
//	int* end = x + n - 1;
//	int temp;
//	while (x < end)
//	{
//		temp = *x;
//		*x = *end;
//		*end = temp;
//		x++;
//		end--;
//	}
//	/******end******/
//}

//#include <stdio.h>
//void inv(int *x,int n);
//int main()
//{    
//	 int i,a[5];
//	 printf("The original array:\n");
//	 for(i=0;i<5;i++)
//	   scanf("%d",&a[i]);
//	 printf("Output:\n");
//	 inv(a,5);
//	 printf("The array has been inverted:\n");
//	 for(i=0;i<5;i++)
//	   printf("%d ",a[i]);
//	 printf("\n");
//	 return 0;
//}
//
//void inv(int *x,int n)                   //形参x是指针变量       
//{
///******start******/
//	int* end = x + n - 1;
//	int temp;
//	while (x < end)
//	{
//		temp = *x;
//		*x = *end;
//		*end = temp;
//		x++;
//		end--;
//	}
///******end******/
//}

//#include <stdio.h>
//#include <string.h>
//
//int GetWords(char *sentence, char *words[]);
//void SortStrings(const char *strs[], int count);
//
//int main()
//{
//	char str[200];
//	int nWords = 0;
//	char *words[20];
//	int i;
//
//	printf("input a string: ");
//	gets(str);
//
//	nWords = GetWords(str, words);
//	SortStrings(words, nWords);
//
//	puts("output:");
//	for (i = 0; i<nWords; i++)
//		puts(words[i]);
//
//	return 0;
//}
//
//
//int GetWords(char *str, char *words[])
//{
//	/******start******/
//	int nWords = 0;
//	char* p = str;
//	int n = 1;
//	while (n)
//	{
//		while (*str != ' ' && *str != '.')
//		{
//			str++;
//		}
//		if (*str == '.')
//		{
//			n = 0;
//		}
//		*str = '\0';
//		words[nWords++] = p;
//		str++;
//		p = str;
//	}
//	return nWords;
//	/******end******/
//}
//
//void SortStrings(const char *strs[], int count)
//{
//	/******start******/
//	int i = 0 , j = 0;
//	const char* w;
//	for (i = 0; i < count; i++)
//	{
//		for (j = i + 1; j < count; j++)
//		{
//			if (strcmp(strs[i], strs[j]) > 0)
//			{
//				w = strs[i];
//				strs[i] = strs[j];
//				strs[j] = w;
//			}
//		}
//	}
//	/******end******/
//}