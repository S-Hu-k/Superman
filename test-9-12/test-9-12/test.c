#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{/*
//	int i = 0;
//	int tmp = i;
//	int count = 0;
//	int sum = 0;
//	for (i = 0; i < 1000; i++)
//	{*/
//	int tmp = 0;
//	int count = 0;
//	printf("请输入要操作的数:>");
//	scanf("%d", tmp);
//	
//		while (tmp / 10)
//		{
//			count++;
//		}
//
//		printf("%d", count);
//	
//
//
//	system("pause");
//	return 0;
//}
//1.递归和非递归分别实现求第n个斐波那契数。
//1 1 2 3 5 8 13
//int main()
//{
//	int n = 0;
//	int a = 1;
//	int b = 1;
//	int i = 0;
//	int sum = 0;
	/*printf("请输入要求的数:>");
	scanf("%d", &n);
	if (n <= 2)
	{
		printf("sum=%d", 1);
	}
	else
	{
		for (i = 0; i < n-2; i++)
		{
        	sum = a + b;
			a = b;
			b = sum;

		}
		printf("sum=%d", sum);
	}
	
	system("pause");
	return 0;*/
//}
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	
//	
//	int n = 0;
//	printf("请输入你要看的斐波那契数的位数:>");
//	scanf("%d", &n);
//	printf("%d", fib(n));
//	system("pause");
//	return 0;
//}
//2.编写一个函数实现n^k，使用递归实现
//
//double Pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1.0;
//	}
//	else if (k > 0)
//	{
//		return 1.0*n*Pow(n, k - 1);
//	}
//	else
//	{
//		return 1.0 / Pow(n, -k);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	double ret = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &n, &k);
//	ret=Pow(n, k);
//	
//	printf("%lf", ret);
//	system("pause");
//	return 0;
//}
//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
////
//int DigitSum(int n)
//{
//	if (n < 9)
//	{
//		return n;
//	}
//	else
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入要计算的数:>");
//	scanf("%d", &n);
//	int ret = 0;
//	ret = DigitSum(n);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}
//4. 编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//
//#include<assert.h>
//char my_strlen(const char* p)
//{
//	int count = 0;
//	while (*p++)
//	{
//		assert(p);
//		count++;
//	}
//	return count;
//}
//char reverse_string(const char* str)
//{
//	assert(str);
//	int len = my_strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//	printf("%s\n", str);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	
//	system("pause");
//	return 0;
//}
//#include<assert.h>
//
//
//int my_strlen(const char* p)
//{
//	assert(p);
//	int count = 0;
//	while (*p++)
//	{
//		count++;
//	}
//	return count;
//}
//void reverse_string(char* str)
//{
//	int len = my_strlen(str);
//	
//		char tmp = *str;
//		*str = *(str + len - 1);
//		*(str + len - 1) = '\0';
//	
//	if (my_strlen(str + 1) >= 2)
//		reverse_string(str + 1);
//		*(str + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = { "abcdef" };
//	reverse_string(arr);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//
//5.递归和非递归分别实现strlen
//#include<assert.h>
//int my_strlen(const char*p)
//{
//	assert(p);
//	int count = 0;
//
//	while (*p++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int ret = 0;
//	char arr[] = "abcdef";
//	ret=my_strlen(arr);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//递归实现strlen
//
//int Strlen(char* str)
//{
//	if (str[0] == '\0')
//	{
//		return 0;
//	}
//	//str本质上是一个字符数组的首元素地址
//	//str + 1就表示首元素的下一个元素(即次元素)地址
//	return 1 + Strlen(str + 1);
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = 0;
//	ret = Strlen(arr);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}
//6.递归和非递归分别实现求n的阶乘
//非递归
//int main()
//{
//	int n = 0;
//	printf("请输入要操作的数:>");
//	scanf("%d", &n);
//	int i = 0;
//	
//	int p = 1;
//	for (i = 1; i <= n; i++)
//	{
//		p = p*i;
//	}
//	printf("%d", p);
//	system("pause");
//	return 0;
//}
//
//int fact(int f)   
//
//{
//
//	int result = 1;
//
//	for (int i = 2; i <= f; i++)
//
//		result *= i;
//
//	return result;
//
//}
//int main()
//{
//	int f = 0;
//	printf("请输入要操作的数:>");
//	scanf("%d", &f);
//	int ret = 0;
//	ret = fact(f);
//	printf("%d", ret);
//    system("pause");
//    return 0;
//}
//7.递归方式实现打印一个整数的每一位
//void print(int n)
//{
//	if (n>9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 521;
//	print(n);
//	system("pause");
//	return 0;
//}

