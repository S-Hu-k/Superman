#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void menu()
{
	printf("**************************************\n");
	printf("*********    1.play         **********\n");
	printf("*********    0.exit         **********\n");
	printf("**************************************\n");

}
void game()
{
	printf("����Ϸ");
}
int main()
{
	int input = 0;
	{

		do
		{
			menu();//��ӡ�˵�
			printf("��ѡ��;>");
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ");
				break;
			default:
				printf("�����������������");
			}
			printf("\n");
		}
		while (input);
	}
	system("pause");
	return 0;
}