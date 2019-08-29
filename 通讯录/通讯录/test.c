#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"
//2.实现一个通讯录；
//通讯录可以用来存储1000个人的信息，每个人的信息包括：
//姓名、性别、年龄、电话、住址
//
//提供方法：
//1. 添加联系人信息
//2. 删除指定联系人信息
//3. 查找指定联系人信息
//4. 修改指定联系人信息
//5. 显示所有联系人信息
//6. 清空所有联系人
//7. 以名字排序所有联系人
//8. 保存联系人到文件
//9. 加载联系人
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
	//创建一个通讯录
	 Contact con;
	 //初始化通讯录
	 InitContact(&con);
	do
	{
		menu();
		printf("请输入要选择的项目:>");
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
			printf("退出程序\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
		}

	} while (input);
	return 0;
}