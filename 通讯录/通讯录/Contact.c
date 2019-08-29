#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"


void InitContact(Contact* pcon)
{
	assert(pcon);
	pcon->sz = 0;
	memset(pcon->date, 0, sizeof(pcon->date));

}
void AddContact(Contact* pcon)
{
	assert(pcon);
	if (pcon->sz == MAX)
	{
		printf("ͨѶ¼����,�޷����\n");
		return;
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
	pos=FindByName(pcon, name);
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}
	//�Ƴ�
	for (i = pos; i <pcon->sz ; i++)
	{
		pcon->date[i] = pcon->date[i + 1];
	}
	pcon->sz--;
	printf("ɾ���ɹ�\n");
}

