#include"game.h"
void Initboard(char board[ROW][COL],int row,int col)
{
	int i=0;
	for(i=0;i<row;i++)
	{
		int j=0;
		for(j=0;j<col;j++)
		{
			board[i][j]=' ';
		}

	}
}
void Displayboard(char board[ROW][COL],int row,int col)
{
	int i=0;
	for(i=0;i<row;i++)
	{
		int j=0;
		for(j=0;j<col;j++)
		{
			printf(" %c ",board[i][j]);
			if(j<col-1)
			{
				printf("|");
			}
		}
		printf("\n");
		if(i<row-1)
		{
			for(j=0;j<col;j++)
			{
					printf("___");
				if(j<col-1)
					printf("|");
			}
		}
		printf("\n");
		
	}
}
void Playermoved(char board[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	printf("�����:>\n");
	while(1)
	{
		printf("��ѡ����������У��У�");
		scanf("%d%d",&x,&y);
	//�ж�����xy�ĺϷ���
	if((1<=x&&x<=row) && (1<=y&&y<=col))
	{
		if(board[x-1][y-1]==' ')
		{
			board[x-1][y-1]='*';
		break;
		}
		else
		{
			printf("�����걻ռ��");
		}
		
	}
	else
	{
		printf("����Ƿ�,����������");
	}
	}
}
void Computureboard(char board[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	printf("��������\n");
	while(1)
	{
		x=rand()%row;
		y=rand()%col;
	if(board[x][y]==' ')
		{
			board[x][y]='#';
			break;

		}
	}	
}
//����1���������ˣ�ƽ��
//����0������û��������
int Isfull(char board[ROW][COL],int row,int col)
{
	int i=0;
	int j=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(board[i][j]==' ')
				return 0;
		}
	}
	return 1;
}
char Iswin(char board[ROW][COL],int row,int col)
{
	int i=0;
	int j=0;
	//����
	for(i=0;i<row;i++)
	{
		if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][1]!=' ')
			return board[i][1];
	}
	//����
	for(j=0;j<col;j++)
	{
		if(board[0][j]==board[1][j]&&board[1][j]==board[2][j]&&board[1][j]!=' ')
			return board[1][j];	
	}
	//�Խ���
	if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[1][1]!=' ')
		return board[1][1];
	if(board[0][2]==board[1][1]&&board[1][1]==board[2][0]&&board[1][1]!=' ')
		return board[1][1];
	if(1==Isfull(board,ROW,COL))
	{
		return 'Q';
	}
	else
		return 'C';
}