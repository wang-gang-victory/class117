#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	printf("hello C\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//
//	printf("hello C\n");
//
//	int n = 100;
//	printf("%d\n", n);
//	printf("%c\n", 'q');
//	printf("%lf\n", 3.14);
//
//
//	return 0; 
//}

//¹Ø¼ü´Ê£º
// auto break case char const continue default do double else enum ectern
// float for goto if int long register return short signed sizeof static 
// struct switch typedef union unsigned void volatile while
//#include <stdio.h>
//
//int main()
//{
//
//	printf("%c\n", 'q');
//	printf("%c\n", 81);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 32; i <= 127; i++)
//	{
//		printf("%c ", i);
//		if (i % 16 == 15)
//		{
//			printf("\n");
//		}
//
//	}
//	return 0;


//#include <stdio.h>
//
//int main()
//{
//
//	printf("%s\n", "hello C");
//	printf("hello c");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//
//	char arr1[] = { 'a','b','c' };
//	char arr2[] = "abc";
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	char arr1[] = { 'a','b','c','\0' };
//	char arr2[] = "abc";
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s", "abc\0def");
//
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	printf("abc\ndef");
//
//
//
//	return 0;
//}
//

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
//
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 20;
//	int b = 0;
//	b = a + 5;
//	printf("%d\n", b);
//
//
//	return 0;
//}

//#include <stdio.h>
//
//
//int Add(int x, int y)
//{
//
//	return x + y;
//}
//
//int main()
//{
//	int ret = Add(2, 4);
//	printf("hehe\n");
//	printf("%d\n", ret);
//	return 0;
//}

#include <stdio.h>

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);

	}
}

int main()
{
	int i = 0;
	int arr[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		arr[i] = 10 - i;
		printf("%d\n", arr[i]);
	}


	return 0;
}