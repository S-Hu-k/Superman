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
//struct stu s = { "zhangsan , 20" };//��ʼ��
//struct node
//{
//	int date;
//	struct point p;
//	struct node* next;
//}n1 = { 10, {4,5},NULL };
//struct Node n2 = { 20, { 5, 6 }, NULL };//�ṹ��Ƕ�׳�ʼ��
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
//1. ��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ����
//2. ������Ա����Ҫ���뵽ĳ�����֣������������������ĵ�ַ����
//������ = ������Ĭ�ϵ�һ�������� �� �ó�Ա��С�Ľ�Сֵ��
//VS��Ĭ�ϵ�ֵΪ8Linux�е�Ĭ��ֵΪ4
//3.�ṹ���ܴ�СΪ����������ÿ����Ա��������һ��������������������
//4.���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ�����������������������
//�ṹ��������С��������������������Ƕ�׽ṹ��Ķ�������������
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
//enum Day//����
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//enum Sex//�Ա�
//{
//	MALE,
//	FEMALE,
//	SECRET
//}��
//enum Color//��ɫ
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
//}a[20], *p;//�ַ�ת��
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
////ʵ��strlen�����ַ���
//
////��������ʽ
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
//��ʽ2��
////���ܴ�����ʱ����������
//int my_strlen(const char * str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
//��ʽ3��
////ָ��-ָ��ķ�ʽ
//int my_strlen(char *s)
//{
//	char *p = s;
//	while (*p != ��\0��)
//		p++;
//	return p - s;
//}
//ģ��ʵ��memmove
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