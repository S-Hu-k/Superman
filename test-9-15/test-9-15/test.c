//public static void rotateWord(char[] chas)
//{ 
//	if (chas == null || chas.length == 0)
//	{
//		return; 
//	}	
//	int l = -1;	
//	int r = -1;	
//	for (int i = 0; i < chas.length; i++)
//	{ 
//		if (chas[i] != ' ')
//		{ 
//			
//			l = i == 0 || chas[i - 1] == ' ' ? i : l;		
//			r = i == chas.length - 1 || chas[i + 1] == ' ' ? i : r; 
//		}
//		if (l != -1 && r != -1){ reverse(chas, l, r);		
//		l = -1;		
//		r = -1; 
//		} 
//	}
//} 
//public static void reverse(char[] chas, int start, int end)
//{ 
//	char tmp = 0;	
//	while (start < end){ tmp = chas[start];	
//	chas[start] = chas[end];		
//	chas[end] = tmp;		start++;	
//	end--; 
//	}
//} 
//public static void rotate1(char[] chas, int size)
//{	
//	//�ֱ�����	
//	if(chas == null || size <= 0 || size >= chas.length)
//	{		
//		return;
//	}	
//	reverse(chas, 0, size - 1);
//	reverse(chas, size, chas.length - 1);
//	reverse(chas, 0, chas.length - 1);
//} 
//public static void rotate2(char[] chas, int size)
//{	
//	if(chas == null || size <= 0 || size >= chas.length)
//	{		
//		return;	
//	}	
//	int start = 0;
//	int end = chas.length - 1;
//	int lpart = size;	
//	int rpart = chas.length - size;	
//	int s = Math.min(lpart, rpart);
//	int d = lpart - rpart;	
//	while(true)
//	{		
//		exchange(chas, start, end, s);	
//		if(d == 0)
//		{			
//			break;	
//		}
//		else if(d > 0)
//		{			
//			start += s;	
//			lpart = d;		
//		}
//		else
//		{		
//			end -= s;	
//			rpart = -d;		
//		}		
//		s = Math.min(lpart, rpart);	
//		d = lpart - rpart;	
//	}
//} 
//public static void exchange(char[] chas, int start, int end, int size)
//{	
//	int i = end - size + 1;
//	char tmp = 0;	
//	while(size-- != 0)
//	{		
//		tmp = chas[start];	
//		chas[start] = chas[i];	
//		chas[i] = tmp;		
//		start++;		
//		i++;	
//	}
//}
//һ��������ֻ�����������ǳ���һ�Σ� �����������ֶ����������Ρ� �ҳ�������ֻ����һ�ε�����
//#include<stdio.h>
//#include<stdlib.h>
//int fun(int* p, int L) {
//	int m;
//	int count = 0;
//	for (int i = 0; i < L; ++i) {
//		for (int j = 0; j < L; ++j) {
//			if (j == i) {
//				continue;
//			}
//			for (m = 0; m < 32; ++m) {
//				if (((p[i] >> m) & 1) ^ ((p[j] >> m) & 1)) {
//					break;
//				}
//			}
//			if (m == 32) {//˵����һ�����Ͱ�arr[i]��ͬ,������ѭ�������ж���һ����
//				break;
//			}
//			if (j == L - 1) {
//				++count;
//				printf("%d\t", p[i]);
//			}
//		}
//	}
//	return count;
//}
//void main() {
//	int arr[] = { 1, 2, 3, 4, 1, 9, 11, 2, 3, 4, 5, 5 };
//	int L = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < L; ++i) {
//		printf("%d  ", arr[i]);
//	}
//	printf("\n");
//	printf("\nֻ����һ�ε�����%d��\n", fun(arr, L));
//	system("pause");
//}
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
////len�ɲ��ɲ������ݣ�����Left���������//
//void Left(char c[], int len, int k)
////����1//
//{
//	//      
//	k = k%len;//����5���ַ����ַ���������3�κ�����8�ν��һ��//	
//	int j = 0;//	
//	for (j=0; j<k; j++)//	
//	{//		
//		int i = 0;//		
//		char tmp = c[0];//		
//		for (i=0; i<len-1; i++)//		
//		{//			
//			c[i] = c[i+1];//		
//		}//		
//		c[i] = tmp;//	
//	}//
//}  //
//void Reverse(char *start, char *end)//
//{//	
//	while (start<end)//	
//	{//		
//		*start ^= *end;//		
//		*end ^= *start;//	
//		*start ^= *end;//	
//		start++;//		
//		end--;//
//	}//
//}////
//void Left(char c[], int len , int k)//
//{//
//	k = k%len;//	
//	Reverse(c, c+k-1);//	
//	Reverse(c+k, c+len-1);//	
//	Reverse(c, c+len-1);//
//}  
void Left(char c[], int len , int k)
{	
	k = k%len;	
	char *p = (char *)malloc((2*len+1)*sizeof(char));
	strcpy(p, c);	strcat(p, c);	
	strncpy(c, p+k, len);	
	free(p);
} 
int main()
{	
	char c[] = "ABCDE";	
	int k = 2;	
	int len = strlen(c);
	printf("����ǰ��%s\n", c); 
	Left(c,len,k);	
	printf("������%s\n", c);
	system("pause");
	return 0;
}
