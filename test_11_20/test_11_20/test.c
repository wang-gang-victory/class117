#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	printf("abcdefghi\bx");
//	printf("abcdefghixxxxxxx\n");
//	printf("a\tbc\tdef\thixxxxxx\n");
//	printf("abafdfagag\tareasaffasfafaeee\tsfaf\n");
//	return 0;
//}

//#include <stdio.h>

//int main()
//{
//	printf("zhang\t\t20\n");
//	printf("lisi\t\t18\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("%c\n",'\130');
//	printf("%c\n",'\x31');
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	//int len = strlen("abc");//strlen用来求字符串长度，统计的是字符串中\0前面的字符数量
//	//printf("%d\n",len);
//	int len = strlen("c:\test\abc\181\bit.c");
//	printf("%d\n",len);
//
//
//	return 0;
//

//#include <stdio.h>
//
//int main()
//{
//	;//空语句
//	8 + 5;//表达式语句
//	printf("hehe\n");//函数调用语句
//
//	int a = 10;
//	int b = 20;
//	return 0;
//}

//#include <stdio.h>
//#include <stdbool.h>
//
//int main()
//{
//	_Bool n = true;
//	if (n)
//	{
//		printf("I like C\n");
//	}
//
//	return 0;
//}

//#include <stdbool.h>
//#include <stdio.h>
//int main()
//{
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(_Bool));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(long double));
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	//int a = 100;
//	//printf("%zd\n", sizeof(int));
//	//printf("%zd\n", sizeof(a + 3));
//	//printf("%zd\n", sizeof a);
//	int a = 100;
//	printf("%zd\n", sizeof(a+3.14));
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	short s = 2;
//	int b = 8;
//	printf("%zd\n",sizeof(s= b+1));
//	printf("%zd\n", s);
//
//	return 0;
//}

//#include <stdio.h>
//
//int mian()
//{
//	int age = 20;
//	char ch = 'q';
//	float weoght = 55.12f;
//
//	return 0;
//}

//#include <stdio.h>
//
//int b = 100;
//int main()
//{
//	printf("1:b = %d\n", b);
//	int a = 10;
//	{
//		int c = 200;
//		printf("c = %d\n",c);
//		printf("2:b = %d\n", b);
//
//
//	}
//	printf("3:b = %d\n", b);
//	
//	return 0;
//}

//#include <stdio.h>
//extern int val;//声明外部符号
//int main()
//{
//	printf("%d\n",val);
//	return 0;
//}

#include <stdio.h>

int a = 100;
int main()
{
	int a = 10;
	printf("%d\n", a);//局部优先
	return 0;
}