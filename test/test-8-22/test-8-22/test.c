#define _CRT_SECURE_NO_WARNINGS 1

//int print(int arr[3][4], int x, int y)

//{
//
//	int i = 0;
//
//	int j = 0;
//
//	for (i = 0; i < x; i++)
//
//	{
//
//		for (j = 0; j < y; j++)
//
//		{
//
//			printf("%d", arr[i][j]);
//
//		}
//
//		printf("\n");
//
//	}
//
//}

#include<stdio.h>
#include<Windows.h>
#define ROW 4
#define COL 4
//写一个循环函数即可
int Search(int arr[ROW][COL], int value) {
	int i = 0;
	int j = COL - 1;
	int tmp = arr[i][j];
	while (1) {
		if (value == tmp) {
			return 1;
		}
		else if (value > tmp && i < ROW - 1) {
			tmp = arr[++i][j];
		}
		else if (value < tmp && j > 0) {
			tmp = arr[i][--j];
		}
		else {
			return 0;
		}
	}
}

int main() {
	int arr[ROW][COL] = {
		{ 1, 2, 3, 4 },
		{ 2, 3, 6, 9 },
		{ 3, 4, 7, 12 }
	};
	int num = 0;
	printf("请输入你要查找的数字\n");
	scanf("%d", &num);
	if (Search(arr, num) == 1) {
		printf("查找成功!!!\n");
	}
	else {
		printf("查找失败!!!\n");
	}
	system("pause");
	return 0;
}

