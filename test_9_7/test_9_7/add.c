#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a >= b)
//		printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a == b)
//		printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int a = (3 == 5);
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	if (5 == a)
//		printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 7;
//	int c = 8;
//	if (a < b && b < c)
//		printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18 && age <= 36)
//		printf("����\n");
//	else
//		printf("��������\n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	if (a > 5)
//		b = 3;
//	else
//		b = -3;
//	printf("b= %d\n", b);
//	return 0;
//} 

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	b = (a > 5 ? 3 : -3);
//	printf("b= %d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = (a > b ? a : b);
//	printf("%d\n", m);
//	return 0;
//}

//int main()
//{
//	int flag = 0;
//	scanf("%d", &flag);
//	if (!flag)
//		printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month >= 3 && month <= 5)
//		printf("����\n");
//	else if (month >= 6 && month <= 8)
//		printf("�ļ�\n");
//	else if (month >= 9 && month <= 11)
//		printf("�＾\n");
//	else if (month == 1 || month == 2 || month == 12)
//		printf("����\n");
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (((year % 4 == 0) && (year % 100 != 0 )) || (year % 400 == 0))
//		printf("����\n");
//	else
//		printf("��������\n");
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//i = a++||++b||d++;
//	printf("i = %d\n a = %d\n b = %d\n c = %d\nd = %d\n",i, a, b, c, d);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//i = a++||++b||d++;
//	printf("i = %d\n a = %d\n b = %d\n c = %d\nd = %d\n", i, a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 3 == 0)
//		printf("��������\n");
//	else if (num % 3 == 1)
//		printf("������һ\n");
//	else
//		printf("�����Ƕ�\n");
//
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int yushu = num % 3;
//	printf("������%d\n", yushu);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	switch (num % 3)
//	{
//	case 0:
//		printf("��������\n");
//		break;
//	case 1:
//		printf("������һ\n");
//		break;
//	case 2:
//		printf("�����Ƕ�\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day % 7)
//	{
//	case 0:
//		printf("������\n");
//		break;
//	case 1:
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day % 7)
//	{
//	case 0:
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//		printf("������\n"); 
//		break;
//	case 5:
//	case 6:
//		printf("��Ϣ��\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("����7\n");
//		break;
//	default:
//		printf("�����������Ӧ��1~7��Χ");
//	}
//	return 0;
//}�Լ�д��

//int main()
//{
//	int i = 0;
//	while (i >= 0 && i < 10)
//	{
//		i++;
//		printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		int i = num % 10;
//		num = num / 10;
//		printf("%d", i);
//	}
//	return 0;
//}�Լ�д��

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//		printf("%d ", i);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			sum += i;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 3; i <= 100; i+=3)
//	{
//		sum += i;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}

int main()
{
	int n = 0;
	int count = 0;
	scanf("%d", &n);
	do
	{
		count++;
		n = n / 10;
	} while (n);
	printf("%d", count);
	return 0;
}