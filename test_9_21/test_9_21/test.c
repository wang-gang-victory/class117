#define _CRT_SECURE_NO_WARNINGS 1

//C语言计算机语言
//Unix系统使用C语言重写、
//C语言是一门编译型计算机语言，需经过编译器（生成.obj文件）翻译和链接器（多个文件和库文件一起链接生成对应的.exe文件）链接，生成二进制的可执行文件才可以执行
//msvc（微软VS），clang（苹果XCode），gcc（CodeBlocks，DevC++），CMake（Clion）
//.c为后缀的文件称为源文件；.h为后缀的文件称为头文件 
// 
//
//第一个C语言程序
//运行快捷键，ctrl+f5

//#include <stdio.h>
//
//int main()
//{
//	printf("hello C\n");
//	return 0;
//}

//main函数；主函数，有且仅有一个，是程序的入口，项目中有多个.c文件但main函数只能有一个，因为程序的入口只能有一个

//printf和库函数
//printf是在标准输出设备上进行信息打印
//printf打印其他类型的数据

//#include <stdio.h>
//
//int main()
//{
//	int n = 100;
//	printf("%d\n", n);
//	printf("%c\n", 'q');
//	printf("%lf\n", 3.14);
//	return 0;
//}

//%d,%c,%lf是占位符，会被后面的值代替

//#include <stdio.h>  包含头文件
//库函数，C语言标准规定，编译器厂家实现

//关键字介绍

//auto break case char const continue default do double else enum extern 
//float for goto if int long register return short signed sizeof static 
//struct switch typedef union unsigned void volatile while
//C99标准引入 inline restrict _Bool _Complex _Imaginary

//字符与ASCII编码
//A-Z 65-90
//a-z 97-122
//0-9 48-57
//大小写相差32
// \n 10

//单个字符打印使用%c来指定格式

//#include <stdio.h>
//
//int main()
//{
//	printf("%c\n", 'Q');
//	printf("%c\n", 81);
//	return 0;
//}

//可打印字符展示

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 32; i <= 127; i++)
//	{
//		printf("%c ", i);
//		if (i % 16 == 15)
//			printf("\n");
//	}
//	return 0;
//}

//32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50
// 1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19

//字符串和\0

//#include <stdio.h>
//
//int main()
//{
//	printf("%s\n", "hello C");
//	printf("hello C");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char arr1[] = { 'a', 'b', 'c' };
//	char arr2[] = "abc";
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
// }

//#include <stdio.h>
//
//int main()
//{
//	char arr1[] = { 'a', 'b', 'c', '\0' };
//	char arr2[] = "abc";
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("abc\0abc");
//	return 0;
//}

//转义字符

//#include <stdio.h>
//
//int main()
//{
//	printf("abcndef\n");
//	printf("abc\ndef\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	printf("c:\\test\\code\\test.c\n");
//	printf("\a");
//	printf("%c\n", '\130'); // \ddd 八进制数字  
//	printf("%c\n", '\x30'); // \xdd 十六进制数字
//
//	return 0;
//}

//语句和语句分类


//空语句

//#include <stdio.h>
//
//int main()
//{
//	;
//	return 0;
//}

//表达式语句

//#include <stdio.h>
//
//int main()
//{
//	int a = 20;
//	int b = 0;
//	b = a + 5;
//
//	return 0;
//}

//函数调用语句

//#include <stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	printf("hehe\n");
//	int ret = Add(3, 2);
//
//	return 0;
//}

//复合语句
//代码块，括号中的代码

//#include <stdio.h>
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 10 - i;
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//控制语句

//条件判断语句也叫分支语句：if语句，switch语句
//循环语句：do while语句，while语句，for语句
//转向语句：break语句，goto语句，continue语句，return语句

//注释
// //第一种
// /* 注释 */ 第二种 可以注释在语句中间，比如解释函数参数
//注释不可以放到双引号内，"" 不然会被解释成字符，无法注释

// /* */ 注释不可以嵌套


//数据类型

//内置数据类型和自定义数据类型
//内置：字符；整形；浮点型；布尔类型
//自定义：数组；结构体struct;枚举enum；联合体union

//字符型
//
//char
//[signed] char
//unsigned char

//整形
//short int
//[signed] short [int] 
//unsigned short [int]

//int
//[signed] int
//unsigned int

//long int
//[signed] long [int]
//unsigned long [int]
//
//long long
//[signed] long long [int]
//unsigned long long [int]

//浮点型

//float
//double
//long double

//布尔类型
//包含头文件<stdbool.h>
//_Bool

//#include <stdio.h>
//#include <stdbool.h>
//
//int main()
//{
//	_Bool flag = true;
//	if (flag)
//		printf("i like C\n");
//	return 0;
//}

//各种数据类型的长度

//sizeof操作符的操作数可以是类型也可以是表达式

//sizeof(类型)
//sizeof 表达式 表达式不参与真实的运算

//sizeof的计算结果是size_t类型的

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeof a);
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(3 + 3.5));
//	return 0;
//}

//数据类型的长度

//#include <stdio.h>
//
//int main()
//{
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(_Bool));
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(long double)); 
//	return 0;
//}

//sizeof中表达式不计算

//#include <stdio.h>
//
//int main()
//{
//	short s = 2;
//	int b = 10;
//	printf("%d\n", sizeof(s = b + 1));
//	printf("%d\n", s);
//	return 0;
//}
//signed和unsigned

//signed int a;//int a;
//unsigned int a;//unsigned a;
//默认int带有正负号，即为signed int

//signed char c;
//unsigned char c;
//C语言char是否带有正负号有当前的系统决定，这点与int不同

//SCHAR_MIN,SCHAR_MAX signed char 的最大值和最小值
//SHAT_MIN,SHRT_MAX short的最大值和最小值
//INT_MIN,INT_MAX int的最大值和最小值
//LONG_MIN,LONG_MAX long的最大值和最小值
//LLONG_MIN,LLONG_MAX long long的最大值和最小值
//UCHAR_MAX unsigned char的最大值
//USHRT_MAX unsigned short的最大值
//UINT_MAX unsigned int的最大值
//ULONG_MAX unsigned long 的最大值
//ULLONG_MAX unsigned long long的最大值

//limits.h 整形取值范围
//float.h 浮点型取值范围

//变量

//int age;
//char ch;
//double weight;

//int age = 18;
//char ch = 'w';
//double weight = 48.0;
//unsigned int height = 100;

//全局变量

//#include <stdio.h>
//
//int global = 2026;
//
//int main()
//{
//	int local = 2024;
//	printf("%d\n", global);
//	printf("%d\n", local);
//	return 0;
//}

//局部优先
// 
//#include <stdio.h>
//
//int n = 100;
//
//int main()
//{
//	int n = 10;
//	printf("%d\n", n);
//	return 0;
//}

//局部变量在栈区，全局变量在静态区，堆区是用来动态内存管理的

//算数操作符 操作符也被叫做运算符

//#include <stdio.h>
//
//int main()
//{
//	int x = 4 + 22;
//	int y = 61 - 23;
//	printf("%d\n", x);
//	printf("%d\n", y);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num = 5;
//	printf("%d\n", num * num);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	float x = 6 / 4;
//	int y = 6 / 4;
//	printf("%d\n", y);
//	printf("%f\n", x);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	float x = 6.0 / 4;
//	printf("%f\n", x);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int score = 5;
//	score = (score / 20) * 100;//结果为0
//	return 0;
//}

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
//	int x = 6 % 4;
//	printf("%d\n", x);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", 11 % -5);
//	printf("%d\n", -11 % -5);
//	printf("%d\n", -11 % 5);
//	return 0;
//}

//赋值操作符

//int a = 100;
//a = 200;

//int a = 3;
//int b = 5;
//int c = 0;
//c = b = a + 3;

//复合赋值符

//int a = 10;
//a = a + 3;
//a = a - 2;
//a += 3;
//a -= 2;

//+= -= *= /= %=
//<<= >>=
//&= |= ^=

//单目操作符

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = ++a;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = a++;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//前置-- 后置--

//正好+ 负号-

//强制类型转换

//int a = 3.14;
//int a = (int)3.14;

//scanf和printf的介绍

//#include <stdio.h>
//
//int main()
//{
//	printf("Hello World\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("Hello\nWorld\n");
//
//	printf("Hello\n");
//	printf("World\n");
//	return 0;
//}

//占位符

//#include <stdio.h>
//
//int main()
//{
//	printf("There are %d apples\n", 3);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("%s will come tonight\n", "zhangsan");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("%s says it is %d o'clock\n", "lisi", 21);
//	return 0;
//}

//%c 字符
//%d 十进制整数
//%a 十六进制浮点数，输出字母为小写
//%A 十六进制浮点数，字母输出为大写
//%e 使用科学计数法的浮点数，指数部分的e为小写
//%E 使用科学计数法的浮点数，指数部分的E为大写
//%i 整数，基本等同于%d
//%f 小数（包含float和double）。float %f double %lf
//%g 6个有效数字的浮点数。整数部分超过6位，就会自动转为科学计数法，指数部分的e为小写
//%G 等同于%g，唯一的区别是指数部分的E为大写
//%hd 十进制short int类型
//%ho 八进制short int类型
//%hx 十六进制short int类型
//%hu unsigned short int类型
//%ld 十进制long int类型
//%lo 八进制long int类型
//%lx 十六进制long int类型
//%lu unsigned long int类型
//%lld 十进制long long int类型
//%llo 八进制long long int类型
//%llx 十六进制long long int类型
//%llu unsigned long long int类型
//%Le 科学计数法表示的long double类型浮点数
//%Lf long double类型浮点数
//%n 以输出的字符串数量。改占位符本身不输出，只将值存储在指定变量中
//%o 八进制整数
//%p 指针（用来打印地址）
//%s 字符串
//%u 无符号整数（unsigned int）
//%x 十六进制整数
//%zd size_t类型
//%% 输出一个百分号

//输出格式

//#include <stdio.h>
//
//int main()
//{
//	printf("%5d\n", 123);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("%12f\n", 123.45);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("%+d\n", 12);
//	printf("%+d\n", -12);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("Number is %.2f\n", 0.2);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("%6.2f\n", 0.5);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("%*.*f\n", 6, 2, 0.5);
//	return 0;
//}

//输出部分字符串

//#include <stdio.h>
//
//int main()
//{
//	printf("%.5s\n", "hello world");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int score = 0;
//	printf("请输入成绩：");
//	scanf("%d", &score);
//	printf("成绩是：%d\n", score);
//	return 0;
//}

//scanf("%d%d%f%f", &i, &j, &x, &y);

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	float x = 0;
//	float y = 0;
//	scanf("%d%d%f%f", &i, &j, &x, &y);
//	printf("%d %d %f %f\n", i, j, x, y);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int x;
//	float y;
//	scanf("%d", &x);
//	printf("%d\n", x);
//	scanf("%f", &y);
//	printf("%f\n", y);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("%f\n", .45e12);
//	return 0;
//}

//scanf函数的返回值是成功读取的变量个数

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	float f = 0.0f;
//	int r = scanf("%d %d %f", &a, &b, &f);
//	printf("a=%d b=%d f=%f\n", a, b, f);
//	printf("r = %d\n", r);
//	return 0;
//}

//占位符
//%c 字符
//%d 整数
//%f float类型浮点数
//%lf double类型浮点数
//%Lf long double类型浮点数
//%s 字符串
//%[] 在方括号中指定一组匹配字符，遇到不在集合中的字符，匹配将会停止

//%c不会忽略起始的空白字符，其他都会忽略起始的空白字符

//scanf(" %c", &ch);强制跳过起始的空白字符

//%s是从当前第一个非空白字符读起，知道遇到空白字符为止，并且会在字符串末尾存储一个、0

//使用%s占位符时，应指定字符串的最长长度，即写成%[m]s。[m]这是一个整数，表示读取字符串的最大长度，后面的字符将被丢弃

//#include <stdio.h>
//
//int main()
//{
//	char name[11];
//	scanf("%10s", name);
//	return 0;
//}

//赋值忽略符

//#include <stdio.h>
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%d-%d-%d", &year, &month, &day);
//	printf("%d %d %d\n", year, month, day);
//	return 0;
//}

//更普遍情况
//#include <stdio.h>
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%d%*c%d%*c%d", &year, &month, &day);
//	printf("%d %d %d\n", year, month, day);
//
//	return 0;
//}


















































































