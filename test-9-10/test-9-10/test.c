//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>

//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
//

//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
//
//double Pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1.0;
//	}
//	else if (k > 0)
//	{
//		return 1.0*n*Pow(n, k - 1);
//	}
//	else
//	{
//		return 1.0 / Pow(n, -k);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("������Ҫ�������:>");
//	scanf("%d%d", &n, &k);
//	
//	double ret = Pow(n, k);
//	printf("%lf", ret);
//	system("pause");
//	return 0;
//}
//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//
//int DigitSum(int n)
//{
//	if (n < 9)
//	{
//		return n;
//	}
//	else
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//}
//int main()
//{
//
//	int input = 0;
//	printf("������Ҫ�������:>");
//	scanf("%d", &input);
//	int ret = 0;
//
//	ret = DigitSum(input);
//	printf("%d", ret);
//	
//	system("pause");
//	return 0;
//}
//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//
//#include<assert.h>
//int my_strlen(const char* p)
//{
//	assert(p);
//	int count = 0;
//	while (*p++)
//	{
//		count++;
//	}
//	return count;
//}
//void reverse_string(char* str)
//{
//	
//	int len = my_strlen(str);
//	assert(str);
//	int tmp = 0;
//	char*left = str;
//	char*right = len + str - 1;
//	while (left < right)
//	{
//		 tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//			right--;
//	}
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//�ݹ�
//#include<assert.h>
//
//int my_strlen(const char* p)
//{
//	assert(p);
//	int count = 0;
//	while (*p++)
//	{
//		count++;
//	}
//	return count;
//}
//void reverse_string(char* str)
//{
//	int len = my_strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) >= 2)
//		reverse_string(str + 1);
//		*(str + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = { "abcdef" };
//	reverse_string(arr);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
