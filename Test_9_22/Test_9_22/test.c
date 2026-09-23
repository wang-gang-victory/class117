#define _CRT_SECURE_NO_WARNINGS 1

//输入一个整数，判断是否为奇数

//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//	{
//		printf("%d 是奇数\n", num);
//	}
//	return 0;
//}

//输入一个数，判断是否为奇数，如果是奇数，打印奇数，否则打印偶数

//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//	{
//		printf("%d 是奇数\n", num);
//	}
//	else
//	{
//		printf("%d 是偶数\n", num);
//	}
//	return 0;
//}

//输入一个年龄 >=18就输出成年，否则输出未成年

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
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//		printf("成年了\n");
//		printf("可以谈恋爱了\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("成年了\n");
//		printf("可以谈恋爱了\n");
//
//	}
//	return 0;
//}

//#include <stdio.h>
//
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
//		printf("不可以谈恋爱哦\n");
//	}
//	return 0;
//}

//要求输入一个整数判断输入的是0 还是正数还是负数

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

//输入一个正数，在判断是奇数还是偶数，并输出，如果不是正数则输出：非正数

//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num > 0)
//	{
//		if (num % 2 == 1)
//		{
//			printf("%d 是正数且是奇数\n", num);
//		}
//		else
//		{
//			printf("%d 是正数且是偶数\n", num);
//		}
//	}
//	else
//	{
//		printf("%d 是非正数\n", num);
//	}
//
//	return 0;
//}

//练习

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
//	else if (age < 44)
//	{
//		printf("青年\n");
//	}
//	else if (age < 59)
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
//		if (age < 44)
//		{
//			printf("青年\n");
//		}
//		else
//		{
//			if (age < 59)
//			{
//				printf("中老年\n");
//			}
//			else
//			{
//				if (age < 89)
//				{
//					printf("老年\n");
//				}
//				else
//				{
//					pritnf("老寿星\n");
//				}
//			}
//		}
//	}
//	return 0;
//}

//else总与最近的if所匹配

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a == 1)
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
//	int b = 0;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//		printf("haha\n");
//	return 0;
//}

//关系操作符

//0表示假，非零表示真

//if (x == 3)
//{
//	printf("x is 3.\n");
//}

//i<j<k  //err

//i<j && j<k

//#include <stdio.h>
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (18 <= age <= 36)
//	{
//		printf("青年\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18 && age <= 36)
//	{
//		printf("青年\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
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
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	b = a > 5 ? 3 : -3;
//	printf("%d\n", b);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = a > b ? a : b;
//	printf("较大的数是：%d\n", m);
//	return 0;
//}

//逻辑操作符

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

//#include <stdio.h>
//
//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month >= 3 && month <= 5)
//	{
//		printf("春季\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month == 12 || month == 1 || month == 2)
//	{
//		printf("冬季\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0)
//	{
//		printf("是闰年\n");
//	}
//	else if (year % 400 == 0)
//	{
//		printf("是闰年\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		printf("是闰年\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//i = a++ || ++b || d++;
//	printf("a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//	return 0;
//}

//switch 语句

//输入任意一个整数值，计算除三之后的余数

//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 3 == 0)
//		printf("整除\n");
//	else if (num % 3 == 1)
//		printf("余数为1\n");
//	else
//		printf("余数为2\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	switch (num % 3)
//	{
//	case 0:
//		printf("余数为0\n");
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

//#include <stdio.h>
//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//
//	case 4:
//		printf("星期4\n");
//		break;
//
//	case 5:
//		printf("星期5\n");
//		break;
//
//	case 6:
//		printf("星期6\n");
//		break;
//
//	case 7:
//		printf("星期7\n");
//		break;
//
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息天\n");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息天\n");
//		break;
//	default:
//		printf("输入错误，请重新输入\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	if (1)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	while (1)
//	{
//		printf("hehe\n");
//	}
//	return 0;
// }

//#include <stdio.h>
//int main()
//{
//	int num = 1;
//	while (num < 11)
//	{
//		printf("%d ", num);
//		num++;
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
//	int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		printf("%d", n % 10);
//		n /= 10;
//	}
//	return 0;
//}

//在屏幕上打印1~10的值

//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//计算1~100之间3的倍数的数字之和

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0) {
//			n += i;
//		}
//	}
//	printf("%d\n", n);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 3; i <= 100; i += 3)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//屏幕上打印1~10的值
//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//输⼊⼀个正整数，计算这个整数是⼏位数？
//例如：
//输⼊：1234 输出：4
//输⼊：12 输出：2

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	do
//	{
//		n /= 10;
//		ret++;
//	} while (n);
//	printf("%d\n", ret);
//	return 0;
//}

//while循环中的break和continue
//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//for循环中的continue

//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}

//循环的嵌套

//1.要从100~200之间找出素数，⾸先得有100~200之间的数，这⾥可以使⽤循环解决。
//2.假设要判断i是否为素数，需要拿2~i - 1之间的数字去试除i，需要产⽣2~i - 1之间的数字，也可以使⽤
//循环解决。
//3.如果2~i - 1之间有数字能整除i，则i不是素数，如果都不能整除，则i是素数。

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}
// //goto语句

//#include <stdio.h>
//int main()
//{
//	printf("hehe\n");
//	goto next;
//	printf("haha\n");
//
//next:
//	printf("跳过了haha的打印\n");
//	return 0;
//}

