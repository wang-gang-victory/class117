#define _CRT_SECURE_NO_WARNINGS 1

//输入一个数，判断是否为奇数
//
//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//	{
//		printf("num为%d,为奇数\n",num);
//	}
//	else 
//	{
//		printf("num为%d,为偶数\n", num);
//	}
//	return 0;
//}

//输入一个年龄大于等于18输出陈成年，否则输出未成年

//#include <stdio.h>
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("成年\n");
//	}
//	else 
//	{
//		printf("未成年\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("成年了\n");
//		printf("可以谈恋爱了\n");
//	}
//	else
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	return 0;
//}

//嵌套if

//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num == 0)
//	{
//		printf("输入的数字是0\n");
//	}
//	else if (num > 0)
//	{
//		printf("输入的数字是正数\n");
//	}
//	else
//	{
//		printf("输入的数字是负数\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num == 0)
//	{
//		printf("输入的数字是0\n");
//	}
//	else
//	{
//		if (num > 0)
//		{
//			printf("输入的数字是正数\n");
//		}
//		else
//		{
//			printf("输入的数字是负数\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("少年\n");
//	}
//	else if (age <= 44)
//	{
//		printf("青年\n");
//	}
//	else if (age <= 59)
//	{
//		printf("中老年\n");
//	}
//	else if (age < 89)
//	{
//		printf("老年\n");
//	}
//	else
//	{
//		printf("老寿星\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("少年\n");
//	}
//	else
//	{
//		if (age <= 44)
//		{
//			printf("青年\n");
//		}
//		else
//		{
//			if (age <= 59)
//			{
//				printf("中老年\n");
//			}
//			else
//			{
//				if (age <= 89)
//				{
//					printf("老年\n");
//				}
//				else
//				{
//					printf("老寿星\n");
//				}
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 0)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 0)
//	{
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if(b == 2)
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//我们输⼊⼀个年龄，如果年龄在18岁~36岁之间，我们输出⻘年。

//#include <stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18 && age <= 36)
//	{
//		printf("青年\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	b = a > 5 ? 3 : -3;
//	printf("%d\n", b);
//	return 0;
//}

//使⽤条件表达式实现找两个数中较⼤值。
//#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("输入num1的值：");
//	scanf("%d", &num1);
//	printf("输入num2的值：");
//	scanf("%d", &num2);
//	int res = 0;
//	res = num1 > num2 ? num1 : num2;
//	printf("较大的数为：%d", res);
//	return 0;
//}

//我们有⼀个变量叫flag, 如果flag为假，要做⼀个什么事情，
//#include  <stdio.h>
//int main()
//{
//	int flag = 0;
//	if (!flag)
//	{
//		printf("do something\n");
//	}
//	return 0;
//}








