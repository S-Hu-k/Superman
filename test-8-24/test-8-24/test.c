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
//int my_strlen(const char *str)//���ַ������Ⱥ���
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
//void reverse(char a[], int left, int right)//������
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
//char* reverse_string(char a[])//�����ַ���
//{
//	int i = 0;
//	int left = 0;
//	int right = my_strlen(a) - 1;//���������ַ���
//	reverse(a, left, right);
//	//�����������
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
//1.һ��������ֻ�����������ǳ���һ�Σ�
//�����������ֶ����������Ρ�
//�ҳ����������֣����ʵ�֡�
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
//	}	//��ret��������Ϊ1��һλ
//	for (i = 0; i < 32; i++)	
//	{		
//		if (((ret >> 1) & 1) == 1)		
//		{			
//			pos = i;		
//			break;		
//		}	
//	}	//����
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
//	int i = 0;//ѭ������
//	int ret = 0;//��¼����ֵ���Ľ��
//	int pos = 0;//��¼ret������Ϊ��һ��Ϊ1��λ��
//	int x = 0;//��һ��ֵ�����x���õ�1��û����ͬ���ֵ�ֵ
//	int y = 0;//����һ��ֵ�����x���õ���1��û����ͬ���ֵ�ֵ
//	for (i = 0; i < len; i++)
//	{
//		ret ^= arr[i];
//	}//�����������ֵ���
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((ret >> i) & 1))
//		{
//			pos = i;
//			break;
//		}
//	}//�ҵ�ret������Ϊ��һ��Ϊ1��λ��
//	for (i = 0; i < len; i++)
//	{
//		if (1 == ((arr[i] >> pos) & 1))
//		{
//			x ^= arr[i];
//		}
//		else
//			y ^= arr[i];
//	}//�������
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
//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�
//int main()
//{
//	int n = 0;
//	printf("���������Ǯ��:>");
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
//3.ģ��ʵ��strcpy

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
//4.ģ��ʵ��strcat
//���������ַ���
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

