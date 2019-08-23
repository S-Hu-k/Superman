#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void menu()
{
	printf("**************************************\n");
	printf("*********    1.play         **********\n");
	printf("*********    0.exit         **********\n");
	printf("**************************************\n");

}
void game()
{
	printf("玩游戏");
}
int main()
{
	int input = 0;
	{

		do
		{
			menu();//打印菜单
			printf("请选择;>");
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏");
				break;
			default:
				printf("输入错误，请重新输入");
			}
			printf("\n");
		}
		while (input);
	}
	system("pause");
	return 0;
}