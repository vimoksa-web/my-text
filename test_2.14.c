#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//static����ȫ�ֱ���
//static int g_val = 2022;

//static���κ���
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
//		printf("δ����\n");
//		printf("��ֹ����\n");
//	}
//	else
//		printf("����\n");
//	return 0;
//}





//�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	if (1 == a % 2)
//		printf("����");
//	else
//		printf("ż��");
//
//	return 0;
//}

//�ж�1-100֮�������
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



//��m,n��ֵ
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



//ת������ASCII��Ϊ��Ӧ�ַ������
//73,32,99,97,110,32,100,111,32,105,116,33
//int main()
//{
//	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	
//	int i = 0;
//	//sizeof(arr):������ܴ�С����λ���ֽ�
//	//sizeof(arr[0]):����Ԫ�صĴ�С
//	int sz = sizeof(arr) / sizeof(arr[0]);//����������Ԫ�صĸ���
//
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}



//���������������
//int main()
//{
//	//��������
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);//%m(m=����)���涨�������
//
//	//���
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);//%02dʹ��0������λ
//	printf("date=%02d\n", date);
//
//	return 0;
//}




//ѧ��������Ϣ�������
//int main()
//{
//	//����
//	int sno = 0;
//	float C = 0.0f;
//	float math = 0.0f;
//	float eng = 0.0f;
//	scanf("%d;%f,%f,%f", &sno, &C, &math, &eng);
//	//���
//	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", sno, C, math, eng);
//	//%.2fָ�������ͱ�����λС��
//	return 0;
//}




//printf�ķ���ֵ
//int main()
//{
//	int n = printf("Hello world!");
//	printf("\n%d", n);
//	return 0;
//}




//���printf("Hello world\n");
// cout << "Hello world" >> end1;
// ת���ַ�

//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("cout << \"Hello world\" >> end1;");
//
//	return 0;
//}



//�����ĸ�����������ֵ�����
//int main()
//{
//	//����
//	int arr[4] = { 0 };
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//
//	//���
//	int max = arr[0];
//	for(i=1;i < 4;i++)
//	{
//		if (max < arr[i])
//				max = arr[i];
//	}
//	printf("%d\n", max);
//	return 0;
//}




//������������
//int main()
//{
//	float r = 0.0f;
//	float V = 0.0f;
//	scanf("%f", &r);
//	V = 4 / 3.0 * 3.1415926 * r*r*r;
//	printf("%.3f\n", V);
//	return 0;
//}




//��������ָ��
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




//����n�Ľ׳�
//int main()
//{
//	//��������
//	int i = 0;
//	int n = 0;
//	int z = 1;
//	scanf("%d", &n);
//
//	//����
//	for (i = 1; i <= n; i++)
//	{
//		z *= i;
//	}
//
//	//���
//	printf("%d\n", z);
//	return 0;
//}



//����1!+2!+3!+��������+n!
//int main()
//{
//	//��������
//	int i = 0;
//	int n = 0;
//	int n1 = 1;
//	int n2 = 0;
//	scanf("%d", &n);
//
//	//����
//	for (i = 1; i <= n; i++)
//	{
//		n1 = n1 * i;
//		n2 = n2 + n1;
//	}
//	printf("%d\n", n2);
//	return 0;
//}




//�����������в��Ҿ����ĳ����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("������1-10֮�������");
//	int n = 0;
//	scanf("%d", &n);
//	int sz = sizeof(arr) / sizeof(arr[0]);


	//��������
	/*int i = 0;
	while (i <= sz)
	{
		if (arr[i] == n)
		{
			printf("�������������еĵ��±�Ϊ:%d\n", i);
			break;
		}
		i++;
		if (i == sz)
			printf("δ�ҵ�������,����������");
	}*/


	//�۰����(���ֲ���)
	//�۰���ҵ�����:��������������
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
//			printf("�������������еĵ��±�Ϊ:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("δ�ҵ������֣�����������");
//	}
//	
//
//	return 0;
//}



//��������Ч��
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
//	int right = strlen(arr1) - 1;//strlen()�����ַ����ĳ���
//
//	while(left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//
//		Sleep(1000);
//		//���1000ms
//		//ʹ��Sleep()ʱ����Ҫ��� #include <windows.h>ͷ�ļ�
//
//		system("cls");
//		//system��һ���⺯��,system("cls")���������Ļ
//		//ʹ��system()ǰ��Ҫ��� #include <stdlib.h>ͷ�ļ�
//
//
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	
//	return 0;
//}



//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�½���Ρ�
//ֻ���������������룬���������ȷ����ʾ��½�ɹ���������ξ�����������˳�����

//#include <string.h>
//
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:");
//		scanf("%s", password);
//		//���������Բ�ȡ��ַ��������������ǵ�ַ
//
//		if (strcmp(password,"abcdef") == 0)
//		//�Ƚ�2���ַ����Ƿ���ȣ�����ʹ��==����Ӧ��ʹ��һ���⺯��:strcmp()
//		//���strcmp(�ַ���1���ַ���2) == 0���������ַ�����ȣ���֮�򲻵�
//		//ʹ��strcmp()��Ҫʹ��ͷ�ļ� #include <string.h>
//
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("��������㻹��%d���������\n", 2 - i);
//		}
//	}
//	if (i == 3)
//	{
//		printf("����������������,�˳�����\n");
//	}
//
//	return 0;
//}



//��������Ϸʵ��
//#include <time.h>
//#include <stdlib.h>
//
//void menu()
//{
//	printf("---------------------------------\n");
//	printf("-----------1.��ʼ��Ϸ------------\n");
//	printf("-----------0.�˳���Ϸ------------\n");
//	printf("---------------------------------\n");
//
//}
//
//void game()
//{
//	//���������
//
//	int ret = rand() % 100 + 1;//����������ĺ���
//	//%100 �����ȡֵ��Χ0-99
//
//	//������
//	int i = 0;
//	
//	
//	while (1)
//	{
//
//		printf("��������Ҫ�µ�����:");
//		scanf("%d", &i);
//		if (i > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (i < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ��,�¶���\n");
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
//	//time()��ȡʱ���,timeΪָ������,ʹ��time()ǰ�����#include <time.h>
//	//��unsigned int ��ʱ���ת��Ϊsrand()����,ʹ��srand()ǰ�����#include <stdlib.h>
//	//srand()������������������
//	do
//	{
//		menu();
//		printf("���������ѡ��:");
//		scanf("%d", &select);
//
//		switch (select)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������������\n");
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




//goto��������������ѭ��Ƕ�ף�����ʱ���Ƽ�
//�ػ�����
//1.��������������1�����ڹػ�
//2.�������:��������ȡ���ػ�

//#include <string.h>
//
//int main()
//{
//	char input[20] = { 0 };
//again:
//	system("shutdown -s -t 60");
//	printf("��ĵ��Խ���һ���Ӻ�ػ�������:����������ȡ���ػ�\n");
//	scanf("%s", input);
//
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//		printf("ȡ���ػ�\n");
//	}
//	else
//	{
//		printf("�󵨣��ٸ���һ�λ���\n");
//		goto again;
//		//goto xxx ����ֱ����ת��xxx��λ�ã�Ȼ�����ִ��
//	}
//
//	return 0;
//}




//��ӡ100-200֮�������
//������ֻ�ܱ�1��������������
//#include <math.h>

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж��Ƿ�Ϊ��������������ӡ
//		//��2��i-1֮�������i
//		int j = 0;
//		int flag = 1;
//
//
//		//for (j = 2; j <= i - 1; j++)
//		for (j = 2; j <= sqrt(i); j++)
//		//sqrt()��ƽ�� Ϊ��ѧ�⺯��
//		//sqrt(i) == ������i��ʹ��ǰ��Ҫ���ͷ�ļ�#include <math.h>
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
//			//return����ֱ�ӽ�������,breakֻ������ѭ��
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




//дһ�������ж�һ���ǲ�������


//��ӡ1000~2000֮�������
//1.�ܱ�4���������Ҳ��ܱ�100����������
//2.�ܱ�400����Ҳ������

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





//дһ��������ʵ��һ��������������Ķ��ֲ���
//ע:���鴫��ʵ���ϴ��ݵ���������Ԫ�صĵ�ַ����������������
//���Բ����ں����ڲ�����һ�������������ֵ�Ԫ�ظ���

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
//		printf("δ�ҵ�������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ������ֵ��±�Ϊ%d\n", ret);
//	}
//
//	return 0;
//}




//дһ��������ÿ����һ������������ͻὫnum��ֵ����
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