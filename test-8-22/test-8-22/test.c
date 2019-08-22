#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//1.输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//int find_ch(int n[],int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz-1;++i)
//	{
//		for (j = 0; j < sz - i - 1; ++j)
//		{
//			if (n[j]%2 == 0&&n[j+1]%2!=0)
//			{
//				int tmp = 0;
//				 tmp = n[j];
//				n[j] = n[j + 1];
//				n[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	char n[] = {  3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(n) / sizeof(n[0]);
//	 find_ch(n, sz);
//	int i = 0;
//	for (i = 0; i < sz; ++i)
//	{
//		printf("%d", n[i]);
//	}
//	printf("\n");
//	
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <windows.h>

//void Sort(int num[], int len) 
//{
//	for (int i = 0; i < len - 1; ++i) 
//	{
//		for (int j = 0; j < len - i - 1; ++j) 
//		{
//			if (num[j] % 2 == 0 && num[j + 1] % 2 != 0) 
//			{
//				int tmp = num[j];
//				num[j] = num[j + 1];
//				num[j + 1] = tmp;
//			}
//		}
//	}
//}
////void Sort(int* num, int len) {
////	for (int i = 0; i < len - 1; ++i) {
////		for (int j = 0; j < len - i - 1; ++j) {
////			if (*(num + j) % 2 == 0 && *(num + j + 1) % 2 != 0) {
////				int tmp = *(num + j);
////				*(num + j) = *(num + j + 1);
////				*(num + j + 1) = tmp;
////			}
////		}
////	}
////}
//
//int main() {
//	int num[] = { 1,2,1,5,5,6,5,46,9 };
//	Sort(num, sizeof(num) / sizeof(int));
//	for (int i = 0; i < sizeof(num) / sizeof(int); ++i)
//	{
//		printf("%d ", num[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//
//数组：
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9
int print(int arr[3][4], int x ,int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
}


int main()
{
	char arr[3][4] = { 1, 2, 3, 4, 2, 3, 4, 5, 3, 4, 5 ,6};
	print(arr, 3, 4);
	system("pause");
	return 0;
}