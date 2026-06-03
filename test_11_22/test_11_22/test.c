#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", 3 + 5);
//	printf("%d\n", a + b);
//	printf("%d\n", a - b);
//	printf("%d\n", 3 - 5);
//	return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", 8 / 2);
//	printf("%d\n", 8 / 3);
//	printf("%d\n", 6 / 4);
//	printf("%f\n", 6 / 4.0);
//	printf("%f\n", 6.0 / 4);
//	printf("%f\n", 6.0 / 4.0);
//	return 0;
//}

//%f用来打印小数，这种打印默认是小数点后六位
//除号两端只要有一端是小数，就属于小数除法

//#include <stdio.h>
//
//int main()
//{
//	int score = 5;
//	score = (score / 20.0) * 100;
//	printf("%d\n", score);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", 10 % 3);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	//int a = 0;//初始化
//	//a = 10;//赋值
//
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	c = b = a + 3;
//	printf("%d\n", c);
//	printf("%d\n", b);
//	c = (b = a + 3);
//	printf("%d\n", c);
//	printf("%d\n", b);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 3;
//	a = a + 3;
//	a += 3;
//	a = a - 5;
//	a -= 5;
//	printf("%d\n", a);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 5;
//	a = a + 1;
//	a += 1;
//	a++;
//	++a;
//	printf("%d\n", ++a);
//	printf("%d\n", a++);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = a++;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = --a;
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	printf("%d\n", (a++) + (++a) + (a++)); //错误的代码，编译器计算结果是6
//	//        a      1       3       3
//	//     表达式：   1       4        7
//
//	return 0;
//
//
//}

//int main()
//{
//	int a = +10;
//	printf("%d\n", a);
//	printf("%d\n", +a);
//
//	return 0;
//}

//int main()
//{
//	int a = -10;
//	printf("%d\n", a);
//	printf("%d\n", -a);
//	
//	return 0;
//
//}

//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	printf("hello\nworld\n");
//	printf("hello\n");
//	printf("world\n");
//	return 0;
//}

//%d - 有符号的整数占位符

//int main()
//{
//	//printf("%d\n", 555);
//	printf("there are 3 apples\n");
//	printf("there are %d apples\n",4);
//	printf("there are %d apples\n",500);
//	printf("there are %d apples\n",202);
//	return 0;
//}

//%s - 字符串的占位符

//int main()
//{
//	printf("zhangsan will come tonight\n");
//	printf("%s will come tonight\n", "zhangsan");
//	printf("%s will come tonight\n","李四");
//	printf("%s will come tonight\n","wangwu");
//	return 0;
//}

//int main()
//{
//	printf("zhangsan says it is 8 o'clock\n");
//	printf("%s says it is %d o'clock\n", "zhangsan", 8);
//	return 0;
//}

//int main()
//{
//	//printf("%d\n", 6/4);
//	short int a = 2;
//	printf("%hd\n", a);
//	unsigned short int m = 5;
//	printf("%hu\n", m);
//	return 0;
//}

//int main()
//{
//	int a = 15;
//	printf("%%d\n", a);
//	printf("%x\n", a);
//	return 0;
//}

//int main()
//{
//	printf("%-5d%d\n", 123,123);
//	printf("%6d\n", 153);
//	return 0;
//}

//int main()
//{
//	printf("%5d\n", 123456);
//	printf("%05d\n", 123);
//	return 0;
//}

//int main()
//{
//	printf("%5lf\n", 3.4);
//	printf("%lf\n", 3.4);
//	printf("%12lf\n", 3.4);
//	printf("%12.8lf\n", 3.4);
//	printf("%-12.8lf\n", 3.4);
//	printf("%012.8lf\n", 3.4);
//	printf("%012lf\n", 3.4);
//	return 0;
//}

//int main()
//{
//	printf("%+d\n", 15);
//	printf("%+d\n", -15);
//	return 0;
//}

//int main()
//{
//	printf("%-d\n", 15);
//	printf("%-d\n", -15);//前面夹负号没什么用
//	return 0;
//
//}

//int main()
//{
//	printf("%f\n",123.456);
//	printf("%.2f\n",123.456);
//	printf("%.3f\n",123.456);
//	printf("%.1f\n",123.456);
//	return 0;
//}

//int main()
//{
//	printf("%8.2f\n", 123.456);
//	printf("%*.*f\n", 10, 3, 123.456);
//	return 0;
//}

//输出部分字符串%.5s

//int main()
//{
//	printf("%s\n", "hello world");
//	printf("%.5s\n", "hello world");
//	printf("%50s\n", "hello world");
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int score = 0;
//	scanf("%d", &score);
//
//	printf("成绩是：%d\n", score);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	double b = 0;
////	char c = 'g';
//	scanf("%d", &a);
//	scanf("%lf", &b);
//	scanf("%c", &c);
//	printf("%d\n", a);
//	printf("%lf\n", b);
//	//printf("%c\n", c);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	float c = 0;
//	int r = scanf("%d %d %f", &a, &b, &c);
//	printf("%d\n%d\n%f\n", a, b, c);
//	printf("%d\n", r);
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 0 };
//	scanf("%s", arr);
//	printf("%s", arr);
//	return 0;
//}

