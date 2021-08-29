#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	//const——常属性
//	//const修饰的常变量。（具有常属性性质的变量）
//	const int num = 4;//3, 100, 1.12等都是字面常量
//	print("%d\n", num);
//	num = 8;
//	print("%d\n", num);
//	return 0;
//}

//int main()
//{
//	const int n = 10;
//	int arr[n] = { 0 };
//	return 0;
//}


//#define定义的标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}


//枚举常量（一一列举）（enum）
//enum sex
//{
//	MALE,
//	FAMALE,
//	SECRET
//};
//int main()
//{
//	enum sex s = FAMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FAMALE);
//	printf("%d\n", SECRET);
//	printf("%d\n", s);
//	return 0;
//}


////字符串
//int main()
//{
//	"sdsdadxa";
//	""；//空字符串
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";//数组
//	char arr2[] = { 'a','b','c',0 };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' ,0};
//	printf("% d\n", strlen(arr1));//strlen -string length --计算字符串长度
//	printf("% d\n", strlen(arr2));
//	return 0;
//}
//
//int main()
//{
//	printf("c:\\test\\learn\\test.c");
//	return 0;
//}

//int main()
//{
//	printf("%s\n", "\"");
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("c:\test\39\tect.c"));
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b, d = a | b, e = a ^ b;
//	printf("%d %d %d", c, d, e);
//	return 0;
//}

//单目操作符
//双面操作符
//三目操作符
int main()
{
	int a = 10, b = 20;
	//a+b //双目操作符
	printf("%d\n", !a);//C语言中我们表示真假  0-假	非o-真	
	//单目操作符	！逻辑反操作	-  +  &取地址	sizeof	
	//~对一个数的二进制按位取反
	//--  ++前置、后置
	//* 简介访问操作符（解引用操作符）
	//（类型）强制类型转换
	return 0;
}