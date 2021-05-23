#define _CRT_SECURE_NO_WARNINGS

#include"game.h"
#include<time.h>
#include<stdlib.h>

  //��ӡ�˵�
void menu()
{
	printf("************************\n");
	printf("******   1. Play  ******\n");
	printf("******   0. exit  ******\n");
	printf("************************\n");
}

void game()
{	//�������飬�������ݣ���ά����
	char board[ROW][COL];
	//��ʼ������ - ��ʼ���ո�
	initboard(board, ROW, COL);
	//��ӡ����
	printboard(board, ROW, COL);
	//���ս��;
	char ret;
	while (1)
	{
		//�������
		playergo(board, ROW, COL);
		printboard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
			break;
		//��������
		computergo(board, ROW, COL);
		printboard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
			break;
	}

	if (ret == '*')
	{
		printf("game over...\t\n���Ӯ!");
		printf("\n\n");
	}

	else if (ret == '#')
	{
		printf("game over...\t\n����Ӯ!");
		printf("\n\n");
	}

	else if (ret == 'Q')
	{
		printf("game over...\t\nƽ��!");
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
		printf("��ѡ��:>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�����˳�....\n");
			break;
		default:
			printf("������Ч,����������;\n");
			break;

		}

	} while (input);

	return 0;
}