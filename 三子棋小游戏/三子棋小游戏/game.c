#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
#include<stdlib.h>


void initboard(char board[ROW][COL], int row, int col)
{
	int i,j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void printboard(char board[ROW][COL], int row, int col)
{
	int i,j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)
				printf("|");
		}

		printf("\n");

		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
		
	}
}

void playergo(char board[ROW][COL], int row, int col)
{
	printf("�����:>\n");
	printf("����������:");
	int x, y;
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col && board[x-1][y-1] == ' ')
		{
				board[x-1][y-1] = '*';
				break;
		}
		else
		{
			printf("��������ʧ�ܣ�����������:>");
		}
	}
}

void computergo(char board[ROW][COL], int row, int col)
{
	printf("������:>\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if ( board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int Isfull(char board[ROW][COL], int row, int col)
{
	int i,j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char Iswin(char board[ROW][COL], int row, int col)
{
	int i;
	
	//�ж�����:
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0];
	}

	//�ж�����:
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}

	//�ж϶Խ���:
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		return board[0][0];

	else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
		return board[0][2];
	
	//�ж��Ƿ�ƽ��
	int ring = 0;

	ring = Isfull(board, ROW, COL);
	
	if (ring == 1)
	{
		return 'Q';
	}

		return 'C';
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
