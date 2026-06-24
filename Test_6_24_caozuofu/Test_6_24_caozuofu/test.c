#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num = 10;
//	int n = num << 1;
//	printf("n = %d\n", n);
//	printf("num = %d\n", num);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int mun = 10;
//	int n = mun >> 1;
//	printf("num = %d\n", mun);
//	printf("n = %d\n", n);
//	return 0;
//}
//左移增大一倍，右移缩小一倍

//int num = 10;
//num >> -1//err

//#include <stdio.h>
//
//int main()
//{
//	int num1 = -3;
//	int num2 = 5;
//	printf("%d\n", num1 & num2);
//	printf("%d\n", num1 | num2);
//	printf("%d\n", num1 ^ num2);
//	printf("%d\n", ~0);
//	return 0;
//}

//不能创建临时变量（第三个变量），实现两个整数的交换。
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 5;
//	printf("a = %d ", a);
//	printf("b = %d\n", b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d ", a);
//	printf("b = %d\n", b);
//	return 0;
//}

//练习1：编写代码实现：求⼀个整数存储在内存中的⼆进制中1的个数。

//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num /= 2;
//	}
//	printf("有1的个数为：%d\n", count);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num = -1;
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (num & (1 << i))
//		{
//			count++;
//		}
//
//	}
//	printf("%d\n", count);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		num = num & (num - 1);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//判断n是不是2的次方数
//n & (n - 1) == 0;\

//编写代码将13⼆进制序列的第5位修改为1，然后再改回0
//
//#include <stdio.h>
//int main()
//{
//	int num = 13;
//	num = num | (1 << 4);
//	printf("%d\n", num);
//	num = num & ~(1 << 4);
//	printf("%d\n", num);
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char id[20];
//};
//
//struct Stu p1;
//struct Stu p2 = { "zhangsan", 20, "男", "123456" };
//
//struct Point
//{
//	char id[20];
//	struct Stu p;
//};
//
//int main()
//{
//	struct Stu s1 = { .age = 25, .id = "123456", .name = "zhangsan" };
//	return 0;
//}

