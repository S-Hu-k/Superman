#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1.����Ļ���������ͼ����
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
//
//int main()
//{
//	int line = 0;
//	int i = 0;
//	printf("������Ҫ��ӡ������:>");
//	scanf("%d", &line);
//	//�ȴ�ӡ�ϰ벿��
//	//�ȴ�ӡ�ո�
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//�ٴ�ӡ*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//�ٴ�ӡ�°벿��
//	for (i = 0; i < line -1 ; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2 * (line -1- i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	system("pause");
//	return 0;
//}
//2.���0��999֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ��������磻153��1��5��3 ? ����153��һ����ˮ�ɻ�������

/*
�������У�ˮ�ɻ�����Narcissistic number��Ҳ��Ϊ������������������ķ˹׳����ķ˹��������Armstrong number������ָһNλ�����������֮N�η��͵��ڸ�����
����153��370��371��407������λ����ˮ�ɻ������������֮�����͵��ڸ�����
153 = 1^3 + 5^3 + 3^3��
370 = 3^3 + 7^3 + 0^3��
371 = 3^3 + 7^3 + 1^3��
407 = 4^3 + 0^3 + 7^3��
*/
#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100000; i++)
//	{
//		//���жϸ����Ǽ�λ��
//		int sum = 0;
//		int count = 0;
//		int tmp = i;
//		while (tmp)
//		{
//			tmp /= 10;
//			count++;
//		}
//		//����η���
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		
//		//�ж�
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//3.
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
//int main()
//{
//	int a = 0;
//	int sum = 0;
//	int k = 0;
//	int i = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("sum=%d", sum);
//	system("pause");
//	return 0;
//}
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= 'A'&&ch <= 'Z')
//		{
//			putchar(ch + 32);
//		}
//		else if (ch > 'a'&&ch <= 'z')
//		{
//			putchar(ch - 32);
//		}
//		else if (ch >= '0'&&ch <= '9')
//		{
//			;
//		}
//		else
//		{
//			putchar(ch);
//		}
//	}
//	system("pause");
//	return 0;
//}
//#include<ctype.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (isupper(ch))
//		{
//			putchar(tolower(ch));
//		}
//		else if (islower(ch))
//		{
//			putchar(toupper(ch));
//		}
//		else if (isdigit(ch))
//		{
//			;
//		}
//		else
//		{
//			putchar(ch);
//		}
//	}
//	system("pause");
//	return 0;
//}