#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
//int main()
//{
//	//arr[10];
//malloc��ӡ����
//	//int* p = (int *)malloc(INT_MAX);
//	int* p = (int*)malloc(10 * sizeof(int));
//	int i = 0;
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d	", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	//int arr[10];
//	//int* p = (int*)malloc(10*sizeof(int));
//	int* p = (int*)malloc(INT_MAX);
//	int i = 0;
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//calloc��ʼ��Ϊ0
//int main()
//{
//	int* p=(int *)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//callocҲ���ڶ��Ͽ��ٿռ䣬����Ҫfree�����ؿռ䣻
//	free(p);
//	p = NULL;
//	return 0;
//
//}

//realloc �����ռ��С
int main()
{
	int* ptr = NULL;
	int* p = (int*)malloc(10 * sizeof(int));
		int i = 0;
		if (p == NULL)
		{
			printf("%s\n", strerror(errno));
			return 0;
		}
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		 ptr=realloc(p, 20 * sizeof(int));
		 if (ptr != NULL)
		 {
			 p = ptr;
		 }
		free(p);
		p = NULL;
		return 0;


}
��̬�ڴ濪�ٺ�Ҫ�Խ�����ָ������жϣ���ֹ����ҵ�
int main(){
	while (1)
	{
		malloc(1);
	}
	return 0;

}
char* GetMemory(char *p)

{

	p = (char *)malloc(100);

	return p;

}



void Test(void)

{

	char *str = NULL;

	str = GetMemory(str);

	strcpy(str, "hello world");

	printf(str);

	free(str);

	str = NULL;

}



int main()

{

	Test();

	//char *p = "hello bit\n";

	//printf("hello bit\n");

	//printf(p);

	//printf("%s", p);



	return 0;

}





char *GetMemory(void)

{

	//����ջ�ռ��ַ������

	char p[] = "hello world";
	return p;
}
void Test(void)
{
	char *str = NULL;
	str = GetMemory();
	printf(str);
}

int main()
{
	Test();
	return 0;
}







char *GetMemory(void)
{
	char *p = "hello world";
	return p;
}
void Test(void)
{
	char *str = NULL;
	str = GetMemory();
	printf(str);
}



int main()

{
	Test();
	return 0;
}







int* test()

{
	int a = 10;
	return &a;
}

int main()

{
	int*p = test();
	printf("hehe\n");
	printf("%d\n", *p);
	return 0;
}





void GetMemory(char **p, int num)
{
	*p = (char *)malloc(num);
}
void Test(void)
{

	char *str = NULL;

	GetMemory(&str, 100);

	strcpy(str, "hello");

	printf(str);

	free(str);

	str = NULL;

}



int main()

{

	Test();

	return 0;

}





void Test(void)

{

	char *str = (char *) malloc(100);

	strcpy(str, "hello");

	free(str);

	str = NULL;



	if(str != NULL)

	{

		strcpy(str, "world");

		printf(str);

	}

}



int main()

{

	Test();

	return 0;

}