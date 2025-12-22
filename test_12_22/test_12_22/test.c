#define _CRT_SECURE_NO_WARNINGS 1

////判断一个数 是否为奇数
//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//	{
//		printf("%d是奇数\n", num);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("num是奇数\n");
//	else
//		printf("num是偶数\n");
//	return 0;
//}

//输⼊⼀个年龄， >= 18岁就输出：成年，否则就输出：未成年

//#include <stdio.h>
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

//要求输⼊⼀个整数，判断输⼊的整数是0，还是正数或者负数

//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num > 0)
//	{
//		printf("num是正数\n");
//	}
//	else
//	{
//		if (num == 0)
//		{
//			printf("num是0\n");
//		}
//		else
//		{
//			printf("num是负数\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num > 0)
//	{
//		printf("num是正数\n");
//	}
//	else if (num == 0)
//	{
//		printf("num是0\n");
//	}
//	else
//	{
//		printf("num是负数\n");
//	}
//	return 0;
//}

//输⼊⼀个整数，如果是正数，再判断是奇数还是偶数，并输出；如果不是正数则输出：⾮正数

//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num > 0)
//	{
//		if (num % 2 == 1)
//		{
//			printf("num是奇数\n");
//		}
//		else
//		{
//			printf("num是偶数\n");
//		}
//	}
//	else
//	{
//		printf("num是非正数\n");
//	}
//	return 0;
//}

//#include <stdio.h>
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
//	else if (age <= 89)
//	{
//		printf("老年\n");
//	}
//	else
//		printf("老寿星\n");
//	return 0;
//
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//		else
//			printf("haha\n");
//	
//	return 0;
//}

//：我们输⼊⼀个年龄，如果年龄在18岁~36岁之间，我们输出⻘年。
//#include <stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18 && age <= 36)
//		printf("青年\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	if (a > 5)
//		b = 3;
//	else
//		b = -3;
//	printf("%d\n", b);
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
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int num = 0;
//	num = a > b ? a : b;
//	printf("%d\n", num);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int flag = 0;
//	if (!flag)
//	{
//		printf("do something\n");
//	}
//	return 0;
//}

//如果我们说⽉份是3⽉到5⽉，是春天，那使⽤代码怎么体现呢？

//#include <stdio.h>
//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month >= 3 && month <= 5)
//		printf("是春天\n");
//	else
//		printf("不是春天\n");
//	return 0;
//}

//我们说⼀年中⽉份是12⽉或者1⽉或者2⽉是冬天，那么我们怎么使⽤代码体现呢？
//#include <stdio.h>
//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month == 12 || month == 1 || month == 2)
//		printf("是冬天\n");
//	else
//		printf("不是冬天\n");
//	return 0;
//}

//输⼊⼀个年份year，判断year是否是闰年
//闰年判断的规则：
//1. 能被4整除并且不能被100整除是闰年
//2. 能被400整除是闰年

//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		printf("%d是闰年\n", year);
//	else
//		printf("%d不是润年\n", year);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0)
//		printf("%d是闰年\n", year);
//	else if (year % 400 == 0)
//		printf("%d是闰年\n", year);
//	else
//		printf("%d不是闰年\n", year);
//	return 0;
//}

//输⼊任意⼀个整数值，计算除3之后的余数

//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 3 == 0)
//		printf("%d整除3\n", num);
//	else if (num % 3 == 1)
//		printf("%d除3，余数为1\n", num);
//	else
//		printf("%d除3，余数为2\n", num);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	switch (num % 3)
//	{
//	case 0:
//		printf("整除\n");
//		break;
//	case 1:
//		printf("余数为1\n");
//		break;
//	case 2:
//		printf("余数为2\n");
//		break;
//	}
//	return 0;
//}

//输⼊⼀个1~7的数字，打印对应的星期⼏
//例如：
//输⼊：1 输出：星期⼀
//输⼊：2 输出：星期⼆
//输⼊：3 输出：星期三
//输⼊：4 输出：星期四
//输⼊：5 输出：星期五
//输⼊：6 输出：星期六
//输⼊：7 输出：星期天

//#include <stdio.h>
//int main()
//{
//	printf("输入1-7的数字\n");
//	int num = 0;
//	scanf("%d", &num);
//	if (num == 1)
//		printf("星期一\n");
//	else if (num == 2)
//		printf("星期二\n");
//	else if (num == 3)
//		printf("星期三\n");
//	else if (num == 4)
//		printf("星期四\n");
//	else if (num == 5)
//		printf("星期五\n");
//	else if (num == 6)
//		printf("星期六\n");
//	else
//		printf("星期天\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("请输入1-7的数字\n");
//	int num = 0;
//	scanf("%d", &num);
//	switch (num)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("请输入1-7的数字\n");
//	int num = 0;
//	scanf("%d", &num);
//	switch (num)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作天\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息天\n");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("请输入1-7的数字\n");
//	int num = 0;
//	scanf("%d", &num);
//	switch (num)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作天\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息天\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}

//在屏幕上打印1~10的值
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//输⼊⼀个正的整数，逆序打印这个整数的每⼀位
//例如：
//输⼊：1234，输出：4321
//输⼊：521，输出：125

//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		printf("%d", num % 10);
//		num /= 10;
//	}
//	return 0;
//}

//在屏幕上打印1~10的值
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	for (num = 1; num <= 10; num++)
//	{
//		printf("%d ", num);
//	}
//	return 0;
//}
//计算1~100之间3的倍数的数字之和
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			n += i;
//	}
//	printf("%d", n);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 3; i <= 100; i += 3)
//	{
//		n += i;
//	}
//	printf("%d", n);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

//输⼊⼀个正整数，计算这个整数是⼏位数？
//例如：
//输⼊：1234 输出：4
//输⼊：12 输出：2

//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	int i = 0;
//	scanf("%d", &num);
//	do
//	{
//		num /= 10;
//		i++;
//	} while (num > 0);
//
//	printf("%d\n", i);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;//continue
//		printf("%d ", i);
//	}
//	return 0;
//}

//找出100~200之间的素数，并打印在屏幕上。
//注：素数⼜称质数，只能被1和本⾝整除的数字

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int num = 1;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				num = 0;
//		}
//		if (num)
//			printf("%d ", i);
//	}
//	return 0;
//}

