#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"
//2.ʵ��һ��ͨѶ¼��
//ͨѶ¼���������洢1000���˵���Ϣ��ÿ���˵���Ϣ������
//�������Ա����䡢�绰��סַ
//
//�ṩ������
//1. �����ϵ����Ϣ
//2. ɾ��ָ����ϵ����Ϣ
//3. ����ָ����ϵ����Ϣ
//4. �޸�ָ����ϵ����Ϣ
//5. ��ʾ������ϵ����Ϣ
//6. ���������ϵ��
//7. ����������������ϵ��
//8. ������ϵ�˵��ļ�
//9. ������ϵ��
void menu()
{
	printf("********************************\n");
	printf("******  1.add    2.del    ******\n");
	printf("******  3.search 4.change ******\n");
	printf("******  5.show   6.sort   ******\n");
	printf("******  0.exit            ******\n");
	printf("********************************\n");
}



int main()
{
	int input = 0;
	//����һ��ͨѶ¼
	 Contact con;
	 //��ʼ��ͨѶ¼
	 InitContact(&con);
	do
	{
		menu();
		printf("������Ҫѡ�����Ŀ:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			break;
		case CHANGE:
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("�����������������\n");
		}

	} while (input);
	return 0;
}