#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#include<errno.h>

#define DEFAULT_SZ 3
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TEL 20
#define MAX_AGE 20
#define MAX_ADDR 20
#define MAX 1000
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	CHANGE,
	SHOW,
	SORT
};
typedef struct PeoInfo
{
	char name[MAX_NAME];
	short sex[MAX_SEX];
	char age;
	char tel[MAX_TEL];
	char addr[MAX_ADDR];
}PeoInfo;
//����һ��ͨѶ¼�ṹ��
//typedef struct Contact
//{
//	PeoInfo date[MAX];//�����ϵ����Ϣ
//	int sz;//��¼�Ѿ��������ϵ�˵ĸ���
//}Contact;
typedef struct Contact
{
	PeoInfo* date;
	int sz;
	int capacity;//����
}Contact;
void InitContact(Contact* pcon);
void AddContact(Contact* pcon);
void ShowContact(const Contact* pcon);
void DelContact(Contact* pcon);
void DestoryContact(Contact* pcon);
