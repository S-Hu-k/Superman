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
	printf("\n\t\t\t\t请输入密码:");

	gets(b);
	if (strcmp(a, b) == 0)
		printf("\n\n\t\t\t\t登陆成功\n\n\t\t\t按任意键进入...");
	else
	{
		printf("\n\n\n\t\t\t密码错误！\n\n\t\t\t");

		goto ks;
	}
lp: for (i = 0; i<1; i++)
	PR("\n\n--★-☆--★-☆--☆-★--☆-★--☆-☆--★-\n");
	PR("\n\t\t\t    商品信息管理系统\t\n\n");
	PR("\t  1 →输入商品信息\n\n");
	PR("\t  2 →排序商品信息\n\n");
	PR("\t  3 →输入进货信息\t\t6 →修改商品信息\n\n");
	PR("\t  4 →输入销售信息\t\t7 →查询商品信息\n\n");
	PR("\t  5 →增加/删除商品\t\t8 →浏览商品信息\n\n");
	PR("\t\t\t\t\t9 →保存商品信息\n\n");
	PR(" \t\t  --☆-★--☆-★--☆-☆--★-☆--★-☆--★-");/*菜单选择界面*/
	PR("\n\n");
	PR("\t请选择您所要的操作(或选择(0)退出):");
	SC("%d", &k);
	system("cls");
	switch (k)  /*用switch语句实现功能选择*/
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
	case 0: PR("\n\n\t        / / / / /  ^_^  \\ \\ \\ \\ \\ \n\n\t…………谢谢使用，欢迎再来，再见O(∩_∩)O…………"); exit(0);  /*退出系统*/
	default: puts("输入错误,请按任意健返回主菜单：\n"); break;
	}
	system("cls");   /*清屏*/
	goto lp;  /*返回主界面*/
}

void input()  /*功能1：输入商品信息*/
{
	PR("\n     请输入需要建立新库存的商品种类数量:");
	SC("%d", &n);
	system("cls");
	PR("\n …………………………………………………………………………………………………\n");
	for (i = 0; i<n; i++)   /*用循环实现输入n个商品*/
	{
		PR("\n\t*请输入商品的编号:");
		SC("%ld", &goods[i].num);
		PR("\n\t 请输入商品的名称:");
		SC("%s", goods[i].name);
		PR("\n\t 请输入商品的种类:");
		SC("%s", goods[i].sort);
		PR("\n\t 请输入商品的数量:");
		SC("%d", &goods[i].count);
		PR("\n\t 请输入商品的单价:");
		SC("%d", &goods[i].price);
		PR("\n …………………………………………………………………………………………………\n");
	}
	PR("\tPlease press any key to continue:");
	getch();
	return;   /*返回主界面*/
}

void sequence()   /*功能2：排序商品信息*/
{
	long temp;
	char p1[30], p2[30];
	for (k = 0; k<n - 1; k++)   /*(1): 按编号排序*/
	for (i = 0; i<n - k - 1; i++)  /*用起泡法排序*/
	if (goods[i].num>goods[i + 1].num)  /*按编号由小到大排序*/
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
	PR("\n\t\t按商品编号排序后的商品信息\n\n");
	PR("\t商品编号     商品名称     商品类别      商品数量      商品单价\n");   /*输出排序后商品信息*/
	for (i = 0; i<n; i++)
	{
		PR("\t %5ld       %5s       %5s        %5ld        %5ld\n", goods[i].num, goods[i].name, goods[i].sort, goods[i].count, goods[i].price);
	}

	for (k = 0; k<n - 1; k++)   /*(2): 按商品名称排序*/
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
	PR("\n\t\t按商品名称排序后的商品信息\n");
	PR("\n\t商品名称     商品编号     商品类别      商品数量      商品单价\n");    /*输出排序后商品信息*/
	for (i = 0; i<n; i++)
	{
		PR("\t %5s       %5ld       %5s        %5ld        %5ld\n", goods[i].name, goods[i].num, goods[i].sort, goods[i].count, goods[i].price);
	}

	for (k = 0; k<n - 1; k++)    /*(3): 按商品类别排序*/
	for (i = 0; i<n - k - 1; i++)   /*用起泡法排序*/
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
	PR("\n\t\t按商品类别排序后的商品信息\n\n");
	PR("\t商品类别     商品编号     商品名称      商品数量      商品单价\n");    /*输出排序后商品信息*/
	for (i = 0; i<n; i++)
	{
		PR("\t %5s       %5ld       %5s        %5ld        %5ld\n", goods[i].sort, goods[i].num, goods[i].name, goods[i].count, goods[i].price);
	}
	PR("--------------------------------------------------------------------------------");
	PR("please press any key to continue:");
	getch();
	return;   /*返回主界面*/
}

void purchase()  /*功能3：进货商品信息*/
{
	long temp;    /*定义临时变量表示刚进货的商品编号*/
	int j;
	PR("\n\t\5请输入刚进货的商品编号:");
	SC("%ld", &temp);
	PR("\n\t\5请输入刚进货的商品数量:");
	SC("%d", &j);
	PR("\n\n\n\tpress any key to contiue:");
	getch();
	system("cls");
	PR("\n\t输出进货后的商品信息：");
	for (i = 0; i<n; i++)    /*循环，寻找与进货相同的商品信息*/
	if (temp == goods[i].num)
		goods[i].count = goods[i].count + j;  /*自动更改商品数量*/
	PR("\n\t商品编号    商品名    商品类别    商品数量    商品价格");
	for (i = 0; i<n; i++)     /*循环，输出进货后的商品信息*/
	{
		PR("\n\t  %4ld      %4s       %4s        %ld       %4ld", goods[i].num, goods[i].name, goods[i].sort, goods[i].count, goods[i].price);
	}
	PR("\n\n\t\tPress any key to enter menu:");
	getch();  /*返回功能选择界面*/
	return;
}

void sell()  /*功能4：销售商品信息*/
{
	long temp;    /*定义临时变量temp表示刚销售的商品编号*/
	int j;
	PR("\n\t\5请输入刚销售的商品编号:");
	SC("%ld", &temp);
	PR("\n\t\5请输入刚销售的商品数量:");
	SC("%d", &j);
	for (i = 0; i<n; i++)  /*循环，找到刚销售的商品信息*/
	{
		if (temp == goods[i].num)
		{
			for (; j>goods[i].count;)   /*如果销售额大于库存量，则出现错误提示*/
			{
				PR("\n\t售出数量大于商品原有数量，出现错误，请重新输入:");
				SC("%d", &j);
			}
			goods[i].count = goods[i].count - j;   /*完成自动更改商品数量的功能*/
		}
	}
	PR("\n\tpress any key to contiue:");
	getch();
	system("cls");   /*清屏*/
	PR("\n\n     *销售后商品信息：");
	PR("\n\t商品类别     商品编号     商品名称      商品数量      商品单价\n");
	for (i = 0; i<n; i++)      /*循环，输出销售后商品信息*/
	{
		PR("\t %4s       %4ld        %4s          %4ld          %4ld\n", goods[i].sort, goods[i].num, goods[i].name, goods[i].count, goods[i].price);
	}
	PR("\n\tPress any key to enter menu:");
	getch();
	return;    /*返回功能选择界面*/
}

void edit()  /*功能5：添加或删除商品信息*/
{
	void add(); /*声明子函数*/
	void dele();
	PR("\n\t请选择：1.添加商品信息；    2.删除商品信息；");
	PR("\t*请输入 1或2 继续：");
	SC("%d", &k);
	switch (k)  /*用switch语句实现功能选择*/
	{
	case 1: add(); break;
	case 2: dele(); break;
	}
	getch();
	return;  /*返回主菜单*/
}

void add()  /*添加商品信息*/
{            /*定义子函数*/
	PR("\t*请输入所添加商品的商品编号:");
	SC("%ld", &goods[n].num);
	PR("\n\t请输入所添加商品的名称:");
	SC("%s", goods[n].name);
	PR("\n\t请输入所添加商品的类别:");
	SC("%s", goods[n].sort);
	PR("\n\t请输入所添加商品的数量:");
	SC("%d", &goods[n].count);
	PR("\n\t请输入所添加商品的价格:");
	SC("%d", &goods[n].price);
	n = n + 1;
	PR("\n");
}
void dele()  /*删除商品信息*/
{             /*定义子函数*/
	int temp; /*定义局部变量*/
	int j;
	for (i = 0; i<n; i++)
	{
		PR("\n\t商品编号    商品名    商品类别    商品数量    商品价格");
		PR("\n\t  %5ld      %5s        %5s         %5ld        %5ld", goods[i].num, goods[i].name, goods[i].sort, goods[i].count, goods[i].price);
		PR("\n");
	}
	PR("\n");
	PR("\n*请输入要删除的商品编号:");
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
			n = n - 1;   /*商品总库存量减少*/
		}
	}
	for (i = 0; i<n; i++)
	{
		PR("\n\t商品编号    商品名    商品类别    商品数量    商品价格");   /*输出删除后的商品信息*/
		PR("\n\t  %5ld      %5s        %5s         %5ld        %5ld", goods[i].num, goods[i].name, goods[i].sort, goods[i].count, goods[i].price);
		PR("\n");
	}
	PR("Please press any key to continue:");
	getch();
	return;    /*返回主界面*/
}

void correct()  /*功能6：修改商品信息*/
{
	long temp;  /*定义局部变量*/
	PR("\n\t请输入要修改的商品的编号:");
	SC("%ld", &temp);   /*输入新的商品信息*/
	PR("\n");
	for (i = 0; i<n; i++)   /*保存新的商品信息*/
	{
		if (temp == goods[i].num)
		{
			PR("\t请输入一个新的的商品编号:");
			SC("%ld", &goods[i].num);
			PR("\n\t请输入新的商品的名称:");
			SC("%s", goods[i].name);
			PR("\n\t请输入新的商品的类别:");
			SC("%s", goods[i].sort);
			PR("\n\t请输入新的商品的数量:");
			SC("%d", &goods[i].count);
			PR("\n\t请输入新的商品价格:");
			SC("%d", &goods[i].price);
			PR("\n");
		}
	}
	for (i = 0; i<n; i++)
	{
		PR("\n\t新的商品名称     商品编号     商品类别      商品数量      商品单价\n");
		PR("\t   %4s             %4ld         %4s            %4ld         %4ld", goods[i].name, goods[i].num, goods[i].sort, goods[i].count, goods[i].price);
		PR("\n");
	}
	PR("Please press any key to continue:");  /*返回功能选择界面*/
	getch();
	return;   /*返回主菜单*/
}

void search()  /*功能7：查询商品信息*/
{
	int k;   /*定义局部变量*/
	long temp1;
	char temp2[30], temp3[20];
	PR("\n\t\5按商品编号查询,请按1\t\t\t\5按商品名查询,请按2\n\t\5按商品类别查询,请按3\t\t\t\5查需要进货的商品,请按4\n");
	PR("\n\n\n\t\t\t请输入数字确定查询方式:");
	SC("%d", &k);
	PR("\n");
	PR("Press any key to continue:");
	getch();
	system("cls");
	switch (k)   /*实现查询方式的选择*/
	{
	case 1:
	{ PR("\n\n\n\n\n\t\t请输入要查询的商品的编号:");  /*按商品编号查询*/
	SC("%ld", &temp1);
	system("cls");  /*清屏*/
	for (i = 0; i<n; i++)
	{
		if (temp1 == goods[i].num)
		{
			PR("\n");
			PR("\n\t商品编号    商品名    商品类别    商品数量    商品价格");
			PR("\n\t  %5ld      %5s        %5s       %5ld      %5ld", goods[i].num, goods[i].name, goods[i].sort, goods[i].count, goods[i].price);
		}
	}
	}break;  /*跳出switch语句*/
	case 2:
	{ PR("\n\n\n\n\n\t\t请输入要查询的商品名:");  /*按商品名查询数据*/
	SC("%s", temp2);
	system("cls");
	for (i = 0; i<n; i++)
	{
		if (strcmp(temp2, goods[i].name) == 0)
		{
			PR("\n");
			PR("\n\t商品编号    商品名    商品类别    商品数量    商品价格");
			PR("\n\t  %5ld      %5s       %5s       %5ld       %5ld", goods[i].num, goods[i].name, goods[i].sort, goods[i].count, goods[i].price);
		}
	}
	}break;  /*跳出switch语句*/
	case 3:
	{ PR("\n\n\n\n\n\t\t请输入要查询的商品类别:");   /*按商品类别查询数据*/
	SC("%s", temp3);
	system("cls");
	for (i = 0; i<n; i++)
	{
		if (strcmp(temp3, goods[i].sort) == 0)
		{
			PR("\n");
			PR("\n\t商品编号    商品名    商品类别    商品数量    商品价格");
			PR("\n\t  %5ld      %5s       %5s       %5ld       %5ld", goods[i].num, goods[i].name, goods[i].sort, goods[i].count, goods[i].price);
		}
	}
	}break;  /*跳出switch语句*/
	case 4:
	{ int a = 50;
	for (i = 0; i<n; i++)  /*查询需要进货的商品名*/
	{
		if (goods[i].count<a)
			PR("\n\t\t\4需要进货的商品名:%s    现有库存量：%ld\n", goods[i].name, goods[i].count);
	}
	}break; /*跳出switch语句*/
	}
	PR("\n\n\t\tPress any key to enter menu:");
	getch();
	return;  /*返回主界面*/
}

void scan()   /*功能8：浏览商品信息*/
{
	PR("\n\t浏览输入的商品信息,请按1\n\n\t浏览查询的商品信息,请按2\n\n\t浏览排序后商品信息,请按3\n");
	PR("请选择：");
	SC("%d", &k);
	switch (k)
	{
	case 1:
	{ PR("\t\t\t浏览输入的商品信息\n");
	PR("\t商品编号    商品名    商品类别    商品数量    商品价格\n");/*输出浏览商品信息*/
	for (i = 0; i<n; i++)
	{
		PR("\t%5ld     %5s      %5s        %5ld         %ld", goods[i].num, goods[i].name, goods[i].sort, goods[i].count, goods[i].price);
		PR("\n");
	}
	PR("Press any key to enter menu:");
	getch();
	return;
	} break;  /*跳出switch语句*/
	case 2:
	{ PR("\t\t\t浏览查询的商品信息\n");
	PR("\t商品编号    商品名    商品类别    商品数量    商品价格\n");/*输出浏览商品信息*/
	for (i = 0; i<n; i++)
	{
		PR("\t%5ld     %5s      %5s        %5ld         %ld", goods[i].num, goods[i].name, goods[i].sort, goods[i].count, goods[i].price);
		PR("\n");
	}
	PR("\nPress any key to enter menu:");
	getch();
	return;
	} break;  /*跳出switch语句*/
	case 3:
	{ PR("\t\t\t浏览按商品编号排序的商品信息\n");
	PR("\t商品编号    商品名    商品类别    商品数量    商品价格\n");/*输出浏览商品信息*/
	for (i = 0; i<n; i++)
	{
		PR("\t%5ld     %5s      %5s        %5ld         %ld", goods[i].num, goods[i].name, goods[i].sort, goods[i].count, goods[i].price);
		PR("\n");
	}
	PR("\nPress any key to enter menu:");
	getch();
	return;   /*返回主界面*/
	} break;  /*跳出switch语句*/
	}
}

void reserve()  /*功能9：保存文件*/
{
	FILE *fp;
	char file[15];      /*用来存放文件保存路径以及文件名*/
	system("cls");     /*清屏*/
	PR("\n\t*请输入文件路径及文件名:");
	SC("%s", file);
	fp = fopen("file", "w+");   /*创建并打开一个文件，并得到该文件的地址*/
	fprintf(fp, "商品编号\t商品名 \t商品类别\t商品数量\t商品价格\n");
	PR("商品编号\t商品名 \t 商品类别\t  商品数量\t  商品价格\n");
	for (i = 0; i<n; i++)
	{
		fprintf(fp, "%ld\t\t%s\t\t%s\t\t%d\t\t%d\n", goods[i].num, goods[i].name, goods[i].sort, goods[i].count, goods[i].price);
		PR("%ld\t\t%s\t\t%s\t\t%d\t\t%d\n", goods[i].num, goods[i].name, goods[i].sort, goods[i].count, goods[i].price);
	}
	fclose(fp);      /*关闭文件*/
	PR("文件已经保存!\n");
	getch();
	system("cls");   /*清屏*/
}
void quit()    /*退出系统*/
{
	exit(0);
}