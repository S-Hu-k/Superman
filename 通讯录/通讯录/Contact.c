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
		printf("通讯录已满,无法添加\n");
		return;
	}
	//录入信息
	printf("请输入名字;>");
	scanf("%s", pcon->date[pcon->sz].name);
	printf("请输入年龄;>");
	scanf("%s", &(pcon->date[pcon->sz].age));
	printf("请输入性别;>");
	scanf("%s", pcon->date[pcon->sz].sex);
	printf("请输入电话;>");
	scanf("%s", pcon->date[pcon->sz].tel);
	printf("请输入地址;>");
	scanf("%s", pcon->date[pcon->sz].addr);

	pcon->sz++;
	printf("增加成功\n");
}
void ShowContact(const Contact* pcon)
{
	int i = 0;
	assert(pcon);
	printf("%10s\t%5s\t%5s\t%12s\t%20s\n", "名字", "年龄", "性别", "电话", "地址");
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
	//找不到
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
		printf("通讯录已空,无法删除\n");
		return;
	}
	//删除
	printf("请输入要删除人的名字:>");
	scanf("%s", name);
	pos=FindByName(pcon, name);
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}
	//移除
	for (i = pos; i <pcon->sz ; i++)
	{
		pcon->date[i] = pcon->date[i + 1];
	}
	pcon->sz--;
	printf("删除成功\n");
}

