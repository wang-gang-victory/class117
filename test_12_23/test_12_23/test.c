#define _CRT_SECURE_NO_WARNINGS 1

//1. 电脑⾃动⽣成1~100的随机数
//2. 玩家猜数字，猜数字的过程中，根据猜测数据的⼤⼩给出⼤了或⼩了的反馈，直到猜对，游戏结束

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void game()
//{
//	int r = rand() % 100 + 1;
//	int guess = 0;
//	
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
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//
//	}
//
//}
//
//void menu()
//{
//	printf("***********************\n");
//	printf("*******1.玩游戏  *******\n");
//	printf("*******0.退出游戏********\n");
//	printf("************************\n");
//
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

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
//		printf("输入数字\n");
//		scanf("%d", &guess);
//		if (guess > r)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < r)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//
//}
//
//void menu()
//{
//	printf("**********************\n");
//	printf("*******1.玩游戏********\n");
//	printf("*******0.退出游戏******\n");
//	printf("**********************\n");
//
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//goto 语句
//#include <stdio.h>
//int main()
//{
//next:
//	printf("hehe\n");
//
//	printf("haha\n");
//	goto next;
//
//	printf("跳出了haha的打印\n");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	char input[20] = { 0 };
//
//	system("shutdown -s -t 120");
//
//	printf("你的电脑将在两分钟后会关机,如果输入，我是猪，就取消后关机\n");
//again:
//	scanf("%s", input);
//	if (strcmp(input,"我是猪") == 0)//字符串的比较大小，使用strcmp函数
//	{
//		printf("还算配合，取消关机\n");
//		system("shutdown -a");
//	}
//	else
//	{
//		printf("输入错误，请重新输入\n");
//		goto again;
//	}
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 120");
//	printf("你的电脑将在2分钟后关机，输入，我是猪，就取消关机\n");
//again:
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		printf("已取消关机\n");
//	}
//	else
//	{
//		printf("输入错误，请重新输入\n");
//		goto again;
//	}
//
//	return 0;
//}
