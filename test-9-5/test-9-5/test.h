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
//创建一个通讯录结构体
//typedef struct Contact
//{
//	PeoInfo date[MAX];//存放联系人信息
//	int sz;//记录已经存放了联系人的个数
//}Contact;
typedef struct Contact
{
	PeoInfo* date;
	int sz;
	int capacity;//容量
}Contact;
void InitContact(Contact* pcon);
void AddContact(Contact* pcon);
void ShowContact(const Contact* pcon);
void DelContact(Contact* pcon);
void DestoryContact(Contact* pcon);
