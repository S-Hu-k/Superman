#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//	char**cp[] = { c + 3, c + 2, c + 1, c };
//	char***cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	system("pause");
//	return 0;
//}
//char word[100][10];
//int cmp_string(const void* _a, const void* _b)
//{
//	char* a = (char*)_a;
//	char* b = (char*)_b;
//	return strcmp(a, b);
//}
//
//qsort(word, 100, sizeof(word[0]), cmp_string);

//#include <stdlib.h>
//
//int values[] = { 88, 56, 100, 2, 25 };
//
//int cmpfunc(const void * a, const void * b)
//{
//	return (*(int*)a - *(int*)b);
//}
//
//int main()
//{
//	int n;
//
//	printf("排序之前的列表：\n");
//	for (n = 0; n < 5; n++)
//	{
//		printf("%d ", values[n]);
//	}
//
//	qsort(values, 5, sizeof(int), cmpfunc);
//
//	printf("\n排序之后的列表：\n");
//	for (n = 0; n < 5; n++) {
//		printf("%d ", values[n]);
//	}
//	system("pause");
//	return 0;
//}
//int comfuntion(const void* a, const void* b)
//{
//	return (*(int*)a - *(int*)b);
//}
//int main()
//{
//	int arr[] = { 65, 23, 21, 54 };
//	int i = 0;
//	printf("排序前的列表：>\n");
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	qsort(arr, 4, sizeof(int), comfuntion);
//	printf("\n排序之后的列表:>\n");
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//用常量字符串去初始化两个不同的数组，内存会开辟出不同的内存块。
//int main()
//{
//		char str1[] = "hello bit.";
//		char str2[] = "hello bit.";
//		char *str3 = "hello bit.";
//		char *str4 = "hello bit.";
//		if (str1 == str2)
//			printf("str1 and str2 are same\n");
//		else
//			printf("str1 and str2 are not same\n");
//
//		if (str3 == str4)
//			printf("str3 and str4 are same\n");
//		else
//			printf("str3 and str4 are not same\n");
//
//	system("pause");
//	return 0;
//}
//数组指针
//是指针，指向的是数组；
//void printf_arr1(int arr[3][5], int row, int line)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < line; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void printf_arr2(int (* arr)[5], int row, int line)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < line; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf_arr1(arr, 3, 5);
//	printf_arr2(arr, 3, 5);
//	system("pause");
//	return 0;
//}

//void print_arr1(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i<row; i++)
//	{
//		int j = 0;
//		for(j = 0; j<col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print_arr2(int(*arr)[5], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i<row; i++)
//	{
//		int j = 0;
//		for (j = 0; j<col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	print_arr1(arr, 3, 5);
//	//数组名arr，表示首元素的地址
//	//但是二维数组的首元素是二维数组的第一行
//	//所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
//	//可以数组指针来接收
//	print_arr2(arr, 3, 5);
//	system("pause");
//	return 0;
//}

//void print(int *p, int sz)
//{
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//	system("pause");
//	return 0;
//}

//计算器
// menu()
//{
//	printf("******************************************\n");
//	printf("******      1.add    2.sub          ******\n");
//	printf("******      3.mul    4.div          ******\n");
//	printf("******      0.exit                  ******\n");
//	printf("******************************************\n");
//
//}
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a*b;
//}
//
//
//int main()
//{
//	menu;//菜单
//	int ret = 0;
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	scanf("%d", &input);
//	do
//	{
//		
//		printf("请选择:>");
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个数：>");
//
//			scanf("%d %d", &x, &y);
//			ret = add(x, y);
//			printf("%d", ret);
//			break;
//		case 2:
//			printf("请输入两个数：>");
//
//			scanf("%d %d", &x, &y);
//			ret = sub(x, y);
//			printf("%d", ret);
//			break;
//		case 3:
//			printf("请输入两个数：>");
//
//			scanf("%d %d", &x, &y);
//			ret = mul(x, y);
//			printf("%d", ret);
//			break;
//		
//		case 0:
//			printf("退出游戏:>");
//			break;
//		default:
//			printf("选择错误，请重新选择:>");
//		}
//	} while (input);
//	system("pause");
//	return 0;
//}
int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a*b;
}
int divc(int a, int b)
{
	return a / b;
}
int main()
{
	int x, y;
	int input = 1;
	int ret = 0;
	while (input)
	{
		printf("*************************\n");
		printf(" 1:add 2:sub \n");
		printf(" 3:mul 4:div \n");
		printf("*************************\n");
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("输入操作数：");
			scanf("%d %d", &x, &y);
			ret = add(x, y);
			break;
		case 2:
			printf("输入操作数：");
			scanf("%d %d", &x, &y);
			ret = sub(x, y);
			break;
		case 3:
			printf("输入操作数：");
			scanf("%d %d", &x, &y);
			ret = mul(x, y);
			break;
		case 4:
			printf("输入操作数：");
			scanf("%d %d", &x, &y);
			ret = divc(x, y);
			break;
		default:
			printf("选择错误\n");
			break;
		}
		printf("ret = %d\n", ret);
	}
	return 0;
}

