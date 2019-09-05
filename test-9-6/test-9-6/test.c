#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1. 给定两个整形变量的值，将两个值的内容进行交换。
//2. 不允许创建临时变量，交换两个数的内容（附加题）
//3.求10 个整数中最大值。
//4.将三个数按从大到小输出。
//5.求两个数的最大公约数。
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int t = 0;
//	printf("输入两个整型数:>");
//	scanf("%d%d", &a, &b);
//	t = a;
//	a = b;
//	b = t;
//	printf("%d %d", a, b);
//	system("pause");
//	return 0;
//	
//}
//不用创建临时变量
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	a = a + b;
//	b=a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//	system("pause");
//	return 0;
//}
//异或
//int main()
//{
//	int a = 0;
//		int b = 0;
//		scanf("%d%d", &a, &b);
//		a = a^b;
//		b = a^b;
//		a = a^b;
//		printf("%d %d", a, b);
//	system("pause");
//	return 0;
//}
//判断两个数的最大数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	printf("请输入两个数:>");
//	scanf("%d%d", &a, &b);
//	ret = (a > b) ? a : b;
//	printf("%d", ret);
//	system("pause");
//	return 0;
//	
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 859, 654, 325, 3, 231, 6 };
//	int max = arr[0];
//	for (i = 0; i < 6; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d", max);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a<c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b<c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入两个数:>");
//	scanf("%d%d", &a, &b);
//	while (a%b)
//	{
//		c = a%b;
//		a = b;
//		b = c;
//	}
//	printf("%d", c);
//	system("pause");
//	return 0;
//}