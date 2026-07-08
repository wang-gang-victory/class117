#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeof(a + 2));
//	printf("%zd\n", sizeof(int));
//
//	return 0;
//
// }


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%zd\n", strlen(arr1));
//	printf("%zd\n", strlen(arr2));
//
//	return 0;
//}

//数组名是数组首元素的地址
//但有两个例外
//1. sizeof(arr)：数组名单独放在sizeof内部，这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2. &数组名，这里的数组名表示整个数组，取出的是整个数组的地址


//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%zd\n", sizeof(a));//整个数组的大小
//	printf("%zd\n", sizeof(a + 0));//数组首元素的地址的大小4/8
//	printf("%zd\n", sizeof(*a));//首元素的大小4
//	printf("%zd\n", sizeof(a + 1));//数组第二个元素的地址的大小 4/8
//	printf("%zd\n", sizeof(a[1]));//数组首元素的大小
//	printf("%zd\n", sizeof(&a));//取出的是数组的地址，是地址就是4/8个字节
// 
// //&a + 1；跳过了16个字节
// //*&a 这里的解引用访问到16个字节
// //int (*)[4]
// printf("zd\n", sizeof(*&a));//16
// //printf("zd\n", sizeof(a));//16
// 
// 
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%zd\n", sizeof(arr));//整个数组的大小 6
//	printf("%zd\n", sizeof(arr + 0));//数组首元素地址的大小 4/8
//	printf("%zd\n", sizeof(*arr));//数组的首元素大小 1
//	printf("%zd\n", sizeof(arr[1]));//数组第二个元素的大小 1
//	printf("%zd\n", sizeof(&arr));//整个数组地址的大小 4/8
//	printf("%zd\n", sizeof(&arr + 1));//整个数组地址后面的地址的大小，4/8
//	printf("%zd\n", sizeof(&arr[0] + 1));//第二个元素的地址的大小 4/8
//
//	return 0;
//}


#include <stdio.h>
#include <string.h>

int main()
{
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%zd\n", strlen(arr));//从a开始统计随价值，没有\0
	printf("%zd\n", strlen(arr + 0));//从a开始统计，随机值，没有\0
	printf("%zd\n", strlen(*arr));//97做地址，形成非法访问程序会崩溃
	printf("%zd\n", strlen(arr[1]));//98做地址，同上程序崩溃
	printf("%zd\n", strlen(&arr + 1));//随机值，从f后面统计
	printf("%zd\n", strlen(&arr[0] + 1);//从b开始统计，随机值


	return 0;
}