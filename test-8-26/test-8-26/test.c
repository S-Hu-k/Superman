#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//模拟实现strcpy
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest&&src);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	const (* arr1) = "abcdef";
//	char arr2[] = { 0 };
//	my_strcpy(arr2, arr1);
//    printf("%s\n", arr2);
//	system("pause");
//	return 0;
//}
//模拟实现strcat
//char* my_strcat( char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest&&src);
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++=*src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "i love ";
//	char arr2[] = "china";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	system("pause");
//	return 0;
//}
//模拟实现strstr
//char* my_strstr(const char* s1, const char* s2)
//{
//
//	const char*p1 = s1;
//	const char*p2 = s2;
//	const char*start = p1;
//	if (*s2=='\0')
//		return s1;
//	while (*start)
//	{
//		p1 = start;
//		p2 = s2;
//		while (*p1 && *p2 && *p1 == *p2)
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0') 
//		{
//			return (char*)start;
//		}
//		start++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abcccdef";
//	char* ret=my_strstr(arr1, "ccd");
//	if (ret != NULL)
//	{
//		printf("%s\n", ret);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	system("pause");
//	return 0;
//}
//模拟实现strchr
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
//}

//模拟实现strcmp
//char* my_strcmp(const char*s1, const char*s2)
//{
//	assert(s1&&s2);
//	while (*s1&&*s2)
//	{
//		if (*s1++ == *s2++)
//		{
//			;
//		}
//	}
//	return (int*)(*s1 - *s2);
//}
//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "abc";
//	int* ret = my_strcmp(arr1, arr2);
//	if (ret > 0)
//	{
//		printf("大于\n");
//	}
//	else if (ret < 0)
//	{
//		printf("小于\n");
//	}
//	else
//		printf("两个字符串相等\n");
//	system("pause");
//	return 0;
//}