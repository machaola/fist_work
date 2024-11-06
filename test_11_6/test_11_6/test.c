#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}


void menu()
{
	printf("*************************\n");
	printf("****   1.add   2.sub  ***\n");
	printf("****   3.mul   4.div  ***\n");
	printf("****       0.exit     ***\n");
	printf("*************************\n");
}

//int main()
//{
//	int input = 0;
//	int x = 0, y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("������������������");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("������������������");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("������������������");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("������������������");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("�˳�������");
//			break;
//		default:
//			printf("���������������");
//			break;
//
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	int x = 0, y = 0;
//	int ret = 0;
//	int (*pf[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	menu();
//	printf("��ѡ��");
//	scanf("%d", &input);
//	if(input<=4 && input>=1)
//	{
//		printf("������������������");
//		scanf("%d %d", &x, &y);
//		ret = pf[input](x, y);
//		printf("%d\n", ret);
//	}
//	else if (input == 0)
//	{
//		printf("�˳�������");
//	}
//	else
//	{
//		printf("���������������");
//	}
//	return 0;
//}

void Cala(int (*pf)(int, int))
{
	int x = 0, y = 0;
	int ret = 0;
	printf("������������������");
	scanf("%d %d", &x, &y);
	ret = pf(x, y);
	printf("%d\n", ret);
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Cala(Add);
			break;
		case 2:
			Cala(Sub);
			break;
		case 3:
			Cala(Mul);
			break;
		case 4:
			Cala(Div);
			break;
		case 0:
			printf("�˳�������");
			break;
		default:
			printf("���������������");
			break;

		}
	} while (input);
	return 0;
}
