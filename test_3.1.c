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

//%d - ��ӡ����
//%s - ��ӡ�ַ���
//%c - ��ӡ�ַ�
//%f - ��ӡfloat���͵�����
//%lf - ��ӡdouble���͵�����
//%zu - ��ӡsizeof�ķ���ֵ

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

//ת���ַ�


//int main()
//{
//	//printf("%c\n", '\'');/* \'- �õ����Ų��ڳɶ����������һ���������ַ�*/
//	//printf("%s\n", "\"");/* \" - �뵥����ͬ��*/
//	//printf("abc\n\0def");  /* \0 - ��ʾ�����ַ�*/
//	//printf("abc\\0def"); /* \\ - ��ʾ��б�ܣ�����\����ʾΪת���ַ�*/
//	//printf("\a"); /* \a - ��������������*/
//	/*\n - ��ʾ����
//	\r - ��ʾ�س�
//	\t - ˮƽ�Ʊ��(table��)*/
//	printf("%c\n", '\130'); /*\ddd - ��ʾ1 - 3���˽��Ƶ�ASCII����ֵ*/
//	printf("%c\n", '\x65'); /*\xdd - ��ʾ2��ʮ�����Ƶ�ASCII����ֵ*/
//
//	/*��ϰ*/
//	printf("%d\n", strlen("c:\test\628\test.c"));
//	return 0;
//}


//ѡ�����
//int main()
//{
//
//	int input = 0;
//	printf("���ȥ�ô����� (ѡ��1 or 0)");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("��֣���offer\n");
//	}
//	else
//	{
//		printf("�ؼ�������\n");
//	}
//	return 0;
//}


//whileѭ�����
//int main()
//{
//	int line = 0;
//
//	while (line < 20000)
//	{
//		printf("д����:%d\n", line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("����Ŭ��\n");
//	}
//
//	return 0;
//}

//����������������
//int main()
//{
//	//������������������ֵ0
//	int n1 = 0;
//	int n2 = 0;
//	//����
//	scanf("%d %d", &n1, &n2);
//	//���
//	int sum = n1 + n2;
//	//��ӡ
//	printf("%d\n", sum);
//	return 0;
//}

//���ú��������������

//���庯��
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

//C����������:һ����ͬ����Ԫ�صļ���


//int main()
//{
//	int arr1[10];//10��Ԫ��
//  int arr2[] = {1,2,3}; //������Ԫ�أ������ʼ�����Բ�ָ�������С
//	int arr[11] = {0,1,2,3,4,5,6,7,8,9,10};
//	//��ӡ�����е���Ԫ��
//	printf("%d\n", arr[5]);
//	//��ӡȫ��Ԫ��
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
//	printf("%d\n", strlen(arr));//������û�н����ַ������Դ�ӡ�����ֵ
//	char arr[4] = { 'b','i','t' };//����ȫ��ʼ����ʣ��Ĳ���Ĭ�ϳ�ʼ��Ϊ0
//	
//	int a = 0;
//	int arr[a];//C99�Ժ����鳤�ȿ���Ϊ���������ǲ��ܳ�ʼ��
//	return 0;
//}

//����һ�������Ƚ������������ֵ
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


//������������+ - * / %
//int main()
//{
//	int a = 7 % 2; // %Ϊȡ�������������ֻ��������
//	//����(/)�����˶���������ʱ��ִ�е��������������������ֻҪ��һ����������ִ�и������ĳ���
//	float b = 7 / 2.0;
//	printf("%d\n", a);
//	printf("%f\n", b);
//	printf("%.1f\n", b);// %.()f ������ȡ���پͱ�������λС��
//
//
//	return 0;
//}

//��λ������: >> << (�漰������)
//λ��������& ^ |

//��ֵ��������= += -= *= /= ^= |= >>= <<=
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

//��Ŀ��������! -(����) + &(ȡ��ַ) sizeof ~(��һ�����Ķ����ư�λȡ��) -- ++ *(��ӷ��ʲ�����)
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
//	//sizeof(�����������ͳ���,��λ���ֽ�)
//	//int a = 10;
//	//printf("%d\n", sizeof(a));//4
//	//printf("%d\n", sizeof(int));//4
//	//printf("%d\n", sizeof a);//4 ��Ϊsizeof�ǲ��������������ſ���ʡ��
//
//	//int arr[10] = { 0 };
//	//printf("%d\n", sizeof(arr));//40
//	//printf("%d\n", sizeof(arr[0]));//4
//	//printf("%d\n", sizeof(arr)/sizeof(arr[0]));//10 - �����Ԫ�ظ���
//
//	//int a = 10;
//	//int b = a++;//����++����ʹ�ã���++
//	////int b =a; a = a + 1;
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//
//	//int a = 10;
//	//int b = ++a;//ǰ��+=����++����ʹ��
//	////a = a + 1; int b + a;
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//
//	//(����)ǿ������ת����
//	int a = (int)3.14;//������ ������Ĭ��Ϊdouble����
//	printf("%d\n", a);
//
//	return 0;
//}

//�߼���������&&(�߼���) ||(�߼���)
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


//����������(��Ŀ������)��exp1 ? exp2 : exp3(exp1Ϊ�������exp2,��֮���exp3)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int r = a > b ? a : b;
//	printf("%d\n", r);
//
//	return 0;
//}


//���ű��ʽ���Ƕ��Ÿ�����һ�����ʽ: exp1, exp2, exp3... expn
//�ص㣺�����������μ��㣬�������ʽ�Ľ�������һ�����ʽ�Ľ��
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


// typedef:����������
//typedef unsigned int uint;//��unsigned int ������Ϊuint
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


//static����:
//1.����ȫ�ֱ�����static����ȫ�ֱ�����ʱ�����ȫ�ֱ������ⲿ�������Ծͱ�����ڲ��������ԡ�
// ����Դ�ļ��Ͳ�����ʹ�����ȫ�ֱ�����
// 
//2.���ξֲ�������static���ξֲ�������ʱ�򣬾ֲ���������������Ҳ�����١�
// �����ϣ�static���ξֲ�������ʱ�򣬸ı��˱����Ĵ洢λ�á�
// ���ֲ���������Ϊ��̬��������̬�������������ںͳ������������һ����
// 
//3.���κ�����һ���������������ⲿ�������ԣ���static���κ�ͱ���ڲ���������
//��static����ȫ�ֱ�������

//����ȫ�ֱ���
//extern int g_val;//extern:�����ⲿ����
//
//int main()
//{
//
//	printf("%d", g_val);
//	return 0;
//}


//���ξֲ�����
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

//���κ���
//extern int Add(int x, int y);//���������ⲿ��������
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = Add(a, b);
//	printf("%d", z);
//	return 0;
//}


//define�����ʶ������
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

//define�����(�����в���)
//define���ǹؼ��֣���Ԥ����ָ��

//#define ADD(x,y) ((x)+(y))
//#define ����+��Ĳ�����������������+����
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//	return 0;
//}


//ָ��
//���->��ַ->��ַҲ����Ϊָ�� ���ָ�루��ַ���ı�������ָ�����
//int main()
//{
	//int a = 10;//���ڴ�����4���ֽڣ��洢10
	//&a;//&ȡ��ַ������
	//printf("%p\n", &a); //%p��ӡ��ַΪ16����
	//int* p = &a;//p����ָ�����
	////int ˵��pָ��Ķ�����int���͵� *˵��p��ָ�����
	//*p = 20;
	//// *p �����ò�������ͨ��p�д�ŵĵ�ַ���ҵ�p��ָ��Ķ���*p����pָ��Ķ���
	//printf("%d\n", a);

	//char ch = 'w';
	//char * pc = &ch;

	//ָ������Ĵ�С
	//������ʲô���͵�ָ�룬�����ڴ���ָ�����
	//ָ�������������ŵ�ַ��
	//ָ������Ĵ�Сȡ����һ����ַ��ŵ�ʱ����Ҫ���ռ�
	//32λ�����ϵĵ�ַ��32bitλ - 4byte������ָ������Ĵ�С��4���ֽ�
	//64λ�����ϵĵ�ַ��64bitλ - 8byte������ָ������Ĵ�С��8���ֽ�

//	printf("%zu\n", sizeof(int*));//8
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(double*));
//	printf("%zu\n", sizeof(short*));
//
//	return 0;
//}


//�ṹ��struct:��һЩ��һ���������һ���������
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
//	//�ṹ��ָ�����->��Ա��
//	printf("%s %d %s %s", ps->name, ps->age, ps->sex, ps->tele);
//}
//
//int main()
//{
//	struct Stu s = {"����", 20, "��", "13978968754"};
//
//	//�ṹ�����.��Ա��
//	printf("%s %d %s %s", s.name, s.age, s.sex, s.tele);
//	print(&s);
//	return 0;
//}


//if���  if������������Ҫ��{}

//int main()
//{
//	int grade = 0;
//	scanf("%d", &grade);
//
//	if (grade < 60)
//		printf("������");
//	else if (grade >= 60 && grade < 80)
//		printf("����");
//	else if (grade >= 80 && grade < 90)
//		printf("����");
//	else
//		printf("����");
//	return 0;
//}


//switch��䣺���ڶ��֧
//switch(���α��ʽ)
//{
//	 �����;
//}
 
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;//break����ѭ��
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
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
//		printf("ѡ�����\n");
//		break;
//	}
//
//	return 0;
//}



//whileѭ��
//break�������õ���ֹѭ��
//continue��������ѭ������Ĵ��룬ֱ��ȥ�жϲ��֣�������һ��ѭ�����ж�

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//
//		i++; 
//		if (5 == i)
//			/*break;*///break����������ֹwhileѭ��
//			continue;//��ǰ��������ѭ����continue�������䲻��ִ��
//
//		printf("%d ", i);
//	}
//
//	return 0;
//}


//int main()
//{
//	//int ch = getchar();//getchar()�����ַ������ص�ΪASCII��ֵ
//	//printf("%c\n", ch);
//	//putchar(ch);//putchar()�������������,�����ֵĬ�Ϻ��\n
//
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//
//	/*getchar();*///��ȡ��\n
//
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("��ȷ������(Y/N):>");
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



//��ӡ0-9������
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




//for(���ʽ1;���ʽ2;���ʽ3)
//ѭ�����
//1.��Ҫ��forѭ�������޸�ѭ����������ֹforѭ��ʧȥ����
//2.����for����ѭ�����Ʊ�����ȡֵ����"ǰ�պ�����"д��

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)//������
//	{
//		if (i == 5)
//			continue;//ֱ�������������ص�������
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	//for (;;)
//	////forѭ�����жϲ���ʡ����ζ���ж����������
//	//	printf("hehe\n");
//
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		//�жϲ�����k=0Ϊ��ֵkΪ�٣����Բ�����ѭ������ѭ��0��
//	{
//		k++;
//	}
//
//
//	return 0;
//}




//do
//		ѭ�����;
//while(���ʽ);
//int main()
//{
//	int i = 0;
//	do
//	{
//		/*if (i == 5)
//			break;
//			continue;*/
//		//break��continue��������while��forѭ����������ͬ
//		printf("%d ", i);
//		i++;
//
//	} while (i <= 10);
//	return 0;
//}




//��.����:������Ϊ�⺯�����Զ��庯��



//�⺯��
//strcpy����


//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//
//	strcpy(arr1, arr2);
//	//strcpy(Ŀ��,Դͷ);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}


//�Զ��庯��

//�����Ķ���
//int max(int a, int b)
//{
//	return (a > b ? a : b);
//	//�ж�ʽ? ���ʽ1 : ���ʽ2
//	//��a>b�������һ�����ʽ����֮������ڶ���
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//
//	int m = max(x,y);
// //�����ĵ���
//	printf("%d\n", m);
//	return 0;
//}




//дһ�����������������ͱ�����ֵ

//*p��*qΪ�β�
//void Swap(int* p, int*q)
//{
//	int z = *p;//z=a
//	*p = *q;//a=b
//	*q = z;//b=a
//}
//
////��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ����
////���βε��޸Ĳ���Ӱ��ʵ��
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//����
//	printf("����ǰ��ֵΪ:a=%d, b=%d\n", a, b);
//	Swap(&a,&b);
//	//a��bΪʵ��
//	printf("�������ֵΪ:a=%d, b=%d\n", a, b);
//
//
//	return 0;
//}




//5.������Ƕ�׵��ú���ʽ����

//5.1Ƕ�׵���
//��������Ƕ�׵��ã����ǲ���Ƕ�׶���
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


//5.2��ʽ����
#include <string.h>
int main()
{
	//1.
	int len = strlen("abcdef");
	printf("%d\n", len);

	//2.��ʽ
	printf("%d\n", strlen("abcdef"));


	printf("%d", printf("%d", printf("%d", 43)));//4321
	printf("%d",printf("%d", 43));//432
	printf("%d", 43);//43
	//printf����ֵΪ�ַ�����ӡ�ĸ��� 
	return 0;
}