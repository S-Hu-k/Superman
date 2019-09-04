#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stddef.h>
//struct S
//{
//	char a;//0
//	int b;//4
//	char c;//8
//};
//#define OffSetOf(s,m)   ((int) &(((s*)0)->m)))
//int main()
//{
//	printf("%d\n", OffSetOf(struct S, a);
//	printf("%d\n", OffSetOf(struct S, b);
//	printf("%d\n", OffSetOf(struct S, c);
//
//	system("pause");
//	return 0;
//}
//
//struct S
//{
//	char a;//0
//	int b;//4
//	char c;//8
//};
//int main()
//{
//	printf("%d\n", offsetof(struct S, a));
//	printf("%d\n", offsetof(struct S, b));
//	printf("%d\n", offsetof(struct S, c));
//
//	system("pause");
//	return 0;
//}

//
#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"


void InitContact(Contact* pcon)
{
	assert(pcon);
	pcon->sz = 0;
	//memset(pcon->date, 0, sizeof(pcon->date));
	pcon->date = (PeoInfo*)calloc(DEFAULT_SZ, sizeof(PeoInfo));
	if (pcon->date == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	pcon->capacity = DEFAULT_SZ;

}
void DestoryContact(Contact* pcon)
{
	free(pcon->date);
	pcon->date = NULL;
	pcon->capacity = 0;
	pcon->sz = 0;
}
void CheckCapacity(Contact* pcon)
{
	if (pcon->sz == pcon->capacity)
	{
		//����
		PeoInfo* ptr = realloc(pcon->date, (pcon->capacity + 2)*sizeof(PeoInfo));
		if (ptr != NULL)
		{
			pcon->date = ptr;
			pcon->capacity += 2;
			printf("���ݳɹ�\n");
		}
	}
}
void AddContact(Contact* pcon)
{
	assert(pcon);
	CheckCapacity(pcon);
	if (pcon->sz == pcon->capacity)
	{/*
	 printf("ͨѶ¼����,�޷����\n");
	 return;*/

	}
	//¼����Ϣ
	printf("����������;>");
	scanf("%s", pcon->date[pcon->sz].name);
	printf("����������;>");
	scanf("%s", &(pcon->date[pcon->sz].age));
	printf("�������Ա�;>");
	scanf("%s", pcon->date[pcon->sz].sex);
	printf("������绰;>");
	scanf("%s", pcon->date[pcon->sz].tel);
	printf("�������ַ;>");
	scanf("%s", pcon->date[pcon->sz].addr);

	pcon->sz++;
	printf("���ӳɹ�\n");
}
void ShowContact(const Contact* pcon)
{
	int i = 0;
	assert(pcon);
	printf("%10s\t%5s\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < pcon->sz; i++)
	{
		printf("%10s\t%5d\t%5s\t%s12s\t%20s\n", pcon->date[i].name, pcon->date[i].age, pcon->date[i].sex, pcon->date[i].tel, pcon->date[i].addr);
	}

}
static int FindByName(Contact* pcon, char name[])
{
	int i = 0;
	assert(pcon);
	for (i = 0; i < pcon->sz; i++)
	{
		if (0 == strcmp(pcon->date[i].name, name))
		{
			return i;
		}
	}
	//�Ҳ���
	return -1;
}
void DelContact(Contact* pcon)
{
	int i = 0;
	int pos = 0;
	char name[MAX_NAME] = { 0 };
	assert(pcon);
	if (pcon->sz == 0)
	{
		printf("ͨѶ¼�ѿ�,�޷�ɾ��\n");
		return;
	}
	//ɾ��
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	pos = FindByName(pcon, name);
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}
	//�Ƴ�
	for (i = pos; i <pcon->sz; i++)
	{
		pcon->date[i] = pcon->date[i + 1];
	}
	pcon->sz--;
	printf("ɾ���ɹ�\n");
}

