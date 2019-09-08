#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
//编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
//int main()
//{
//	int input = 0;
//	int i = 0;
//	int ret = 0;
//	char arr1[] = "123456";
//	int arr2[] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//
//		printf("请输入密码:>");
//		scanf("%d", &input);
//		ret = strcmp(arr2, arr1);
//		if (ret = 0)
//		{
//			printf("密码输入正确\n");
//			break;
//		}
//		else
//		{
//			printf("密码输入错误\n");
//
//		}
//		if (i == 2)
//		{
//			printf("三次密码均输入错误，退出程序\n");
//		}
//	}
//
//		
//	system("pause");
//	return 0;
//}
//1.完成猜数字游戏。
//
//void menu()
//{
//	printf("********************************************\n");
//	printf("**********           1.play       **********\n");
//	printf("**********           0.exit       **********\n");
//	printf("********************************************\n");
//}
//enum Option
//{
//	EXIT,
//	PLAY
//	
//};
// /*enum Option
//{
//	EXIT,
//	ADD,
//	SUB,
//	MUL,
//	DIV
//};*/
//void game()
//{
//	int ret = 0;
//	/*printf("玩游戏\n");*/
//	//产生随机数
//	ret=rand()%100;
//	int num = 0;
//	
//	while (1)
//	{
//		printf("请输入猜的数字:>");
//		scanf("%d", &num);
//		if (num > ret)
//		{
//			printf("猜大了\n");
//			
//		}
//		else if (num < ret)
//		{
//			printf("猜小了\n");
//		
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//
//	
//}
//int main()
//{
//	
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		/*menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case ADD:
//		break;
//		case SUB:
//		break;
//		case MUL:
//		break;
//		case DIV:
//		break;
//		case EXIT:
//		break;
//		}*/
//		menu();//菜单
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case PLAY:
//			game();
//			break;
//		case EXIT:
//			printf("退出程序\n");
//			break;
//		}
//	}while (input);
//	system("pause");
//	return 0;
//}
//2.写代码可以在整型有序数组中查找想要的数字，
//找到了返回下标，找不到返回 - 1.（折半查找)
//int main()
//{
//	int input = 0;
//	char arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int ret = 0;
//	int i = 0;
//	printf("请输入你要查找的数字:>");
//	scanf("%d", &input);
//	for (i = 0; i < 10;i++)
//	{
//		
//		//查找
//		ret = arr[i];
//		
//	if (ret == input)
//		{
//			printf("找到了\n");
//			printf("%d\n", i);
//			i++;
//			break;
//		}
//	
//	}
//	if (ret != input)
//	{
//		printf("%d", -1);
//	}
//	
//	
//	system("pause");
//	return 0;
//}
//折半查找
//int main()
//{
//	char arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int i = 8;
//	while (right >= left)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > i)
//		{
//			right = mid - 1;
//		}
//		if (arr[mid] < i)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("%d\n", mid);
//			break;
//		}
//	}
//	while (left > right)
//	{
//		printf("%d\n", -1);
//		break;
//	}
//	system("pause");
//	return 0;
//}