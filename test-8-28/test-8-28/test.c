#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//*struct point
//{
//int x;
//int y;
//}p1*/;
//struct point p3 = { x, y };
//
//struct point p2;
//struct stu
//{
//	char name[15];
//	int age;
//};
//
//
//struct stu s = { "zhangsan , 20" };//初始化
//struct node
//{
//	int date;
//	struct point p;
//	struct node* next;
//}n1 = { 10, {4,5},NULL };
//struct Node n2 = { 20, { 5, 6 }, NULL };//结构体嵌套初始化
//int main()
//{
//	struct S1
//	{
//		char c1;//1
//		int i;//4
//		char c2;//1
//	};
//	printf("%d\n", sizeof(struct S1));
//	return 0;
//}
////
//1. 第一个成员在与结构体变量偏移量为0的地址处。
//2. 其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处。
//对齐数 = 编译器默认的一个对齐数 与 该成员大小的较小值。
//VS中默认的值为8Linux中的默认值为4
//3.结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍。
//4.如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，
//结构体的整体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//printf("%d\n", sizeof(struct S2));
////
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//printf("%d\n", sizeof(struct S3));
//enum Day//星期
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//enum Sex//性别
//{
//	MALE,
//	FEMALE,
//	SECRET
//}；
//enum Color//颜色
//{
//	RED,
//	GREEN,
//	BLUE
//};
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//struct
//{
//	int a;
//	char b;
//	float c;
//}a[20], *p;//字符转换
//#include <ctype.h> 
//int main()
//{
//	int i = 0;
//	char str[] = "Test String.\n";
//	char c;
//	while (str[i])
//	{
//		c = str[i];
//		if (isupper(c))
//			c = tolower(c);
//		putchar(c);
//		i++;
//	}
//	return 0;
//}
////实现strlen的三种方法
//
////计数器方式
//int my_strlen(const char * str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//方式2：
////不能创建临时变量计数器
//int my_strlen(const char * str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
//方式3：
////指针-指针的方式
//int my_strlen(char *s)
//{
//	char *p = s;
//	while (*p != ‘\0’)
//		p++;
//	return p - s;
//}
//模拟实现memmove
//void * memmove(void * dst, const void * src, size_t count)
//{
//	void * ret = dst;
//	if (dst <= src || (char *)dst >= ((char *)src + count)) 
//	{
//		
//		while (count--)
//		{
//			*(char *)dst = *(char *)src;
//			dst = (char *)dst + 1;
//			src = (char *)src + 1;
//		}
//	}
//	else {
//		
//		dst = (char *)dst + count - 1;
//		src = (char *)src + count - 1;
//		while (count--)
//		{
//			*(char *)dst = *(char *)src;
//			dst = (char *)dst - 1;
//			src = (char *)src - 1;
//		}
//	}
//	return(ret);
//}