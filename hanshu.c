#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//函数的嵌套调用和链式访问
//1.嵌套调用
/*
void new_line()
{
	printf("hehe\n");
}
void three_line()
{
	for (int i = 0; i < 3; i++)
	{
		new_line();
	}
}

int main()
{
	three_line();
	return 0;
}*/

//链式访问：把一个函数的返回值作为另一个函数的参数
/*
int main()
{
	int len = 0;
	//1
	len = strlen("abc");
	printf("%d\n", len);
	//2
	printf("%d\n",strlen("abc"));
	return 0;
}
*/

/*
int main()
{
	printf("%d", printf("%d", printf("%d",43)));  //首先打印的是43
	//printf("%d", printf("%d", 2));接着打印43的个数2；
	//printf("%d", 1);这里打印2的个数是1
	//打印的结果是4321
	//printf：返回值是打印的字符的个数	
	return 0;
}*/


#include "add.h" //自己引用的头文件用双引号
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	//函数调用
	sum = Add(a, b);
	printf("%d\n",sum);
	return 0;
}
//函数的声明一般要放在头文件中的；出现在函数的使用之前，要满足先声明后使用
