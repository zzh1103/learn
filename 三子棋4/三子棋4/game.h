#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>//srand
#include<time.h> //time
#define ROW 3
#define COL 3
void Initboard(char board[ROW][COL],int row,int col);
void Displayboard(char board[ROW][COL],int row,int col);
void Playermoved(char board[ROW][COL],int row,int col);
void Computureboard(char board[ROW][COL],int row,int col);
//���Ӯ--��*��
//����Ӯ--��#��
//ƽ�֡�����Q��
//����������C��
char Iswin(char board[ROW][COL],int row,int col);