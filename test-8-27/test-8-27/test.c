#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include <stdio.h>
#include<string.h>
#include<assert.h>

//char* my_strchr(char* dest, const char* p)
//{
//	char* ret = dest;
//	while (*ret != '\0')
//	{
//		if (*ret == p)
//		{
//			return ret;
//		}
//		ret++;
//	}
//	return NULL;
//}
//char flag;
//main()
//{
//	char arr[] = "abjah";
//	char* flag = 'a';
//	char* ret = my_strchr(arr, &flag);
//	printf("%s", ret);
//	system(" pause ");
//	return 0;
//}

//
//char* my_strchr(const char* dest, const char* p)
//{
//	char* ret = dest;
//	while (*ret != '\0')
//	{
//		if (*ret == p)
//		{
//			return ret;
//		}
//		ret++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr[] = "abjah";
//	char* ret = my_strchr(arr, 'a');
//	printf("%s\n", ret);
//	system("pause");
//	return 0;
//
//}

//
//int main()
//{
//	int flag = 0;
//	 flag = 'a';
//	printf("%p\n", &flag);
//	system("pause");
//	return 0;
//}
//strncat 在字符串后面追加n个字符
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[20] = { 0 };
//	strcpy(arr1, "i love ");
//    strcpy(arr2, "china");
//    strncat(arr1, arr2, 90);
//	printf("%s\n", arr1);
//	return 0;
//}
//strncpy把str2中的N个字符复制到str1中
//int main()
//{
//	char str1[20];
//	char str2[20];
//	strcpy(str1, "to be ");
//	strcpy(str2, "or not to be");
//	strncpy(str1, str2, 5);
//	puts(str1);
//	return 0;
//}
//strtok
//int main()
//{
//	char arr[] = "kshkah@ksk.ki&skjk";
//	char* tmp = "@.&";
//	char* ret = NULL;
//
//	 /*ret=strtok(arr,tmp);
//	printf("%s\n", ret);
//	 ret = strtok(NULL, tmp);
//	printf("%s\n", ret);
//	ret = strtok(NULL, tmp);
//	printf("%s\n", ret);*/
//
//	for (ret = strtok(arr, tmp); ret != NULL; ret = strtok(NULL, tmp))
//	{
//		printf("%s\n", ret);
//	}
//	system("pause");
//	return 0;
//}
//memcpy
//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest&&src);
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//int main()
//{
//	int ret = 0;
//	char arr1[10] = { 0 };
//	char arr2[] = "abcdef";
//	ret=my_memcpy(arr1, arr2, 2);
//	printf("%s\n", ret);
//	system("pause");
//	return 0;
//}
//
//
//
//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//void left_move(char arr[], int k)
//{
//	int len = strlen(arr);
//	int j = 0;
//	for (j = 0; j<k; j++)
//	{
//		char ch = arr[0];
//		int i = 0;
//		for (i = 0; i<len - 1; i++)
//		{
//			arr[i] = arr[i + 1];
//		}
//		arr[len - 1] = ch;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 10);
//	printf("%s\n", arr);
//	return 0;
//}
//
//
//
//void left_move(char arr[], int k)
//{
//	int len = strlen(arr);
//	if (k > len)
//	{
//		printf("输入要旋转的字符超过字符串长度");
//	}
//	else
//	{
//		int j = 0;
//		for (j = 0; j < k; j++)
//		{
//			char ch = arr[0];
//			int i = 0;
//			for (i = 0; i < len - 1; i++)
//			{
//				arr[i] = arr[i + 1];
//			}
//			arr[len - 1] = ch;
//		}
//	}
//}
//int main()
//{
//	int k = 0;
//	printf("请输入要旋转的字符个数:>");
//	scanf("%d", &k);
//	char arr[] = "ABCD";
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//	system("pause");
//}
