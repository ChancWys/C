#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	double a = 3.14;
//	double* pd = &a;
//	printf("%d\n", sizeof(pd));
//	return 0;
//}
//
//struct Book//����һ���ṹ������
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	//���ýṹ�����ͣ�����һ�������͵Ľṹ�����
//	struct Book b1 = { "C���Գ������",55 };
//	printf("������%s\n", b1.name);
//	printf("�۸�%d\n", b1.price);
//	b1.price = 20;
//	printf("�޸ĺ�ļ۸�%d\n", b1.price);
//	return 0;
//}

//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct Book b1 = { "C���Գ������",55 };
//	struct Book* pb = &b1;
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	return 0;
//}

struct Book//����һ���ṹ������
{
	char name[20];
	short price;
};
int main()
{
	//���ýṹ�����ͣ�����һ�������͵Ľṹ�����
	struct Book b1 = { "C���Գ������",55 };
	printf("������%s\n", b1.name);
	strcpy(b1.name, "C++");
	printf("�޸ĺ��������%s\n", b1.name);
	return 0;
}