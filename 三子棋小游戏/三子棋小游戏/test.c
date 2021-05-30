#define _CRT_SECURE_NO_WARNINGS

#include"game.h"
#include<time.h>
#include<stdlib.h>

  //打印菜单
void menu()
{
	printf("************************\n");
	printf("******   1. Play  ******\n");
	printf("******   0. exit  ******\n");
	printf("************************\n");
}

void game()
{	//定义数组，储存数据，二维数组
	char board[ROW][COL];
	//初始化棋盘 - 初始化空格
	initboard(board, ROW, COL);
	//打印棋盘
	printboard(board, ROW, COL);
	//接收结果;
	char ret;
	while (1)
	{
		//玩家下棋
		playergo(board, ROW, COL);
		printboard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
			break;
		//电脑下棋
		computergo(board, ROW, COL);
		printboard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
			break;
	}

	if (ret == '*')
	{
		printf("game over...\t\n玩家赢!");
		printf("\n\n");
	}

	else if (ret == '#')
	{
		printf("game over...\t\n电脑赢!");
		printf("\n\n");
	}

	else if (ret == 'Q')
	{
		printf("game over...\t\n平局!");
		printf("\n\n");
	}
	
}
int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
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
			printf("正在退出....\n");
			break;
		default:
			printf("输入无效,请重新输入;\n");
			break;

		}

	} while (input);

	return 0;
}