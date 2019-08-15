#include<stdio.h>
//int main()
//{
//	//先输入上半部分，再输入下半部分
//	int i = 0;
//	//先输入空格
//	//再输入*
//	int line = 0;
//	int j = 0;
//	scanf("%d", &line);
//	for (i = 0; i < line; i++)
//	{
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - i; i++)
//	{
//		for (j = 0; j <=i ; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2 * (line -1- i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//
//	
//}
//int main()
//{
//	int a = 0;
//	int sum = 0;
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	scanf("%d", &a);
//	for (i = 0; i < n;i++)
//	{
//		i = 10 * a + a;
//		sum = sum + i;
//	}
//	printf("%d", sum);
//	
//	system("pause");
//	return 0;
//}
//判断1——10000之间的水仙花数
#include<math.h>
int main()
{
	int i = 0;
	
	//先判断该数是几位数；
	for (i = 0; i <= 10000; i++)
	{
		int sum = 0;
		int count = 0;
		int tmp = i;
		while (tmp)
		{
			tmp/=10;
			count++;
		}
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, count);
			tmp /= 10;
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
			
	
	}
	
	system("pause");
	return 0;
}
