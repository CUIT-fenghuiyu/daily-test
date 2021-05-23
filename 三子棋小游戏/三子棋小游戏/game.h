#include<stdio.h>

#define ROW 3
#define COL 3

void initboard(char board[ROW][COL], int row, int col);
void printboard(char board[ROW][COL], int row, int col);
void playergo(char board[ROW][COL], int row, int col);
void computergo(char board[ROW][COL], int row, int col);
char Iswin(char board[ROW][COL], int row, int col);
int Isfull(char board[ROW][COL], int row, int col);


