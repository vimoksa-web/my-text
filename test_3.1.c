#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
//int main()
//{
//	int a = 3;
//	printf("%d\n", a);
//
//	return 0;
//}

//%d - 打印整型
//%s - 打印字符串
//%c - 打印字符
//%f - 打印float类型的数据
//%lf - 打印double类型的数据
//%zu - 打印sizeof的返回值

//int a = 20;
//
//int main()
//{
//	const int a = 'b';
//
//	//char arr[a] = {};
//
//	printf("%d\n", a);
//
//	return 0;
//}


//int main() 
//{
//	char arr1[] = { 'a','b','c','d','e','f' };
//	char arr2[] = "abcdef";
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}

//转义字符


//int main()
//{
//	//printf("%c\n", '\'');/* \'- 让单引号不在成对输出，而是一个单独的字符*/
//	//printf("%s\n", "\"");/* \" - 与单引号同理*/
//	//printf("abc\n\0def");  /* \0 - 表示结束字符*/
//	//printf("abc\\0def"); /* \\ - 表示反斜杠，防治\被表示为转义字符*/
//	//printf("\a"); /* \a - 触发警报，蜂鸣*/
//	/*\n - 表示换行
//	\r - 表示回车
//	\t - 水平制表符(table键)*/
//	printf("%c\n", '\130'); /*\ddd - 表示1 - 3个八进制的ASCII编码值*/
//	printf("%c\n", '\x65'); /*\xdd - 表示2个十六进制的ASCII编码值*/
//
//	/*练习*/
//	printf("%d\n", strlen("c:\test\628\test.c"));
//	return 0;
//}


//选择语句
//int main()
//{
//
//	int input = 0;
//	printf("你会去敲代码吗？ (选择1 or 0)");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("坚持，好offer\n");
//	}
//	else
//	{
//		printf("回家卖红薯\n");
//	}
//	return 0;
//}


//while循环语句
//int main()
//{
//	int line = 0;
//
//	while (line < 20000)
//	{
//		printf("写代码:%d\n", line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("继续努力\n");
//	}
//
//	return 0;
//}

//求任意两个整数和
//int main()
//{
//	//定义两个整数，并赋值0
//	int n1 = 0;
//	int n2 = 0;
//	//输入
//	scanf("%d %d", &n1, &n2);
//	//求和
//	int sum = n1 + n2;
//	//打印
//	printf("%d\n", sum);
//	return 0;
//}

//利用函数对两个数求和

//定义函数
//int ADD(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z; //return x + y;
//}
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//
//	scanf("%d %d", &n1, &n2);
//
//	int num = ADD(n1, n2);
//
//	printf("%d\n", num);
//	return 0;
//}

//C语言中数组:一组相同类型元素的集合


//int main()
//{
//	int arr1[10];//10个元素
//  int arr2[] = {1,2,3}; //有三个元素，数组初始化可以不指定数组大小
//	int arr[11] = {0,1,2,3,4,5,6,7,8,9,10};
//	//打印数组中单个元素
//	printf("%d\n", arr[5]);
//	//打印全部元素
//	int i = 0;
//	while (i < 11)
//	{
//		printf("%d,", arr[i]);
//		i += 1;
//	}
//
//	return 0;
//}


//int main()
//{
//	int a = 40;
//	int c = 122;
//	int b = (-8 + 22) * a - 10 + c / 2;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	
//	char arr[] = { 'b','i','t'};
//	printf("%d\n", strlen(arr));//数组中没有结束字符，所以打印出随机值
//	char arr[4] = { 'b','i','t' };//不完全初始化，剩余的部分默认初始化为0
//	
//	int a = 0;
//	int arr[a];//C99以后数组长度可以为变量，但是不能初始化
//	return 0;
//}

//构造一个函数比较两个数的最大值
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	printf("%d\n", MAX(a, b));
//
//	return 0;
//}


//


//算术操作符：+ - * / %
//int main()
//{
//	int a = 7 % 2; // %为取余操作符，两端只能是整数
//	//除号(/)的两端都是整数的时候，执行的是整数除法，如果两端只要有一个浮点数就执行浮点数的除法
//	float b = 7 / 2.0;
//	printf("%d\n", a);
//	printf("%f\n", b);
//	printf("%.1f\n", b);// %.()f 括号里取多少就保留多少位小数
//
//
//	return 0;
//}

//移位操作符: >> << (涉及二进制)
//位操作符：& ^ |

//赋值操作符：= += -= *= /= ^= |= >>= <<=
//int main()
//{
//	int a = 0;
//	a = 5;
//	a += 3; // ==  a = a + 3;
//	printf("%d\n", a);
//	a %= 3; // ==  a = a % 3;
//	printf("%d\n", a);
//
//	return 0;
//}

//单目操作符：! -(负号) + &(取地址) sizeof ~(对一个数的二进制按位取反) -- ++ *(间接访问操作符)
//int main()
//{
//	//int a = 1;
//	//if (!a)
//	//{
//	//	printf("lalala\n");
//	//}
//	//else
//	//{
//	//	printf("warning\n");
//	//}
//
//	//sizeof(操作数的类型长度,单位是字节)
//	//int a = 10;
//	//printf("%d\n", sizeof(a));//4
//	//printf("%d\n", sizeof(int));//4
//	//printf("%d\n", sizeof a);//4 因为sizeof是操作符，所以括号可以省略
//
//	//int arr[10] = { 0 };
//	//printf("%d\n", sizeof(arr));//40
//	//printf("%d\n", sizeof(arr[0]));//4
//	//printf("%d\n", sizeof(arr)/sizeof(arr[0]));//10 - 数组的元素个数
//
//	//int a = 10;
//	//int b = a++;//后置++，先使用，后++
//	////int b =a; a = a + 1;
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//
//	//int a = 10;
//	//int b = ++a;//前置+=，先++，后使用
//	////a = a + 1; int b + a;
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//
//	//(类型)强制类型转换符
//	int a = (int)3.14;//浮点数 编译器默认为double类型
//	printf("%d\n", a);
//
//	return 0;
//}

//逻辑操作符：&&(逻辑与) ||(逻辑或)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	if (a && b)
//	{
//		printf("hehe\n");
//	}
//	int a = 0;
//	int b = 20;
//	if (a || b)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}


//条件操作符(三目操作符)：exp1 ? exp2 : exp3(exp1为真则输出exp2,反之输出exp3)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int r = a > b ? a : b;
//	printf("%d\n", r);
//
//	return 0;
//}


//逗号表达式就是逗号隔开的一串表达式: exp1, exp2, exp3... expn
//特点：从左向右依次计算，整个表达式的结果是最后一个表达式的结果
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	//		 c=8	a=28   c=5
//	int r = (c=a-2, a=b+c, c-3);
//	printf("%d\n", r);
//
//	return 0;
//}


// typedef:类型重命名
//typedef unsigned int uint;//将unsigned int 重命名为uint
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	unsigned int num = 0;
//	uint num2 = 1;
//
//	struct Node n;
//	Node n2;
//
//	return 0;
//}


//static作用:
//1.修饰全局变量：static修饰全局变量的时候，这个全局变量的外部连接属性就变成了内部连接属性。
// 其他源文件就不能再使用这个全局变量。
// 
//2.修饰局部变量：static修饰局部变量的时候，局部变量出了作用域也不销毁。
// 本质上，static修饰局部变量的时候，改变了变量的存储位置。
// 将局部变量修饰为静态变量，静态变量的生命周期和程序的生命周期一样。
// 
//3.修饰函数：一个函数本来具有外部链接属性，被static修饰后就变成内部连接属性
//与static修饰全局变量相似

//修饰全局变量
//extern int g_val;//extern:引用外部链接
//
//int main()
//{
//
//	printf("%d", g_val);
//	return 0;
//}


//修饰局部变量
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//修饰函数
//extern int Add(int x, int y);//函数具有外部链接属性
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = Add(a, b);
//	printf("%d", z);
//	return 0;
//}


//define定义标识符常量
//#define NUM 100
//
//int main()
//{
//	printf("%d\n", NUM);
//	int n = NUM;
//	printf("%d\n", n);
//	int arr[NUM] = { 0 };
//	printf("%d\n", arr[0]);
//
//	return 0;
//}

//define定义宏(宏是有参数)
//define不是关键字，是预处理指令

//#define ADD(x,y) ((x)+(y))
//#define 宏名+宏的参数，参数是无类型+宏体
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//	return 0;
//}


//指针
//编号->地址->地址也被称为指针 存放指针（地址）的变量就是指针变量
//int main()
//{
	//int a = 10;//向内存申请4个字节，存储10
	//&a;//&取地址操作符
	//printf("%p\n", &a); //%p打印地址为16进制
	//int* p = &a;//p就是指针变量
	////int 说明p指向的对象是int类型的 *说明p是指针变量
	//*p = 20;
	//// *p 解引用操作符，通过p中存放的地址，找到p所指向的对象，*p就是p指向的对象
	//printf("%d\n", a);

	//char ch = 'w';
	//char * pc = &ch;

	//指针变量的大小
	//不管是什么类型的指针，都是在创建指针变量
	//指针变量是用来存放地址的
	//指针变量的大小取决于一个地址存放的时候需要多大空间
	//32位机器上的地址：32bit位 - 4byte，所以指针变量的大小是4个字节
	//64位机器上的地址：64bit位 - 8byte，所以指针变量的大小是8个字节

//	printf("%zu\n", sizeof(int*));//8
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(double*));
//	printf("%zu\n", sizeof(short*));
//
//	return 0;
//}


//结构体struct:把一些单一类型组合在一起的做法。
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//
//void print(struct Stu* ps)
//{
//	printf("%s %d %s %s", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//	//->
//	//结构体指针变量->成员名
//	printf("%s %d %s %s", ps->name, ps->age, ps->sex, ps->tele);
//}
//
//int main()
//{
//	struct Stu s = {"张三", 20, "男", "13978968754"};
//
//	//结构体对象.成员名
//	printf("%s %d %s %s", s.name, s.age, s.sex, s.tele);
//	print(&s);
//	return 0;
//}


//if语句  if后跟多条语句需要加{}

//int main()
//{
//	int grade = 0;
//	scanf("%d", &grade);
//
//	if (grade < 60)
//		printf("不及格");
//	else if (grade >= 60 && grade < 80)
//		printf("及格");
//	else if (grade >= 80 && grade < 90)
//		printf("良好");
//	else
//		printf("优秀");
//	return 0;
//}


//switch语句：用于多分支
//switch(整形表达式)
//{
//	 语句项;
//}
 
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;//break跳出循环
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	}
//
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("选择错误\n");
//		break;
//	}
//
//	return 0;
//}



//while循环
//break用于永久的终止循环
//continue跳过本次循环后面的代码，直接去判断部分，进行下一次循环的判断

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//
//		i++; 
//		if (5 == i)
//			/*break;*///break用于永久中止while循环
//			continue;//提前结束本次循环，continue后面的语句不再执行
//
//		printf("%d ", i);
//	}
//
//	return 0;
//}


//int main()
//{
//	//int ch = getchar();//getchar()输入字符，返回的为ASCII码值
//	//printf("%c\n", ch);
//	//putchar(ch);//putchar()经过缓冲区输出,输出的值默认后加\n
//
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//
//	/*getchar();*///读取了\n
//
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("请确认密码(Y/N):>");
//	int ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//
//
//	return 0;
//}



//打印0-9的数字
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//
//	return 0;
//}




//for(表达式1;表达式2;表达式3)
//循环语句
//1.不要在for循环体内修改循环变量，防止for循环失去控制
//2.建议for语句的循环控制变量的取值采用"前闭后开区间"写法

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)//调整区
//	{
//		if (i == 5)
//			continue;//直接跳过后面代码回到调整区
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	//for (;;)
//	////for循环中判断部分省略意味着判断条件恒成立
//	//	printf("hehe\n");
//
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		//判断部分中k=0为赋值k为假，所以不进入循环，即循环0次
//	{
//		k++;
//	}
//
//
//	return 0;
//}




//do
//		循环语句;
//while(表达式);
//int main()
//{
//	int i = 0;
//	do
//	{
//		/*if (i == 5)
//			break;
//			continue;*/
//		//break和continue的作用与while和for循环中作用相同
//		printf("%d ", i);
//		i++;
//
//	} while (i <= 10);
//	return 0;
//}




//五.函数:函数分为库函数和自定义函数



//库函数
//strcpy拷贝


//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//
//	strcpy(arr1, arr2);
//	//strcpy(目标,源头);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}


//自定义函数

//函数的定义
//int max(int a, int b)
//{
//	return (a > b ? a : b);
//	//判断式? 表达式1 : 表达式2
//	//若a>b则输出第一个表达式，反之则输出第二个
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//
//	int m = max(x,y);
// //函数的调用
//	printf("%d\n", m);
//	return 0;
//}




//写一个函数交换两个整型变量的值

//*p和*q为形参
//void Swap(int* p, int*q)
//{
//	int z = *p;//z=a
//	*p = *q;//a=b
//	*q = z;//b=a
//}
//
////当实参传递给形参的时候，形参是实参的一份临时拷贝
////对形参的修改不会影响实参
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//交换
//	printf("交换前的值为:a=%d, b=%d\n", a, b);
//	Swap(&a,&b);
//	//a和b为实参
//	printf("交换后的值为:a=%d, b=%d\n", a, b);
//
//
//	return 0;
//}




//5.函数的嵌套调用和链式访问

//5.1嵌套调用
//函数可以嵌套调用，但是不能嵌套定义
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//		new_line();
//}
//int main()
//{
//	three_line();
//	return 0;
//}


//5.2链式访问
#include <string.h>
int main()
{
	//1.
	int len = strlen("abcdef");
	printf("%d\n", len);

	//2.链式
	printf("%d\n", strlen("abcdef"));


	printf("%d", printf("%d", printf("%d", 43)));//4321
	printf("%d",printf("%d", 43));//432
	printf("%d", 43);//43
	//printf返回值为字符所打印的个数 
	return 0;
}