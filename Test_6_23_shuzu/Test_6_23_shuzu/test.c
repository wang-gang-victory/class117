#define _CRT_SECURE_NO_WARNINGS 1

//int arr[5] = { 1,2,3,4,5 };
//int arr[6] = { 1,2,3,4,5 };

//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d %d\n", arr[0], arr[1]);
//	return 0;
//
//}
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 10;
//	for (i = 0; i < 10; i++)
//	{
//		printf("arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}

//计算数组的个数
//sizeof(arr)/sizeof(arr[0]);

//#include <stdio.h>
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5 ,2,3,4,5,6 ,3,4,5,6,7 };
//	printf("%d\n", arr[2][3]);
//	printf("%d\n", arr[0][0]);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[3][5] = {1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%d ", &arr[i][j]);
//		}
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[3][5] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0 ; j < 5; j++)
//		{
//			printf("arr[%d][%d]=%d\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}

//练习1：多个字符从两端移动，向中间汇聚

//#include <stdio.h>
//int main()
//{
//	char arr1[] = "welcome to bit...";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\n", arr2);
//	while (right >= left)
//	{
//		Sleep(1000);
//		arr2[right] = arr1[right];
//		arr2[left] = arr1[left];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		
//	}
//	return 0;
//}

//练习2：⼆分查找
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int key = 8;
//	int mid = 0;
//	int find = 0;
//	while (right >= left)
//	{
//		mid = (right + left) / 2;
//		if (key > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (key < mid)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			find = 1;
//			break;
//		}
//
//	}
//	if (find == 1)
//	{
//		printf("找到了，下标是%d\n", mid);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	double d = 16.0;
//	double r = sqrt(d);
//	printf("%lf\n", r);
//	return 0;
//}

//写⼀个加法函数，完成2个整型变量的加法操作。

//#include <stdio.h>
//
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = add(a,b);
//	printf("%d\n", sum);
//	return 0;
//}

//写⼀个函数将⼀个整型数组的内容，全部置为 - 1，再写⼀个函数打印数组的内容。
//
//#include <stdio.h>
//
//void Set(int arr1[], int num)
//{
//	for (int i = 0; i<num; i++)
//	{
//		arr1[i] = -1;
//	}
//	
//}
//
//void Print(int arr2[], int num2)
//{
//	for (int i = 0;i < num2; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Set(arr, sz);
//	Print(arr, sz);
//	return 0;
//}








