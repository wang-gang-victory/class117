#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//目标：升序

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 0;
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//				flag = 1;
//			}
//
//		}
//		if (flag == 0)
//			break;
//	}
//
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 3,1,8,6,0,9,4,2,7,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//
//	return 0;
//}

//只要涉及到排序，就会有元素的比较

void qsort(void* base, //指向待排序数组的第一个元素
			size_t num, //base指向数组元素的个数
			size_t size, //每个元素的大小。单位是字节
			int (*compar)(const void* p1, const void* p2))；//函数指针，指向的函数中可以比较数组中两个函数
	//p1 > p2(指向元素)  返回大于0的值
	//p1 < p2(指向元素)  返回小于0的值
	//p1 = p2 返回 0

//测试qsort来排序整形数组

#include <stdlib.h>

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int com_int(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;

}

//测试qsort排序整数
void test1()
{
	int arr[] = { 3,1,8,6,0,9,4,2,7,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), com_int);
	print_arr(arr, sz);
}

int com_float(const void* p1, const void* p2)
{
	if (*(float*)p1 < *(float*)p2)
		return -1;
	else if (*(float*)p1 > *(float*)p2)
		return 1;
	else
		return 0;
}

//测试qsort排序浮点数
void test2()
{
	int arr[] = { 2.0,5.0,3.0,1.0,8.0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), com_float);
	print_arr(arr, sz);
}

struct Stu
{
	char name[20];
	int age;
};

int com_stu_by_age(const void* p1, const void* p2)
{
	return (*(struct Stu*)p1).age - (*(struct Stu*)p2).age;
}

//测试qsort在结构体中的应用
void test3()
{
	struct Stu arr[] = { {"zhangsan",20} ,{"lisi",25},{"wangwu",18} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), com_stu_by_age);
}

//两个字符串比价大小，strcmp
//strcmp(str1,str2);
//str1 > str2  返回>0;
//str1 < str2  返回<0;
//str1 = str2  返回0;

#include <string.h>

int cmp_stu_by_name(const void* p1, const void* p2)
{
	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
}

void test4()
{
	struct Stu arr[] = { {"zhangsan",20},{"lisi",25},{"wangwu",18} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
}


int main()
{
	test1();

	struct Stu s = { "zhangsan",18 };
	printf("%s\n", s.name);
	printf("%d\n", s.age);
	//结构体变量.成员名
	struct Stu* ps = &s;
	//->结构体成员访问操作符
	//结构体指针->成员名

	printf("%s\n", ps->name);//(*ps).name
	printf("%d\n", ps->age);//(*ps).age

	return 0;
}