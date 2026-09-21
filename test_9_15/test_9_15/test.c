#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	printf("hello C\n");
//	int n = 100;
//	printf("%d\n", n);
//	printf("%c\n", 'q');
//	printf("%lf\n", 3.14);
//
//	return 0;
//}

//关键字：
//auto  break  case  char  const  continue  default  do  double  else  enum  extern
//float  for  goto  if  int  long  register  return  short  signed  sizeof  static  
//struct  switch  typdef  union  unsigned  void  volatile  while

//#include <stdio.h>
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

//#include <stdio.h>
//int main()
//{
//	printf("%s\n", "hello C");
//	printf("hello C");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char arr1[] = { 'a','b','c' };
//	char arr2[] = "abc";
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char arr1[] = { 'a', 'b', 'c', '\0' };
//	char arr2[] = "abc";
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", "abc\0def");
//
//}

//#include <stdio.h>
//int main()
//{
//	printf("abcndef");
//	printf("abc\ndef");
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
//	printf("%c\n", '\130');
//	printf("%c\n", '\x30');
//	return 0;
//}

//空语句

//#include <stdio.h>
//int main()
//{
//
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
//	b = a + 5;//表达式语句
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
//	printf("hehe\n");//函数调用语句
//	int ret = Add(2, 3);//函数调用语句
//	return 0;
//}

//复合语句
//大括号中的就是代码块

//#include <stdio.h>
//
//void printf(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++) 
//	{
//		printf("%d\n",arr[i]);
//	}
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
//条件判断：if语句，switch语句
//循环语句：do while；while；for
//转向语句：break；goto；continue；return

//int fopen(char* s /*file name*/,int mode)
//
//数据类型：
//内置：字符型，整型，浮点型，布尔类型
//自定义型：数组，结构体struct，枚举enum，联合体union

//char
//[signed] char
//unsigned char
//
//int
//[signed] int
//unsigned int
//
//short[int]
//[signed] short[int]
//unsigned short[int]
//
//long[int]
//[signed] long [int]
//unsigned long [int]
//
//long long [int]
//[signed] long long [int]
//unsigned long long [int]

//float double long double

//_Bool

//#include <stdio.h>
//#include <stdbool.h>
//int main()
//{
//	_Bool flag = true;
//	if (flag)
//	{
//		printf("i like C\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeof a);
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(3 + 3.14));
//	return 0;
//}

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
//
//
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	short s = 2;
//	int b = 10;
//	printf("%d\n", sizeof(s = b + 1));
//	printf("s = %d\n", s);
//	return 0;
//}
//sizeof 中的表达式不计算

//int age = 8;
//char ch = 'w';
//double weight = 48.0;
//unsigned int height = 100;

//#include <stdio.h>
//
//int global = 2023;
//
//int main()
//{
//	int local = 2018;
//	printf("%d\n", local);
//	printf("%d\n", global);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int x = 4 + 22;
//	int y = 61 - 23;
//	printf("%d\n", x);
//	printf("%d\n", y);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num = 5;
//	printf("%d\n", num * num);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	float x = 6 / 4;
//	int y = 6 / 4;
//	printf("%f\n", x);
//	printf("%d\n", y);
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
//int main()
//{
//	int score = 5;
//	int score1 = (score / 20.0) * 100; 
//	int score2 = (score / 20) * 100;
//	printf("%d\n", score1);
//	printf("%d\n", score2);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int x = -6 % 4;
//	printf("%d\n", x);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	c = b = a + 3;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	a = a + 2;
//	a = a - 2;
//	a += 2;
//	a -= 2;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = -a;
//	int c = -10;
//	printf("a=%d c=%d\n", a, c);
//	printf("a=%+d c=%+d\n", a, c);
//
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = (int)3.14;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%s say it is %d o'clock\n","lssi",8);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%5d\n", 123);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%-5d\n", 123);
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
//int main()
//{
//
//	printf("%*.*f\n", 6, 2, 2.5);
//}

//#include <stdio.h>
//int main()
//{
//	printf("%.5s\n", "hellpworld");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int score = 0;
//	printf("请输入成绩：");
//	scanf("%d", &score);
//	printf("成绩是：%d\n", score);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int l = 0;
//	scanf("%d%d%d%d",&i,&j,&k,&l);
//	printf("%d\n%d\n%d\n%d\n", i, j, k, l);
//	return 0;
//}










