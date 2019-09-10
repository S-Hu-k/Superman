//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>

//1.递归和非递归分别实现求第n个斐波那契数。
//

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
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("请输入要计算的数:>");
//	scanf("%d%d", &n, &k);
//	
//	double ret = Pow(n, k);
//	printf("%lf", ret);
//	system("pause");
//	return 0;
//}
//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//
//int DigitSum(int n)
//{
//	if (n < 9)
//	{
//		return n;
//	}
//	else
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//}
//int main()
//{
//
//	int input = 0;
//	printf("请输入要计算的数:>");
//	scanf("%d", &input);
//	int ret = 0;
//
//	ret = DigitSum(input);
//	printf("%d", ret);
//	
//	system("pause");
//	return 0;
//}
//4. 编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//
//#include<assert.h>
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
//	
//	int len = my_strlen(str);
//	assert(str);
//	int tmp = 0;
//	char*left = str;
//	char*right = len + str - 1;
//	while (left < right)
//	{
//		 tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//			right--;
//	}
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//递归
//#include<assert.h>
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
//	char tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
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
