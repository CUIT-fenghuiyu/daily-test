#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void menu()
{
	printf("******************************\n");
	printf("********  1.  play   *********\n");
	printf("********  0.  exit   *********\n");
	printf("******************************\n");
}

int main()
{
	int input = 1;
	while (input)
	{
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("正在退出...");
			break;
		default:
			break;
		}
	}

	return 0;
}