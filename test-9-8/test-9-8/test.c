#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
//��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����
//int main()
//{
//	int input = 0;
//	int i = 0;
//	int ret = 0;
//	char arr1[] = "123456";
//	int arr2[] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//
//		printf("����������:>");
//		scanf("%d", &input);
//		ret = strcmp(arr2, arr1);
//		if (ret = 0)
//		{
//			printf("����������ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("�����������\n");
//
//		}
//		if (i == 2)
//		{
//			printf("�����������������˳�����\n");
//		}
//	}
//
//		
//	system("pause");
//	return 0;
//}
//1.��ɲ�������Ϸ��
//
//void menu()
//{
//	printf("********************************************\n");
//	printf("**********           1.play       **********\n");
//	printf("**********           0.exit       **********\n");
//	printf("********************************************\n");
//}
//enum Option
//{
//	EXIT,
//	PLAY
//	
//};
// /*enum Option
//{
//	EXIT,
//	ADD,
//	SUB,
//	MUL,
//	DIV
//};*/
//void game()
//{
//	int ret = 0;
//	/*printf("����Ϸ\n");*/
//	//���������
//	ret=rand()%100;
//	int num = 0;
//	
//	while (1)
//	{
//		printf("������µ�����:>");
//		scanf("%d", &num);
//		if (num > ret)
//		{
//			printf("�´���\n");
//			
//		}
//		else if (num < ret)
//		{
//			printf("��С��\n");
//		
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//
//	
//}
//int main()
//{
//	
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		/*menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case ADD:
//		break;
//		case SUB:
//		break;
//		case MUL:
//		break;
//		case DIV:
//		break;
//		case EXIT:
//		break;
//		}*/
//		menu();//�˵�
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case PLAY:
//			game();
//			break;
//		case EXIT:
//			printf("�˳�����\n");
//			break;
//		}
//	}while (input);
//	system("pause");
//	return 0;
//}
//2.д����������������������в�����Ҫ�����֣�
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰����)
//int main()
//{
//	int input = 0;
//	char arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int ret = 0;
//	int i = 0;
//	printf("��������Ҫ���ҵ�����:>");
//	scanf("%d", &input);
//	for (i = 0; i < 10;i++)
//	{
//		
//		//����
//		ret = arr[i];
//		
//	if (ret == input)
//		{
//			printf("�ҵ���\n");
//			printf("%d\n", i);
//			i++;
//			break;
//		}
//	
//	}
//	if (ret != input)
//	{
//		printf("%d", -1);
//	}
//	
//	
//	system("pause");
//	return 0;
//}
//�۰����
//int main()
//{
//	char arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int i = 8;
//	while (right >= left)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > i)
//		{
//			right = mid - 1;
//		}
//		if (arr[mid] < i)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("%d\n", mid);
//			break;
//		}
//	}
//	while (left > right)
//	{
//		printf("%d\n", -1);
//		break;
//	}
//	system("pause");
//	return 0;
//}