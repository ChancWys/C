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
//struct Book//创建一个结构体类型
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	//利用结构体类型，创建一个该类型的结构体变量
//	struct Book b1 = { "C语言程序设计",55 };
//	printf("书名：%s\n", b1.name);
//	printf("价格：%d\n", b1.price);
//	b1.price = 20;
//	printf("修改后的价格：%d\n", b1.price);
//	return 0;
//}

//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct Book b1 = { "C语言程序设计",55 };
//	struct Book* pb = &b1;
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	return 0;
//}

struct Book//创建一个结构体类型
{
	char name[20];
	short price;
};
int main()
{
	//利用结构体类型，创建一个该类型的结构体变量
	struct Book b1 = { "C语言程序设计",55 };
	printf("书名：%s\n", b1.name);
	strcpy(b1.name, "C++");
	printf("修改后的书名：%s\n", b1.name);
	return 0;
}