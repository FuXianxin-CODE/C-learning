#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void pr(int n)
{
	if(n/10!=0)
		pr(n / 10);
	printf("%d ", n % 10);
}

int main()
{
	unsigned int num = 0;
	scanf("%d", &num);//1234
	pr(num);
	return 0;
}
//#include<stdio.h>
//#include<math.h>
//
////是素数返回1，不是素数返回0
//int is_prime(int n)
//{
//	int j=0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n%j == 0)
//		{
//			return 0;
//		}
//			
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//
////打印乘法口诀表
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int result = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			result = i * j;
//			printf("%d*%d=%-2d ", i, j, result);
//		}
//		printf("\n");
//			
//	}
//	return 0;
//}

//输出1-100中所有3的倍数
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//}

////计算1！+2！+3！+4！+5！+6！+7！+8！+9！+10！
//int jiechen(int a)
//{
//	int result = 1;
//	int i = 1;
//	if (a == 0)
//	{
//		result = 1;
//		return result;
//	}
//	while (i <= a)
//	{
//		result = result * i;
//		i++;
//	}
//	return result;
//}
//
//int main()
//{
//	int b = 10;
//	int fin = 0;
//	for (int j = 1; j <= 10; j++)
//	{
//		fin = fin + jiechen(j);
//	}
//	printf("1！+2！+3！+4！+5！+6！+7！+8！+9！+10！=%d", fin);
//	return 0;
//}
//计算n的阶乘
//int main()
//{
//	int n;
//	int result = 1;
//	int i = 1;
//	scanf("%d", &n);
//	if (n == 0)
//	{
//		result = 1;
//		printf("%d的阶乘为%d\n", n, result);
//			return 0;
//	}
//	while (i <= n)
//	{
//		result = result * i;
//		i++;
//	}
//	printf("%d的阶乘为%d\n", n, result);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int i ;
//	printf("1-100之间的所有奇数为:\n");
//	for (i = 1;i <= 100 ;i++ )
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//
//int main()
//{
//
//	printf("%d\n", sizeof(char *));
//	printf("%d\n", sizeof(short *));
//	printf("%d\n", sizeof(int *));
//	printf("%d\n", sizeof(double *));
//	return 0;
//}
//int main()
//{
//	/*printf("你好，世界\n");
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));*/
//	
//	/*int num1, num2;
//	scanf("%d%d",&num1 ,&num2 );
//	int sum;
//	sum = num1 + num2;
//	printf("sum=%d", sum);
//	return 0;*/
//
//	char arr[] = "abc";
//	char arr2[] = { 'a','b','c','\0' };
//	printf("%s\n", arr);
//	printf("%s\n", arr2);
//	return 0;
//}
