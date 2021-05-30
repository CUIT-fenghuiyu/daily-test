#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//void print(unsigned int x)
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d\n", x % 10);
//
//	return;
//}
//
//int main(void)
//{
//	int n;
//	printf("输入一个数:");
//	scanf("%d", &n);
//	print(n);
//}

#include<stdio.h>

//int my_strlen(const char*str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//
//}
//
//int main()
//{
//	char arr[4] = "str";
//	printf("%d", my_strlen(arr));
//
//	return 0;
//}

int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}

	return c;

}

int main()
{

	int n;
	scanf("%d",&n);
	printf("%d\n",fib(n));

	return 0;

}