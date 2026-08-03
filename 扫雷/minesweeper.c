#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



#define ROW 9
#define COL 9
#define ROWS 11
#define COLS 11
#define COUNT_EASY 10

void InitBoard(char board[ROWS][COLS], int rows, int cols, char ret)
{
	int x = 0;
	int y = 0;
	for (x = 0;x < rows;x++)
	{
		for (y = 0;y < cols;y++)
		{
			board[x][y] = ret;
		}
	}
}

void menu()
{
	printf("*********************************\n");
	printf("*******   扫雷小游戏    *********\n");
	printf("*******     1、play     *********\n");
	printf("*******     0、exit     *********\n");
	printf("*********************************\n");

}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("--------扫雷---------\n");
	for (x = 0; x <= row;x++)
	{
		printf(" %d", x);
	}
	printf("\n");
	for (x = 1; x <= row; x++)
	{
		printf(" %d", x); 
		for (y = 1; y <= col; y++)
		{
			printf(" %c", board[x][y]);
		}
		printf("\n");
	}
	printf("---------------------\n");

}

void Setmine(char board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = COUNT_EASY;
	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}


int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return  (mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] +
		mine[x - 1][y]) - (8 * '0');
}

void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = row * col - COUNT_EASY;
	while (win)
	{
		printf("请输入要排查的坐标->");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("踩到雷啦！爆炸！\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else if (show[x][y] != '*')
			{
				printf("排查过该坐标，请重新输入\n");
			}
			else if (mine[x][y] == '0')
			{
				int ret = 0;
				ret = GetMineCount(mine, x, y);
				show[x][y] = ret + '0';

				DisplayBoard(show, ROW, COL);
				win--;
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入\n");
		}
	}
	//跳出循环有两种可能，一个是踩雷退出，一个是排雷完成退出
	//需要判断是不是排雷成功，然后给出提示
	if (win == 0)
		printf("恭喜你，排雷成功！ \n");
}

void game()
{
	//为了方便，把两个数组定义成完全一样的
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	//初始化两个数组
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	//对应雷的数组不需要给玩家看
	DisplayBoard(show, ROW, COL);

	//布置雷
	Setmine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);

	//排查雷
	Findmine(mine, show, ROW, COL);
}


int main()
{
	srand((unsigned int)time(NULL));
	int input;

	do
	{
		menu();
		printf("请输入->");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("结束游戏\n");
			break;
		default:
			printf("输入错误\n");
		}
	} while (input);

	return 0;
}