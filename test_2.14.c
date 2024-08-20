#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//static修饰全局变量
//static int g_val = 2022;

//static修饰函数
//static int Add(int x, int y)
//{
//	return x + y;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d", (a / b), (a % b));
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d\n", &age);
//
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("禁止饮酒\n");
//	}
//	else
//		printf("成年\n");
//	return 0;
//}





//判断一个数是否为奇数
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	if (1 == a % 2)
//		printf("奇数");
//	else
//		printf("偶数");
//
//	return 0;
//}

//判断1-100之间的奇数
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (1 == i % 2)
//			printf("%d ", i);
//	}
//	return 0;
//}



//求m,n的值
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d", m, n);
//
//	return 0;
//}
//n=3,m=5



//转换以下ASCII码为对应字符并输出
//73,32,99,97,110,32,100,111,32,105,116,33
//int main()
//{
//	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	
//	int i = 0;
//	//sizeof(arr):数组的总大小，单位是字节
//	//sizeof(arr[0]):数组元素的大小
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组中元素的个数
//
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}



//出生日期输入输出
//int main()
//{
//	//输入数据
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);//%m(m=整数)来规定输入域宽
//
//	//输出
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);//%02d使用0补齐两位
//	printf("date=%02d\n", date);
//
//	return 0;
//}




//学生基本信息输入输出
//int main()
//{
//	//输入
//	int sno = 0;
//	float C = 0.0f;
//	float math = 0.0f;
//	float eng = 0.0f;
//	scanf("%d;%f,%f,%f", &sno, &C, &math, &eng);
//	//输出
//	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", sno, C, math, eng);
//	//%.2f指浮点类型保留两位小数
//	return 0;
//}




//printf的返回值
//int main()
//{
//	int n = printf("Hello world!");
//	printf("\n%d", n);
//	return 0;
//}




//输出printf("Hello world\n");
// cout << "Hello world" >> end1;
// 转义字符

//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("cout << \"Hello world\" >> end1;");
//
//	return 0;
//}



//输入四个数，求出最大值并输出
//int main()
//{
//	//输入
//	int arr[4] = { 0 };
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//
//	//输出
//	int max = arr[0];
//	for(i=1;i < 4;i++)
//	{
//		if (max < arr[i])
//				max = arr[i];
//	}
//	printf("%d\n", max);
//	return 0;
//}




//计算球体的体积
//int main()
//{
//	float r = 0.0f;
//	float V = 0.0f;
//	scanf("%f", &r);
//	V = 4 / 3.0 * 3.1415926 * r*r*r;
//	printf("%.3f\n", V);
//	return 0;
//}




//计算体重指数
//int main()
//{
//	int g = 0;
//	int h = 0;
//	scanf("%d %d", &g, &h);
//
//	float BMI = 0.0f;
//	BMI = g / (0.01 * h * 0.01 * h);
//	printf("%.2f", BMI);
//
//	return 0;
//}




//计算n的阶乘
//int main()
//{
//	//输入数据
//	int i = 0;
//	int n = 0;
//	int z = 1;
//	scanf("%d", &n);
//
//	//计算
//	for (i = 1; i <= n; i++)
//	{
//		z *= i;
//	}
//
//	//输出
//	printf("%d\n", z);
//	return 0;
//}



//计算1!+2!+3!+····+n!
//int main()
//{
//	//输入数据
//	int i = 0;
//	int n = 0;
//	int n1 = 1;
//	int n2 = 0;
//	scanf("%d", &n);
//
//	//计算
//	for (i = 1; i <= n; i++)
//	{
//		n1 = n1 * i;
//		n2 = n2 + n1;
//	}
//	printf("%d\n", n2);
//	return 0;
//}




//在有序数组中查找具体的某个数
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("请输入1-10之间的数：");
//	int n = 0;
//	scanf("%d", &n);
//	int sz = sizeof(arr) / sizeof(arr[0]);


	//遍历查找
	/*int i = 0;
	while (i <= sz)
	{
		if (arr[i] == n)
		{
			printf("该数字在数组中的的下标为:%d\n", i);
			break;
		}
		i++;
		if (i == sz)
			printf("未找到该数字,请重新输入");
	}*/


	//折半查找(二分查找)
	//折半查找的条件:必须是有序数组
//	int left = 0;
//	int right = sz - 1;
//	
//
//	while (left <= right)
//	{
//
//		//int mid = (left + right) / 2;
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("该数字在数组中的的下标为:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("未找到该数字，请重新输入");
//	}
//	
//
//	return 0;
//}



//制作以下效果
// welcome to bit!!!!
// ##################
// w################!
// we##############!!
// wel############!!!
// ....
// welcome to bit!!!!

//#include <windows.h>
//#include <stdlib.h>
//
//int main()
//{
//	char arr1[] = { "welcome to bit!!!!" };
//	char arr2[] = { "##################" };
//
//	//char buf[] = "abc";
//	//[a b c \0]
//
//	int left = 0;
//	int right = strlen(arr1) - 1;//strlen()计算字符串的长度
//
//	while(left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//
//		Sleep(1000);
//		//间隔1000ms
//		//使用Sleep()时，需要添加 #include <windows.h>头文件
//
//		system("cls");
//		//system是一个库函数,system("cls")用来清除屏幕
//		//使用system()前需要添加 #include <stdlib.h>头文件
//
//
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	
//	return 0;
//}



//编写代码实现，模拟用户登录情景，并且只能登陆三次。
//只允许输入三次密码，如果密码正确则提示登陆成功，如果三次均输入错误，则退出程序。

//#include <string.h>
//
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:");
//		scanf("%s", password);
//		//数组名可以不取地址，数组名本身就是地址
//
//		if (strcmp(password,"abcdef") == 0)
//		//比较2个字符串是否相等，不能使用==，而应该使用一个库函数:strcmp()
//		//如果strcmp(字符串1，字符串2) == 0，则两个字符串相等，反之则不等
//		//使用strcmp()需要使用头文件 #include <string.h>
//
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，你还有%d次输入机会\n", 2 - i);
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均输入错误,退出程序\n");
//	}
//
//	return 0;
//}



//猜数字游戏实现
//#include <time.h>
//#include <stdlib.h>
//
//void menu()
//{
//	printf("---------------------------------\n");
//	printf("-----------1.开始游戏------------\n");
//	printf("-----------0.退出游戏------------\n");
//	printf("---------------------------------\n");
//
//}
//
//void game()
//{
//	//生成随机数
//
//	int ret = rand() % 100 + 1;//生成随机数的函数
//	//%100 随机数取值范围0-99
//
//	//猜数字
//	int i = 0;
//	
//	
//	while (1)
//	{
//
//		printf("请输入你要猜的数字:");
//		scanf("%d", &i);
//		if (i > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (i < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你,猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//
//	int select = 0;
//	srand((unsigned int)time(NULL));
//	//time()获取时间戳,time为指针类型,使用time()前需加上#include <time.h>
//	//用unsigned int 把时间戳转换为srand()类型,使用srand()前需加上#include <stdlib.h>
//	//srand()用于设置随机数的起点
//	do
//	{
//		menu();
//		printf("请输入你的选择:");
//		scanf("%d", &select);
//
//		switch (select)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新输入\n");
//			break;
//
//		}
//
//	} while (select);
//
//
//
//	return 0;
//}




//goto语句用于跳出多层循环嵌套，其他时候不推荐
//关机程序
//1.电脑运行起来后，1分钟内关机
//2.如果输入:我是猪，就取消关机

//#include <string.h>
//
//int main()
//{
//	char input[20] = { 0 };
//again:
//	system("shutdown -s -t 60");
//	printf("你的电脑将在一分钟后关机，输入:我是猪，可以取消关机\n");
//	scanf("%s", input);
//
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		printf("取消关机\n");
//	}
//	else
//	{
//		printf("大胆！再给你一次机会\n");
//		goto again;
//		//goto xxx 可以直接跳转到xxx的位置，然后继续执行
//	}
//
//	return 0;
//}




//打印100-200之间的素数
//素数是只能被1和自身整除的数
//#include <math.h>

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断是否为素数，如果是则打印
//		//拿2到i-1之间的数除i
//		int j = 0;
//		int flag = 1;
//
//
//		//for (j = 2; j <= i - 1; j++)
//		for (j = 2; j <= sqrt(i); j++)
//		//sqrt()开平方 为数学库函数
//		//sqrt(i) == 根号下i，使用前需要添加头文件#include <math.h>
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//
//
//	return 0;
//}

//int is_prime(int x)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++)
//	{
//		if (x % j == 0)
//		{
//			return 0;
//			//return可以直接结束程序,break只能跳出循环
//		}
//	}
//	
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}




//写一个函数判断一年是不是闰年


//打印1000~2000之间的闰年
//1.能被4整除，并且不能被100整除是闰年
//2.能被400整除也是闰年

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i ++)
//	{
//		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//
//	return 0;
//}


//int is_leap_year(int x)
//{
//	if ((x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (is_leap_year(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//
//	return 0;
//}





//写一个函数，实现一个整型有序数组的二分查找
//注:数组传参实际上传递的是数组首元素的地址，而不是整个数组
//所以不能在函数内部计算一个函数参数部分的元素个数

//int binary_search(int arr[], int p, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > p)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < p)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("未找到该数字\n");
//	}
//	else
//	{
//		printf("找到了，该数字的下标为%d\n", ret);
//	}
//
//	return 0;
//}




//写一个函数，每调用一次这个函数，就会将num的值增加
//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//
//	return 0;
//}