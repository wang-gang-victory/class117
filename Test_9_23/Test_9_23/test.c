#define _CRT_SECURE_NO_WARNINGS 1

//猜数字游戏

//C语言提供了一个rand函数可以产生随机数
//int rand (void)
// 
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	return 0;
//}

//srand函数初始化随机数的生成器
//void srand (unsigned int seed)

//time
//time_t time (time_t* timer)

//让time返回时间戳；time(NULL)

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	return 0;
//}

//rand()%100  0-99;
//rand()%100+1 1-100；
//rand()%200+1-100 100-200
//rand()%b(b-a+1) + a;  a-b

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void game()
//{
//	int r = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字\n");
//		scanf("%d", &guess);
//		if (guess < r)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > r)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜对了，数字是：%d\n", guess);
//			break;
//		}
//
//	}
//
//}
//
//void menu()
//{
//	printf("****************************\n");
//	printf("**********1.play************\n");
//	printf("**********0.exit************\n");
//	printf("****************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("游戏结束\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while(input);
//	return 0;
//}

//猜数字游戏

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void game()
//{
//	int r = rand() % 100 + 1;
//	int guess = 0;
//	int count = 5;
//	while (count)
//	{
//		printf("\n你还有%d次机会\n", count);
//		printf("请猜数字>:");
//		scanf("%d", &guess);
//		if (guess < r)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > r)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜对了,数字是%d\n", guess);
//		}
//		count--;
//	}
//	if (count == 0)
//	{
//		printf("你失败了，正确值是：%d\n", r);
//	}
//}
//
//void menu()
//{
//	printf("************************\n");
//	printf("*********1.play*********\n");
//	printf("*********2.exit*********\n");
//	printf("************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("游戏结束\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}