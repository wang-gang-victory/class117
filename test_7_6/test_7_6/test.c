#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//char* test(int* p, char ch)
//{
//	return NULL;
//}
//
//int main()
//{
//	//int a = 10;
//	//&a;
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	int arr[6] = { 0 };
//	int(*pa)[6] = &arr;//这是一个数组指针
//	int* arr[6] = { NULL };//整形指针数组
//	int (*pf)(int, int) = &Add;//pf是一个函数指针变量
//	char (*pt)(int*, char) = &test;
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int (*pf)(int, int) = &Add;//pf是函数指针变量
//	int r = (*pf)(10, 20);
//	printf("%d\n", r);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int (*pf)(int, int) = Add;
//	//Add和pf和&Add是一样的
//	int r = (*pf)(10, 20);
//	printf("%d\n", r);
//	int a = (*Add)(10, 20);
//	printf("%d\n", a);
//	int b = Add(10, 20);
//	printf("%d\n", b);
//
//
//	return 0;
//}

//int main()
//{
//	//void (*p)();//p是函数指针变量
//	//void (*)();//这个是函数指针类型
//	//0 - int
//	//(void (*)())0,发生强转，将0当作一个地址，这个0地址处放的函数是：无参返回类型是void的函数；
//
//	(*(void (*)())0)();
//	//上面是一次函数调用；
//	//调用的是0这个地址处的函数；
//	return 0;
//}

//void (* signal(int, void(*)(int)))(int)
//void (*)(int) 为signal函数的返回类型，他有两个参数int，void(*)(int);

//unsigned int num;
//typedef unsigned int uint;
//typedef int* pint;
//
//int main()
//{
//	pint p2;
//	int* p1;
//	uint un1;
//	unsigned int un2;
//
//	return 0;
//}

//typedef int* pint;
//
//int main()
//{
//	int* p1, p2;//p1是指针类型，p2是整形；
//	pint p3, p4;
//
//	return 0;
//}

//typedef对数组指针和函数指针是不好理解的

//typedef int(*parr_t)[6];
//
//int main()
//{
//	int arr[6] = { 0 };
//	parr_t p2 = &arr;
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//typedef int (*pf_t)(int, int);
//
//int main()
//{
//	int (*pf1)(int, int) = &Add;
//	pf_t pf2 = Add;
//	return 0;
//}

//typedef void(*pf_t)(int);
//
//pf_t signal(int, pf_t);

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	//函数指针数组
//	int (*pf[4])(int, int) = { Add, Sub };
//	return 0;
//}

//计算器
//整数加法，减法，乘法，除法

//void menu()
//{
//	printf("---------    计算器   ---------\n");
//	printf("------ 1. add   2. sub -------\n");
//	printf("------ 3. mul   4. div -------\n");
//	printf("------     0. exit     -------\n");
//	printf("------------------------------\n");
//
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0, y = 0;
//	int r = 0;
//	do
//	{
//		menu();
//		printf("选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("输入两个操作数：");
//			scanf("%d %d", &x, &y);
//			r = Add(x, y);
//			printf("%d\n", r);
//			break;
//		case 2:
//			printf("输入两个操作数：");
//			scanf("%d %d", &x, &y);
//			r = Sub(x, y);
//			printf("%d\n", r);
//			break;
//		case 3:
//			printf("输入两个操作数：");
//			scanf("%d %d", &x, &y);
//			r = Mul(x, y);
//			printf("%d\n", r);
//			break;
//		case 4:
//			printf("输入两个操作数：");
//			scanf("%d %d", &x, &y);
//			r = Div(x, y);
//			printf("%d\n", r);
//			break;
//		case 0:
//			printf("退出计算机\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}

//---------------------------------

//void menu()
//{
//	printf("--------    计算机      -------\n");
//	printf("-------1. add   2. sub -------\n");
//	printf("-------3. mul   4. div -------\n");
//	printf("-------    0. exit     -------\n");
//	printf("------------------------------\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0, y = 0;
//	int r = 0;
//	//函数指针的数组
//	//转移表、
//	int (*pfArr[])(int, int) = { NULL, Add, Sub, Mul, Div };
//
//	do
//	{
//		enmu();
//		printf("选择：");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数：");
//			scanf("%d", &input);
//			r = pfArr[input](x, y);
//			printf("%d\n", r);
//		}
//		else if (input == 0)
//		{
//			printf("退出计算机\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//
//	return 0;
//}

//-------------------------------------
//void enmu()
//{
//	printf("--------    计算机      -------\n");
//	printf("-------1. add   2. sub -------\n");
//	printf("-------3. mul   4. div -------\n");
//	printf("-------    0. exit     -------\n");
//	printf("------------------------------\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
////计算函数根据参数不同就进行不同的运算
//
//void calc(int (*pf)(int, int))
//{
//	int x = 0, y = 0;
//	int r = 0;
//	printf("请输入两个操作数：");
//	scanf("%d %d", &x, &y);
//	r = pf(x, y);
//	printf("%d\n", r);
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		enmu();
//		printf("选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算机\n");
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


















