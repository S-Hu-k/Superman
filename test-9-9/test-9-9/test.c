#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
//
//int main()
//{
//	int i = 0;//行数
//	int j = 0;//列数
//	int n = 0;
//	printf("请输入要打印的乘法口诀表的行数:>");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d*%-2d=%-5d", i, j, i*j);
//			
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//2.使用函数实现两个数的交换。
//int swap_digital(const int* x, const int* y)
//{
//	int ret = 0;
//	ret = x;
//	x = y;
//	y = ret;
//	printf("%d %d", x, y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入要交换的两个数;>");
//	scanf("%d%d", &a, &b);
//	swap_digital(a,b);
//	
//	system("pause");
//	return 0;
//}
//
//3.实现一个函数判断year是不是润年。
//int judge_leapyear(const int a)
//{
//	if (((a % 4 == 0) && (a % 100 == 0)) || (a % 400 == 0))
//	{
//		printf("是闰年\n");
//	}
//	else
//		printf("不是闰年\n");
//
//}
//int main()
//{
//	int year = 0;
//	printf("请输入你要判断的年份;>");
//	scanf("%d", &year);
//	judge_leapyear(year);
//	system("pause");
//	return 0;
//}
//
//4.
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
//
//void Init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//}
//void Printf(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void Empty(int arr[], int sz)
//{
//	memset(arr, 0, sz*sizeof(arr[0]));
//}
//int main()
//{
//	char arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr,sz);
//	Printf(arr, sz);
//	Reverse(arr, sz);
//	Printf(arr, sz);
//	Empty(arr, sz);
//	Printf(arr, sz);
//
//	system("pause");
//	return 0;
//}
//5.实现一个函数，判断一个数是不是素数。

//int fact(int p)
//{
//	int i, n;
//	if (p == 1)
//		return 0;
//	n = sqrt(p);
//	for (i = 2; i <= n; i++)
//	if (p%i == 0)
//	{
//		return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int n, i;
//	long long m;
//	scanf("%d", &n);
//	for (i = 0; i<n; i++)
//	{
//		scanf("%lld", &m);
//		if (fact(m))
//			printf("Yes\n");
//		else
//			printf("No\n");
//	}
//	return 0;
//}
