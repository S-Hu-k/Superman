#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
//
//int main()
//{
//	int i = 0;//����
//	int j = 0;//����
//	int n = 0;
//	printf("������Ҫ��ӡ�ĳ˷��ھ��������:>");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d*%-2d=%-5d", i, j, i*j);
//			
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//2.ʹ�ú���ʵ���������Ľ�����
//int swap_digital(const int* x, const int* y)
//{
//	int ret = 0;
//	ret = x;
//	x = y;
//	y = ret;
//	printf("%d %d", x, y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("������Ҫ������������;>");
//	scanf("%d%d", &a, &b);
//	swap_digital(a,b);
//	
//	system("pause");
//	return 0;
//}
//
//3.ʵ��һ�������ж�year�ǲ������ꡣ
//int judge_leapyear(const int a)
//{
//	if (((a % 4 == 0) && (a % 100 == 0)) || (a % 400 == 0))
//	{
//		printf("������\n");
//	}
//	else
//		printf("��������\n");
//
//}
//int main()
//{
//	int year = 0;
//	printf("��������Ҫ�жϵ����;>");
//	scanf("%d", &year);
//	judge_leapyear(year);
//	system("pause");
//	return 0;
//}
//
//4.
//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
//
//void Init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//}
//void Printf(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void Empty(int arr[], int sz)
//{
//	memset(arr, 0, sz*sizeof(arr[0]));
//}
//int main()
//{
//	char arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr,sz);
//	Printf(arr, sz);
//	Reverse(arr, sz);
//	Printf(arr, sz);
//	Empty(arr, sz);
//	Printf(arr, sz);
//
//	system("pause");
//	return 0;
//}
//5.ʵ��һ���������ж�һ�����ǲ���������

//int fact(int p)
//{
//	int i, n;
//	if (p == 1)
//		return 0;
//	n = sqrt(p);
//	for (i = 2; i <= n; i++)
//	if (p%i == 0)
//	{
//		return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int n, i;
//	long long m;
//	scanf("%d", &n);
//	for (i = 0; i<n; i++)
//	{
//		scanf("%lld", &m);
//		if (fact(m))
//			printf("Yes\n");
//		else
//			printf("No\n");
//	}
//	return 0;
//}
