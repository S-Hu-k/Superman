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
//	printf("������Ҫ��������:>");
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
//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
//1 1 2 3 5 8 13
//int main()
//{
//	int n = 0;
//	int a = 1;
//	int b = 1;
//	int i = 0;
//	int sum = 0;
	/*printf("������Ҫ�����:>");
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
//	printf("��������Ҫ����쳲���������λ��:>");
//	scanf("%d", &n);
//	printf("%d", fib(n));
//	system("pause");
//	return 0;
//}
//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
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
//	printf("����������������:>");
//	scanf("%d%d", &n, &k);
//	ret=Pow(n, k);
//	
//	printf("%lf", ret);
//	system("pause");
//	return 0;
//}
//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
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
//	printf("������Ҫ�������:>");
//	scanf("%d", &n);
//	int ret = 0;
//	ret = DigitSum(n);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}
//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
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
//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
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
//�ݹ�ʵ��strlen
//
//int Strlen(char* str)
//{
//	if (str[0] == '\0')
//	{
//		return 0;
//	}
//	//str��������һ���ַ��������Ԫ�ص�ַ
//	//str + 1�ͱ�ʾ��Ԫ�ص���һ��Ԫ��(����Ԫ��)��ַ
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
//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
//�ǵݹ�
//int main()
//{
//	int n = 0;
//	printf("������Ҫ��������:>");
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
//	printf("������Ҫ��������:>");
//	scanf("%d", &f);
//	int ret = 0;
//	ret = fact(f);
//	printf("%d", ret);
//    system("pause");
//    return 0;
//}
//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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

