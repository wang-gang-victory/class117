#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int arr[3][5];
//	double data[5][8];
//
//	return 0;
//}

//int main()
//{
//	//int arr1[3][5] = { 1,2,3 };
//	//int arr2[3][5] = { 1,2,3,4,5,6 };
//	//int arr3[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	//int arr4[3][5] = { 0 };
//	//int arr5[][5] = { {1,2},{2,3},{5,6} };
//	int arr[] = { 1,2,3,4,5 };
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	printf("%d\n", arr[2][3]);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[3][5] = { 0 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <windows.h>
//
//int main()
//{
//	char arr1[] = "welcome to bit !!!!!!!!!";
//	char arr2[] = "########################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int i = 0;
//	int sz sizeof(arr) / sizeof(arr[0]);
//	int flag = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了,下标是：%d\n", i);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdbool.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	bool flag = false;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			prinf("找到了，下标是：%d\n", mid);
//			flag = true;
//			break;
//		}
//	}
//	if (flag == false)
//		printf("找不到了\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int left = 7;
//	int right = 3;
//	/*int mid = (left + right) / 2;
//	int mid = left / 2 + right / 2;*/
//	int mid = left + (right - left) / 2;
//	printf("%d\n", mid);
//	
//	return 0;
//}





