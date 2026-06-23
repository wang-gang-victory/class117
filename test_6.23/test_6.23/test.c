#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//
//
//int main()
//{
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	
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
//
//	return 0;
//
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
//		printf("猜数字>:");
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
//	}
//
//}
//
//void menu()
//{
//	printf("*************************\n");
//	printf("*******  1. play ********\n");
//	printf("*******  0. exit ********\n");
//	printf("*************************\n");
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
//		printf("请选择:>");
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
//
//	} while (input);
//
//
//
//		return 0;
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
//		printf("请输入<:");
//		scanf("%d", &guess);
//		if (guess > r)
//		{
//			printf("输入大了\n");
//		}
//		else if (guess < r)
//		{
//			printf("输入小了\n");
//		}
//		else
//		{
//			printf("恭喜你，输入成功\n");
//			break;
//		}
//
//	}
//
//}
//
//void menu()
//{
//	printf("*********************\n");
//	printf("****** 1. play ******\n");
//	printf("****** 0. exit ******\n");
//	printf("*********************\n");
//
//}
// 
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
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
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void game()
//{
//	int r = rand() % 100 + 1;
//	int guess = 0;
//	int cout = 5;
//	while (1)
//	{
//		printf("你还有%d次机会\n", cout);
//		printf("请输入:>");
//		scanf("%d", &guess);
//		if (guess > r)
//		{
//			printf("猜大了\n");
//
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
//		cout--;
//		if (cout == 0)
//		{
//			printf("你的次数已用完\n");
//			printf("正确值是：%d\n", r);
//			break;
//		}
//	}
//
//}
//
//void emun()
//{
//	printf("************************\n");
//	printf("****** 1. play   *******\n");
//	printf("****** 0. exit   *******\n");
//	printf("************************\n");
//
//}
//
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		printf("请选择:>");
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




