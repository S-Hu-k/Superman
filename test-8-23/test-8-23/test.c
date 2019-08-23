#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
////1.实现一个函数，可以左旋字符串中的k个字符。
////ABCD左旋一个字符得到BCDA
////ABCD左旋两个字符得到CDAB
//
//#include<math.h>
//#include<string.h>
//
//int Left_handed(char str[], int n, int sz)
//{
//	int i = 0;
//	while (n--)
//	{
//		int tmp = 0;
//		tmp = str[0];
//		for (i = 0; i < sz - 1; i++)
//		{
//			str[i] = str[i + 1];
//		}
//		str[sz - 1] = tmp;
//	}
//
//}
//int main()
//{
//	int n = 0;
//	printf("请输入要旋转的位数：>");
//	scanf("%d", &n);
//	char arr[5] = "abcd";
//	int len = strlen(arr);
//	int ret = 0;
//	ret = Left_handed(arr, n, len);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
////2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
////例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
////
////AABCD左旋一个字符得到ABCDA
////AABCD左旋两个字符得到BCDAA
////
////AABCD右旋一个字符得到DAABC
////
//#include <string.h> 
//int judge(char str1[], char str2[])
//{
//	int i = 0;
//	int j = 0;
//	int len = strlen(str1);
//	for (j = 1; j <=len; j++)
//	{
//		int tmp = 0;
//		tmp = str1[0];
//		for (i = 0; i < len - 1; i++)//左旋
//		{
//			str1[i] = str1[i+1];
//		}
//		str1[len-1] = tmp;
//	}
//	if (1 == strcmp(str1, str2))
//	{
//		return 0;
//	}
//	return 1;
//
//}
//int main()
//{
//	char s1[10] = "aabcd";
//	char s2[10] = "bcdaa";
//	printf("%s\n", s1);
//	printf("%s\n", s2);
//	printf("%d\n", judge(s1, s2));
//	system("pause");
//	return 0;
//}