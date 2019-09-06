#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1.在屏幕上输出以下图案：
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
//
//int main()
//{
//	int line = 0;
//	int i = 0;
//	printf("请输入要打印的行数:>");
//	scanf("%d", &line);
//	//先打印上半部分
//	//先打印空格
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//再打印*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//再打印下半部分
//	for (i = 0; i < line -1 ; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2 * (line -1- i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	system("pause");
//	return 0;
//}
//2.求出0～999之间的所有“水仙花数”并输出。
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。

/*
在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。
例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数：
153 = 1^3 + 5^3 + 3^3。
370 = 3^3 + 7^3 + 0^3。
371 = 3^3 + 7^3 + 1^3。
407 = 4^3 + 0^3 + 7^3。
*/
#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100000; i++)
//	{
//		//先判断该数是几位数
//		int sum = 0;
//		int count = 0;
//		int tmp = i;
//		while (tmp)
//		{
//			tmp /= 10;
//			count++;
//		}
//		//再求次方和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		
//		//判断
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//3.
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//int main()
//{
//	int a = 0;
//	int sum = 0;
//	int k = 0;
//	int i = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("sum=%d", sum);
//	system("pause");
//	return 0;
//}
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= 'A'&&ch <= 'Z')
//		{
//			putchar(ch + 32);
//		}
//		else if (ch > 'a'&&ch <= 'z')
//		{
//			putchar(ch - 32);
//		}
//		else if (ch >= '0'&&ch <= '9')
//		{
//			;
//		}
//		else
//		{
//			putchar(ch);
//		}
//	}
//	system("pause");
//	return 0;
//}
//#include<ctype.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (isupper(ch))
//		{
//			putchar(tolower(ch));
//		}
//		else if (islower(ch))
//		{
//			putchar(toupper(ch));
//		}
//		else if (isdigit(ch))
//		{
//			;
//		}
//		else
//		{
//			putchar(ch);
//		}
//	}
//	system("pause");
//	return 0;
//}