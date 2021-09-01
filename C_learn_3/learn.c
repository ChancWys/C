#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//int Max(int a, int b)
//{
//	if (a>b)
//		return a;
//	else
//		return b;
//}
//int main()
//{
//	int num1 = 10, num2 = 20, max = 0;
//	max = Max(num1, num2);
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(a)); //4
//	printf("%d\n", sizeof(int)); //4
//	printf("%d\n", sizeof a); //4
//	printf("%d\n", sizeof int); //err
//	printf("%d\n", sizeof (arr)); //24//计算数组大小，单位是字节
//	printf("%d\n",sizeof(arr)/sizeof(arr[0])) //6
//	return 0;
//}

//int main()
//{
//	int a = 0;//4个字节，32位
//	int b = ~a;
//	//~--按位取反
//	//原码，反码，补码
//	//负数在内存中存储时，存储的是二进制的补码
//	printf("%d\n", b);//使用的， 打印的是这个数的补码
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++; //后置++，先使用，再++
//	//int c = ++a; //前置++，先++，再使用
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 3.14;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10, b = 20, max = 0;
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
//}
//void test()
//{
//	 static int a = 1;//a是一个静态局部变量
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


#define MAX 100
//#define 定义的标识符常量
#define MAX(X,Y) (X>Y?X:Y)	//宏的定义
//#define 可以定义宏-带参数


int main()
{
	int a = 10, b = 20;
	int max = 0;
	//宏的方式
	max = MAX(a, b);
	printf("%d\n", max);
	return 0;
}