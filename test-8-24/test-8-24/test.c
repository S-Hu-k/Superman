#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int average = a + (b - a) / 2;
//	//int average = (a&b)+((a^b )>> 1);
//	printf("%d", average);
//	return 0;
//}
//#include <assert.h>
//int my_strlen(const char *str)//求字符串长度函数
//{
//	int count = 0;
//	assert(str);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse(char a[], int left, int right)//逆序函数
//{
//	while (left<right)
//	{
//		char tmp = a[left];
//		a[left] = a[right];
//		a[right] = tmp;
//		left++;
//		right--;
//	}
//}
//char* reverse_string(char a[])//逆序字符串
//{
//	int i = 0;
//	int left = 0;
//	int right = my_strlen(a) - 1;//逆序整个字符串
//	reverse(a, left, right);
//	//逆序逐个单词
//	while (a[i] != '\0')
//	{
//		left = i;
//		while ((a[i] != '\0') && (a[i] != ' '))
//		{
//			i++;
//
//		}
//		right = i - 1;
//		reverse(a, left, right);
//		if (a[i] != '\0')
//			i++;
//	}
//	return a;
//}
//
//int main()
//{
//	char a[] = "student a am i";
//	reverse_string(a);
//	printf("%s\n", a);
//	system("pause");
//	return 0;
//}
//1.一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个数字，编程实现。
//int main()
//{
//	int i = 0;
//	char arr[8] = { 1, 2, 3, 5, 4, 2, 4, 1 };
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//		for (i = 0; i < sz; i++)
//		{
//			ret = ret^arr[i];
//		}
//	printf("%d", ret);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{	
//	int i = 0;	
//	int	ret = 0;	
//	int pos = 0;	
//	int arr[] = { 1, 2, 3, 5, 4, 2, 4, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int num1 = 0;	
//	int num2 = 0;	
//	for (i = 0; i < sz; i++)	
//	{		
//		ret ^= arr[i];
//	}	//找ret二进制中为1的一位
//	for (i = 0; i < 32; i++)	
//	{		
//		if (((ret >> 1) & 1) == 1)		
//		{			
//			pos = i;		
//			break;		
//		}	
//	}	//分组
//	for (i = 0; i < sz; i++)
//	{	
//		if (((arr[i] >> pos) & 1)==1) 	
//		{			
//			num1 ^= arr[i];		
//		}
//	}	
//	num2 = num1^ret;	
//	printf("num1 = %d   num2 = %d\n", num1, num2);
//	system("pause");	
//	return 0;
//}
//#include<stdio.h>
//#include <windows.h>
//
//void find_num(int arr[], int len)
//{
//	int i = 0;//循环变量
//	int ret = 0;//记录所有值异或的结果
//	int pos = 0;//记录ret二进制为第一个为1的位置
//	int x = 0;//将一组值异或在x，得到1个没有相同数字的值
//	int y = 0;//将另一组值异或在x，得到另1个没有相同数字的值
//	for (i = 0; i < len; i++)
//	{
//		ret ^= arr[i];
//	}//将数组的所有值异或
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((ret >> i) & 1))
//		{
//			pos = i;
//			break;
//		}
//	}//找到ret二进制为第一个为1的位置
//	for (i = 0; i < len; i++)
//	{
//		if (1 == ((arr[i] >> pos) & 1))
//		{
//			x ^= arr[i];
//		}
//		else
//			y ^= arr[i];
//	}//分组异或
//	printf("x=%d,y=%d\n", x, y);
//
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 5, 4, 2, 4, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	find_num(arr, sz);
//	system("pause");
//	return 0;
//}

//
//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。
//int main()
//{
//	int n = 0;
//	printf("请输入给的钱数:>");
//	scanf("%d", &n);
//	int sum = n;
//	while (n>2)
//	{
//		n = n / 2;
//		sum = sum + n;
//	}
//	printf("%d", sum);
//	system("pause");
//	return 0;
//}
//
//3.模拟实现strcpy

//void copy_ch(char a[],char b[])
//{
//	if (b == NULL)
//		return -1;
//	while ((*a++ = *b++) != '\0')
//	{
//		
//	}
//	*a = '\0';
//}
//int main()
//{
//	char arr[] = "123456";
//	char brr[64] = { 0 };
//	 copy_ch(brr,arr);
//	printf("%s\n", brr);
//	system("pause");
//	return 0;
//}
//4.模拟实现strcat
//连接两个字符串
//char* get_ch(char a[], char b[])
//{
//	char* ret = a;
//	while (*ret != '\0')
//	{
//		ret++;
//	}
//	while ((*ret++ = *b++) != '\0')
//	{
//
//	}
//	*ret = '\0';
//	return (char*)ret;
//}
//int main()
//{
//	char arr1[] = "I Love";
//	char arr2[] = " China";
//	get_ch(arr1, arr2);
//	printf("%s\n", arr1);
//	system("pause");
//	return 0;
//}

