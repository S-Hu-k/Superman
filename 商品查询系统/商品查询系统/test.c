#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#define PR printf
#define SC scanf
struct goods
{
	long int num;
	char name[20];
	char sort[20];
	long int count;
	long int price;
}goods[200];
int k, n, i;
char a[10] = "123";
char b[10];
void main()
{
	void input();
	void sequence();
	void purchase();
	void sell();
	void edit();
	void correct();
	void search();
	void scan();
	void reserve();
	void exit();
	void start();
ks:
	printf("\n\t\t\t\t����������:");

	gets(b);
	if (strcmp(a, b) == 0)
		printf("\n\n\t\t\t\t��½�ɹ�\n\n\t\t\t�����������...");
	else
	{
		printf("\n\n\n\t\t\t�������\n\n\t\t\t");

		goto ks;
	}
lp: for (i = 0; i<1; i++)
	PR("\n\n--��-��--��-��--��-��--��-��--��-��--��-\n");
	PR("\n\t\t\t    ��Ʒ��Ϣ����ϵͳ\t\n\n");
	PR("\t  1 ��������Ʒ��Ϣ\n\n");
	PR("\t  2 ��������Ʒ��Ϣ\n\n");
	PR("\t  3 �����������Ϣ\t\t6 ���޸���Ʒ��Ϣ\n\n");
	PR("\t  4 ������������Ϣ\t\t7 ����ѯ��Ʒ��Ϣ\n\n");
	PR("\t  5 ������/ɾ����Ʒ\t\t8 �������Ʒ��Ϣ\n\n");
	PR("\t\t\t\t\t9 ��������Ʒ��Ϣ\n\n");
	PR(" \t\t  --��-��--��-��--��-��--��-��--��-��--��-");/*�˵�ѡ�����*/
	PR("\n\n");
	PR("\t��ѡ������Ҫ�Ĳ���(��ѡ��(0)�˳�):");
	SC("%d", &k);
	system("cls");
	switch (k)  /*��switch���ʵ�ֹ���ѡ��*/
	{
	case 1: input(); break;
	case 2: sequence(); break;
	case 3: purchase(); break;
	case 4: sell(); break;
	case 5: edit(); break;
	case 6: correct(); break;
	case 7: search(); break;
	case 8: scan(); break;
	case 9: reserve(); break;
	case 0: PR("\n\n\t        / / / / /  ^_^  \\ \\ \\ \\ \\ \n\n\t��������ллʹ�ã���ӭ�������ټ�O(��_��)O��������"); exit(0);  /*�˳�ϵͳ*/
	default: puts("�������,�밴���⽡�������˵���\n"); break;
	}
	system("cls");   /*����*/
	goto lp;  /*����������*/
}

void input()  /*����1��������Ʒ��Ϣ*/
{
	PR("\n     ��������Ҫ�����¿�����Ʒ��������:");
	SC("%d", &n);
	system("cls");
	PR("\n ��������������������������������������������������������������������������\n");
	for (i = 0; i<n; i++)   /*��ѭ��ʵ������n����Ʒ*/
	{
		PR("\n\t*��������Ʒ�ı��:");
		SC("%ld", &goods[i].num);
		PR("\n\t ��������Ʒ������:");
		SC("%s", goods[i].name);
		PR("\n\t ��������Ʒ������:");
		SC("%s", goods[i].sort);
		PR("\n\t ��������Ʒ������:");
		SC("%d", &goods[i].count);
		PR("\n\t ��������Ʒ�ĵ���:");
		SC("%d", &goods[i].price);
		PR("\n ��������������������������������������������������������������������������\n");
	}
	PR("\tPlease press any key to continue:");
	getch();
	return;   /*����������*/
}

void sequence()   /*����2��������Ʒ��Ϣ*/
{
	long temp;
	char p1[30], p2[30];
	for (k = 0; k<n - 1; k++)   /*(1): ���������*/
	for (i = 0; i<n - k - 1; i++)  /*�����ݷ�����*/
	if (goods[i].num>goods[i + 1].num)  /*�������С��������*/
	{
		temp = goods[i].num;
		goods[i].num = goods[i + 1].num;
		goods[i + 1].num = temp;
		strcpy(p1, goods[i].name);
		strcpy(goods[i].name, goods[i + 1].name);
		strcpy(goods[i + 1].name, p1);
		strcpy(p2, goods[i].sort);
		strcpy(goods[i].sort, goods[i + 1].sort);
		strcpy(goods[i + 1].sort, p2);
	}
	PR("--------------------------------------------------------------------------------");
	PR("\n\t\t����Ʒ�����������Ʒ��Ϣ\n\n");
	PR("\t��Ʒ���     ��Ʒ����     ��Ʒ���      ��Ʒ����      ��Ʒ����\n");   /*����������Ʒ��Ϣ*/
	for (i = 0; i<n; i++)
	{
		PR("\t %5ld       %5s       %5s        %5ld        %5ld\n", goods[i].num, goods[i].name, goods[i].sort, goods[i].count, goods[i].price);
	}

	for (k = 0; k<n - 1; k++)   /*(2): ����Ʒ��������*/
	for (i = 0; i<n - k - 1; i++)
	if (strcmp(goods[i].name, goods[i + 1].name)>0)
	{
		strcpy(p1, goods[i].name);
		strcpy(goods[i].name, goods[i + 1].name);
		strcpy(goods[i + 1].name, p1);
		temp = goods[i].num;
		goods[i].num = goods[i + 1].num;
		goods[i + 1].num = temp;
		strcpy(p2, goods[i].sort);
		strcpy(goods[i].sort, goods[i + 1].sort);
		strcpy(goods[i + 1].sort, p2);
	}
	PR("--------------------------------------------------------------------------------");
	PR("\n\t\t����Ʒ������������Ʒ��Ϣ\n");
	PR("\n\t��Ʒ����     ��Ʒ���     ��Ʒ���      ��Ʒ����      ��Ʒ����\n");    /*����������Ʒ��Ϣ*/
	for (i = 0; i<n; i++)
	{
		PR("\t %5s       %5ld       %5s        %5ld        %5ld\n", goods[i].name, goods[i].num, goods[i].sort, goods[i].count, goods[i].price);
	}

	for (k = 0; k<n - 1; k++)    /*(3): ����Ʒ�������*/
	for (i = 0; i<n - k - 1; i++)   /*�����ݷ�����*/
	if (strcmp(goods[i].sort, goods[i + 1].sort)>0)
	{
		strcpy(p2, goods[i].sort);
		strcpy(goods[i].sort, goods[i + 1].sort);
		strcpy(goods[i + 1].sort, p2);
		temp = goods[i].num;
		goods[i].num = goods[i + 1].num;
		goods[i + 1].num = temp;
		strcpy(p1, goods[i].name);
		strcpy(goods[i].name, goods[i + 1].name);
		strcpy(goods[i + 1].name, p1);
	}
	PR("--------------------------------------------------------------------------------");
	PR("\n\t\t����Ʒ�����������Ʒ��Ϣ\n\n");
	PR("\t��Ʒ���     ��Ʒ���     ��Ʒ����      ��Ʒ����      ��Ʒ����\n");    /*����������Ʒ��Ϣ*/
	for (i = 0; i<n; i++)
	{
		PR("\t %5s       %5ld       %5s        %5ld        %5ld\n", goods[i].sort, goods[i].num, goods[i].name, goods[i].count, goods[i].price);
	}
	PR("--------------------------------------------------------------------------------");
	PR("please press any key to continue:");
	getch();
	return;   /*����������*/
}

void purchase()  /*����3��������Ʒ��Ϣ*/
{
	long temp;    /*������ʱ������ʾ�ս�������Ʒ���*/
	int j;
	PR("\n\t\5������ս�������Ʒ���:");
	SC("%ld", &temp);
	PR("\n\t\5������ս�������Ʒ����:");
	SC("%d", &j);
	PR("\n\n\n\tpress any key to contiue:");
	getch();
	system("cls");
	PR("\n\t������������Ʒ��Ϣ��");
	for (i = 0; i<n; i++)    /*ѭ����Ѱ���������ͬ����Ʒ��Ϣ*/
	if (temp == goods[i].num)
		goods[i].count = goods[i].count + j;  /*�Զ�������Ʒ����*/
	PR("\n\t��Ʒ���    ��Ʒ��    ��Ʒ���    ��Ʒ����    ��Ʒ�۸�");
	for (i = 0; i<n; i++)     /*ѭ����������������Ʒ��Ϣ*/
	{
		PR("\n\t  %4ld      %4s       %4s        %ld       %4ld", goods[i].num, goods[i].name, goods[i].sort, goods[i].count, goods[i].price);
	}
	PR("\n\n\t\tPress any key to enter menu:");
	getch();  /*���ع���ѡ�����*/
	return;
}

void sell()  /*����4��������Ʒ��Ϣ*/
{
	long temp;    /*������ʱ����temp��ʾ�����۵���Ʒ���*/
	int j;
	PR("\n\t\5����������۵���Ʒ���:");
	SC("%ld", &temp);
	PR("\n\t\5����������۵���Ʒ����:");
	SC("%d", &j);
	for (i = 0; i<n; i++)  /*ѭ�����ҵ������۵���Ʒ��Ϣ*/
	{
		if (temp == goods[i].num)
		{
			for (; j>goods[i].count;)   /*������۶���ڿ����������ִ�����ʾ*/
			{
				PR("\n\t�۳�����������Ʒԭ�����������ִ�������������:");
				SC("%d", &j);
			}
			goods[i].count = goods[i].count - j;   /*����Զ�������Ʒ�����Ĺ���*/
		}
	}
	PR("\n\tpress any key to contiue:");
	getch();
	system("cls");   /*����*/
	PR("\n\n     *���ۺ���Ʒ��Ϣ��");
	PR("\n\t��Ʒ���     ��Ʒ���     ��Ʒ����      ��Ʒ����      ��Ʒ����\n");
	for (i = 0; i<n; i++)      /*ѭ����������ۺ���Ʒ��Ϣ*/
	{
		PR("\t %4s       %4ld        %4s          %4ld          %4ld\n", goods[i].sort, goods[i].num, goods[i].name, goods[i].count, goods[i].price);
	}
	PR("\n\tPress any key to enter menu:");
	getch();
	return;    /*���ع���ѡ�����*/
}

void edit()  /*����5����ӻ�ɾ����Ʒ��Ϣ*/
{
	void add(); /*�����Ӻ���*/
	void dele();
	PR("\n\t��ѡ��1.�����Ʒ��Ϣ��    2.ɾ����Ʒ��Ϣ��");
	PR("\t*������ 1��2 ������");
	SC("%d", &k);
	switch (k)  /*��switch���ʵ�ֹ���ѡ��*/
	{
	case 1: add(); break;
	case 2: dele(); break;
	}
	getch();
	return;  /*�������˵�*/
}

void add()  /*�����Ʒ��Ϣ*/
{            /*�����Ӻ���*/
	PR("\t*�������������Ʒ����Ʒ���:");
	SC("%ld", &goods[n].num);
	PR("\n\t�������������Ʒ������:");
	SC("%s", goods[n].name);
	PR("\n\t�������������Ʒ�����:");
	SC("%s", goods[n].sort);
	PR("\n\t�������������Ʒ������:");
	SC("%d", &goods[n].count);
	PR("\n\t�������������Ʒ�ļ۸�:");
	SC("%d", &goods[n].price);
	n = n + 1;
	PR("\n");
}
void dele()  /*ɾ����Ʒ��Ϣ*/
{             /*�����Ӻ���*/
	int temp; /*����ֲ�����*/
	int j;
	for (i = 0; i<n; i++)
	{
		PR("\n\t��Ʒ���    ��Ʒ��    ��Ʒ���    ��Ʒ����    ��Ʒ�۸�");
		PR("\n\t  %5ld      %5s        %5s         %5ld        %5ld", goods[i].num, goods[i].name, goods[i].sort, goods[i].count, goods[i].price);
		PR("\n");
	}
	PR("\n");
	PR("\n*������Ҫɾ������Ʒ���:");
	SC("%ld", &temp);
	PR("\n\n");
	for (i = 0; i<n; i++)
	{
		if (temp == goods[i].num)
		{
			for (j = i; j<n; j++)
			{
				goods[j].num = goods[j + 1].num;
				strcpy(goods[j].name, goods[j + 1].name);
				strcpy(goods[j].sort, goods[j + 1].sort);
				goods[j].count = goods[j + 1].count;
				goods[j].price = goods[j + 1].price;
			}
			n = n - 1;   /*��Ʒ�ܿ��������*/
		}
	}
	for (i = 0; i<n; i++)
	{
		PR("\n\t��Ʒ���    ��Ʒ��    ��Ʒ���    ��Ʒ����    ��Ʒ�۸�");   /*���ɾ�������Ʒ��Ϣ*/
		PR("\n\t  %5ld      %5s        %5s         %5ld        %5ld", goods[i].num, goods[i].name, goods[i].sort, goods[i].count, goods[i].price);
		PR("\n");
	}
	PR("Please press any key to continue:");
	getch();
	return;    /*����������*/
}

void correct()  /*����6���޸���Ʒ��Ϣ*/
{
	long temp;  /*����ֲ�����*/
	PR("\n\t������Ҫ�޸ĵ���Ʒ�ı��:");
	SC("%ld", &temp);   /*�����µ���Ʒ��Ϣ*/
	PR("\n");
	for (i = 0; i<n; i++)   /*�����µ���Ʒ��Ϣ*/
	{
		if (temp == goods[i].num)
		{
			PR("\t������һ���µĵ���Ʒ���:");
			SC("%ld", &goods[i].num);
			PR("\n\t�������µ���Ʒ������:");
			SC("%s", goods[i].name);
			PR("\n\t�������µ���Ʒ�����:");
			SC("%s", goods[i].sort);
			PR("\n\t�������µ���Ʒ������:");
			SC("%d", &goods[i].count);
			PR("\n\t�������µ���Ʒ�۸�:");
			SC("%d", &goods[i].price);
			PR("\n");
		}
	}
	for (i = 0; i<n; i++)
	{
		PR("\n\t�µ���Ʒ����     ��Ʒ���     ��Ʒ���      ��Ʒ����      ��Ʒ����\n");
		PR("\t   %4s             %4ld         %4s            %4ld         %4ld", goods[i].name, goods[i].num, goods[i].sort, goods[i].count, goods[i].price);
		PR("\n");
	}
	PR("Please press any key to continue:");  /*���ع���ѡ�����*/
	getch();
	return;   /*�������˵�*/
}

void search()  /*����7����ѯ��Ʒ��Ϣ*/
{
	int k;   /*����ֲ�����*/
	long temp1;
	char temp2[30], temp3[20];
	PR("\n\t\5����Ʒ��Ų�ѯ,�밴1\t\t\t\5����Ʒ����ѯ,�밴2\n\t\5����Ʒ����ѯ,�밴3\t\t\t\5����Ҫ��������Ʒ,�밴4\n");
	PR("\n\n\n\t\t\t����������ȷ����ѯ��ʽ:");
	SC("%d", &k);
	PR("\n");
	PR("Press any key to continue:");
	getch();
	system("cls");
	switch (k)   /*ʵ�ֲ�ѯ��ʽ��ѡ��*/
	{
	case 1:
	{ PR("\n\n\n\n\n\t\t������Ҫ��ѯ����Ʒ�ı��:");  /*����Ʒ��Ų�ѯ*/
	SC("%ld", &temp1);
	system("cls");  /*����*/
	for (i = 0; i<n; i++)
	{
		if (temp1 == goods[i].num)
		{
			PR("\n");
			PR("\n\t��Ʒ���    ��Ʒ��    ��Ʒ���    ��Ʒ����    ��Ʒ�۸�");
			PR("\n\t  %5ld      %5s        %5s       %5ld      %5ld", goods[i].num, goods[i].name, goods[i].sort, goods[i].count, goods[i].price);
		}
	}
	}break;  /*����switch���*/
	case 2:
	{ PR("\n\n\n\n\n\t\t������Ҫ��ѯ����Ʒ��:");  /*����Ʒ����ѯ����*/
	SC("%s", temp2);
	system("cls");
	for (i = 0; i<n; i++)
	{
		if (strcmp(temp2, goods[i].name) == 0)
		{
			PR("\n");
			PR("\n\t��Ʒ���    ��Ʒ��    ��Ʒ���    ��Ʒ����    ��Ʒ�۸�");
			PR("\n\t  %5ld      %5s       %5s       %5ld       %5ld", goods[i].num, goods[i].name, goods[i].sort, goods[i].count, goods[i].price);
		}
	}
	}break;  /*����switch���*/
	case 3:
	{ PR("\n\n\n\n\n\t\t������Ҫ��ѯ����Ʒ���:");   /*����Ʒ����ѯ����*/
	SC("%s", temp3);
	system("cls");
	for (i = 0; i<n; i++)
	{
		if (strcmp(temp3, goods[i].sort) == 0)
		{
			PR("\n");
			PR("\n\t��Ʒ���    ��Ʒ��    ��Ʒ���    ��Ʒ����    ��Ʒ�۸�");
			PR("\n\t  %5ld      %5s       %5s       %5ld       %5ld", goods[i].num, goods[i].name, goods[i].sort, goods[i].count, goods[i].price);
		}
	}
	}break;  /*����switch���*/
	case 4:
	{ int a = 50;
	for (i = 0; i<n; i++)  /*��ѯ��Ҫ��������Ʒ��*/
	{
		if (goods[i].count<a)
			PR("\n\t\t\4��Ҫ��������Ʒ��:%s    ���п������%ld\n", goods[i].name, goods[i].count);
	}
	}break; /*����switch���*/
	}
	PR("\n\n\t\tPress any key to enter menu:");
	getch();
	return;  /*����������*/
}

void scan()   /*����8�������Ʒ��Ϣ*/
{
	PR("\n\t����������Ʒ��Ϣ,�밴1\n\n\t�����ѯ����Ʒ��Ϣ,�밴2\n\n\t����������Ʒ��Ϣ,�밴3\n");
	PR("��ѡ��");
	SC("%d", &k);
	switch (k)
	{
	case 1:
	{ PR("\t\t\t����������Ʒ��Ϣ\n");
	PR("\t��Ʒ���    ��Ʒ��    ��Ʒ���    ��Ʒ����    ��Ʒ�۸�\n");/*��������Ʒ��Ϣ*/
	for (i = 0; i<n; i++)
	{
		PR("\t%5ld     %5s      %5s        %5ld         %ld", goods[i].num, goods[i].name, goods[i].sort, goods[i].count, goods[i].price);
		PR("\n");
	}
	PR("Press any key to enter menu:");
	getch();
	return;
	} break;  /*����switch���*/
	case 2:
	{ PR("\t\t\t�����ѯ����Ʒ��Ϣ\n");
	PR("\t��Ʒ���    ��Ʒ��    ��Ʒ���    ��Ʒ����    ��Ʒ�۸�\n");/*��������Ʒ��Ϣ*/
	for (i = 0; i<n; i++)
	{
		PR("\t%5ld     %5s      %5s        %5ld         %ld", goods[i].num, goods[i].name, goods[i].sort, goods[i].count, goods[i].price);
		PR("\n");
	}
	PR("\nPress any key to enter menu:");
	getch();
	return;
	} break;  /*����switch���*/
	case 3:
	{ PR("\t\t\t�������Ʒ����������Ʒ��Ϣ\n");
	PR("\t��Ʒ���    ��Ʒ��    ��Ʒ���    ��Ʒ����    ��Ʒ�۸�\n");/*��������Ʒ��Ϣ*/
	for (i = 0; i<n; i++)
	{
		PR("\t%5ld     %5s      %5s        %5ld         %ld", goods[i].num, goods[i].name, goods[i].sort, goods[i].count, goods[i].price);
		PR("\n");
	}
	PR("\nPress any key to enter menu:");
	getch();
	return;   /*����������*/
	} break;  /*����switch���*/
	}
}

void reserve()  /*����9�������ļ�*/
{
	FILE *fp;
	char file[15];      /*��������ļ�����·���Լ��ļ���*/
	system("cls");     /*����*/
	PR("\n\t*�������ļ�·�����ļ���:");
	SC("%s", file);
	fp = fopen("file", "w+");   /*��������һ���ļ������õ����ļ��ĵ�ַ*/
	fprintf(fp, "��Ʒ���\t��Ʒ�� \t��Ʒ���\t��Ʒ����\t��Ʒ�۸�\n");
	PR("��Ʒ���\t��Ʒ�� \t ��Ʒ���\t  ��Ʒ����\t  ��Ʒ�۸�\n");
	for (i = 0; i<n; i++)
	{
		fprintf(fp, "%ld\t\t%s\t\t%s\t\t%d\t\t%d\n", goods[i].num, goods[i].name, goods[i].sort, goods[i].count, goods[i].price);
		PR("%ld\t\t%s\t\t%s\t\t%d\t\t%d\n", goods[i].num, goods[i].name, goods[i].sort, goods[i].count, goods[i].price);
	}
	fclose(fp);      /*�ر��ļ�*/
	PR("�ļ��Ѿ�����!\n");
	getch();
	system("cls");   /*����*/
}
void quit()    /*�˳�ϵͳ*/
{
	exit(0);
}