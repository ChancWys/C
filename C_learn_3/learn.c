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
//	printf("%d\n", sizeof (arr)); //24//���������С����λ���ֽ�
//	printf("%d\n",sizeof(arr)/sizeof(arr[0])) //6
//	return 0;
//}

//int main()
//{
//	int a = 0;//4���ֽڣ�32λ
//	int b = ~a;
//	//~--��λȡ��
//	//ԭ�룬���룬����
//	//�������ڴ��д洢ʱ���洢���Ƕ����ƵĲ���
//	printf("%d\n", b);//ʹ�õģ� ��ӡ����������Ĳ���
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++; //����++����ʹ�ã���++
//	//int c = ++a; //ǰ��++����++����ʹ��
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

int main()
{
	int a = 3.14;
	printf("%d\n", a);
	return 0;
}