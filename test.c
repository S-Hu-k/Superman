将三个数从大到小进行排列



#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int t = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	};
	if (a < c)
	{
		t = a;
		a = c;
		c = t;
	};
	if (b < c)
	{
		t = b;
		b = c;
		c = t;
	};
	printf("%d%d%d", a, b, c);
	system("pause");
	return 0;
}


2.两个数的最大公约数

#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d", &a, &b);
	c = a % b;
	while (c)
	{
		a = b;
		b = c;
		c = a%b;
	}
	printf("%d", b);

	system("pause");
	return 0;
}
3.交换两个数组

#include<stdio.h>
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 6, 7, 8, 9, 10 };
	int i = 0;
	int tmp = 0;
	
	for (i = 0; i < 5; i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ",arr1[i]);

	}
	for (i = 0; i < 5; i++)
	{
		printf("%d",arr2[i]);
	}
	system("pause");
	return 0;
}



4.1-100之间含有9的数字
include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 89; i++)
	{
		if ((i + 1) % 10 == 0)
		{
			printf("%d ", i);
				count++;
		}
	}
	for (i = 90; i < 100; i++)
	{
		printf("%d ", i);
		count++;
	}
	printf("\ncount=%d", count);
	system("pause");
	return 0;
}
