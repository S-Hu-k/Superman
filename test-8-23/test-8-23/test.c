#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
////1.ʵ��һ�����������������ַ����е�k���ַ���
////ABCD����һ���ַ��õ�BCDA
////ABCD���������ַ��õ�CDAB
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
//	printf("������Ҫ��ת��λ����>");
//	scanf("%d", &n);
//	char arr[5] = "abcd";
//	int len = strlen(arr);
//	int ret = 0;
//	ret = Left_handed(arr, n, len);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
////2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
////���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.
////
////AABCD����һ���ַ��õ�ABCDA
////AABCD���������ַ��õ�BCDAA
////
////AABCD����һ���ַ��õ�DAABC
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
//		for (i = 0; i < len - 1; i++)//����
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