#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	printf("%d\n", arr[2][4]);

int main()
{
	int i = 0;
	int arr[3][5] = { 0 };
	//����
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}