#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
//int main()
//{
//	int num[] = {5,6,4,7};
//	
//	while(num[])
//	return 0;
//}
//int* twoSum(int* nums, int numsSize, int target) {
//    int i, j;
//    int* result = NULL;
//    for (i = 0; i < numsSize - 1; i++)
//    {
//        for (j = i + 1; j < numsSize; j++)
//        {
//            if (nums[i] + nums[j] == target)
//            {
//                result = (int*)malloc(sizeof(int) * 2);
//                result[0] = i;
//                result[1] = j;
//                return result;
//            }
//        }
//    }
//    return result;
//}
//
//���ߣ�chenlele
//���ӣ�https ://leetcode.cn/problems/two-sum/solution/liang-shu-zhi-he-by-gpe3dbjds1/
//��Դ�����ۣ�LeetCode��
//����Ȩ���������С���ҵת������ϵ���߻����Ȩ������ҵת����ע��������
//int main()
//{
//	int a, b;
//	int c = 1;
//	while (c)
//	{
//		scanf("%d%d", &a , &b);
//		printf("%d", a + b);
//		printf("�㻹Ҫ���������������1\n");
//		scanf("%d", &c);
//		if (c == 1)
//		{
//			c = 1;
//		}
//		else
//		{
//			break;
//		}
//
//	}
//	return 0;
//}
// 1000
//int main()
//
//{
//
//    int a, b;
//
//    while (scanf("%d%d", &a, &b) == 2)
//
//        printf("%d\n", a + b);
//
//    return 0;
//
//}

//1001
//int main()
//{
//	printf("**************************\n");
//	printf("Hello World!\n");
//	printf("**************************\n");
//	return 0;
//}

//1002
//int main()
//{
//	int a=0, b=0, c=0;
//	scanf("%d%d%d", &a, &b, &c);
//	if ( a > b )
//	{
//		if (a > c)
//		{
//			printf("%d", a);
//		}
//		else
//			printf("%d", c);
//	}
//	else if ( a < b )
//	{
//		if ( b > c )
//		{
//			printf("%d", b);
//		}
//		else
//			printf("%d", c);
//	}
//	return 0;
//}
//���2
//#include<stdio.h>
//int main()
//{
//    int a, b, c, max;
//    scanf("%d%d%d", &a, &b, &c);
//    if (a > b)
//    {
//        if (a > c)
//            max = a;
//        else
//            max = c;
//    }
//    else
//    {
//        if (b > c)
//            max = b;
//        else
//            max = c;
//    }
//    printf("%d\n", max);
//    return 0;
//}
//�����
//int main()
//{
//	int a, b, c, max;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		max = a;
//	}
//	else
//		max = b;
//	if (c > max)
//	{
//		printf("%d", c);
//
//	}
//	else
//	{
//		printf("%d", max);
//	}
//	return 0;
//}
//1003
//int main()
//{
//	char c1 = 'C', c2 = 'h', c3 = 'i', c4 = 'n', c5 = 'a';
//	printf("%c%c%c%c%c", c1 + 4, c2 + 4, c3 + 4, c4 + 4, c5 + 4);
//	return 0;
//}
//1004
//��һͷĸţ����ÿ�������һͷСĸţ��ÿͷСĸţ�ӵ��ĸ���ͷ��ʼ��ÿ�����Ҳ��һͷСĸţ������ʵ���ڵ�n���ʱ�򣬹��ж���ͷĸţ��
//�����ʽ
//���������ɶ������ʵ����ɣ�ÿ������ʵ��ռһ�У�����һ������n(0 < n < 55)��n�ĺ�������Ŀ��������
//	n = 0��ʾ�������ݵĽ�������������
//	�����ʽ
//	����ÿ������ʵ��������ڵ�n���ʱ��ĸţ��������
//	ÿ�����ռһ�С�
//int main()
//{
//	int n = 0, b = 0, c =1 ;
//	scanf("%d", &n);
//	for (b=0 ; b<n ; b++)
//	{
//
//	}
//
//	return 0;
//}
//��ȫ����
// 
// 
// 
// 1005
//int main()
//{
//	float a;
//	scanf("%f", &a);
//	printf("%.2f", 5 * (a - 32) / 9);
//	return 0;
//}
//int main()
//
//{
//
//    double f, c;
//
//    scanf("%lf", &f);
//
//    c = 5 * (f - 32) / 9;
//
//    printf("c=%0.2lf", c);
//
//    return 0;

//}

//�ȴ�С
//int main()
//{
//	int a, b, c, d;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		if (a > c) {
//			d = a;
//		}
//		else
//			d = c;
//		
//	}
//	else if (b > a)
//	{
//		if (b > c)
//		{
//			d = b;
//		}
//		else d = c;
//		
//	}
//	printf("���������%d", d);
//	return 0;
//}

//int main()
//{
//	int a, b, c, d;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b) d = a;
//	else d = b;
//	if (c > d) d = c;
//	printf("%d", d);
//	return 0;
//}
//
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b && a > c) printf("%d", a);
//	if (b > a && b > c) printf("%d", b);
//	if (c > a && c > b) printf("%d", c);
//	return 0;
//}
//
//
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		if (c > a) printf("%d", c);
//		if (c < a) printf("%d", a);
//	}
//	if (b > a)
//	{
//		if (c > b) printf("%d", c);
//		if (c < b) printf("%d", b);
//	}
//	return 0;
//}


//int main()
//{
//	int x = 0, y;
//	printf("����������x\n");
//	scanf("%d", &x);
//	if (x < 1)
//	{
//		y = x;
//	}
//	else if (x >= 1 && x < 10)
//	{
//		y = 2 * x - 1;
//	}
//	else 
//	{
//		y = 3 * x - 11;
//	}
//	printf("���������Ϊ%d", y);
//
//	return 0;
//}


//1008
// ɵ���õ�
//int main()
//{
//	int a;
//	printf("��������ĳɼ���");
//	scanf("%d", &a);
//	if (100 >= a && 90 <= a)
//	{
//		printf("A");
//	}
//	else if (89 >= a && 80 <= a)
//	{
//		printf("B");
//	}
//	else if (79 >= a && 70 <= a)
//	{
//		printf("C");
//
//	}
//	else if (69 >= a && 60 <= a)
//	{
//		printf("D");
//	}
//	else if (59 >= a && 0 <= a)
//	{
//		printf("E");
//
//	}
//	return 0;
//}
// 
// ����������
//int main() {
//    int a;
//    scanf("%d", &a);
//    switch (a / 10) {
//    case 10:
//    case 9:
//        putchar('A');
//        break;
//    case 8:
//        putchar('B');
//        break;
//    case 7:
//        putchar('C');
//        break;
//    case 6:
//        putchar('D');
//        break;
//    default:
//        putchar('E');
//    }
//}




//int main()
//{
//	int a, b;
//	scanf("%d", &a);
//	switch (a / 10)
//	{
//		case 10:
//		case 9:
//		{
//			printf("A");
//			break;
//		}
//		case 8:
//		{
//			printf("B");
//			break;
//		}
//		case 7:
//		{
//			printf("C");
//			break;
//		}
//		case 6:
//		{
//			printf("D");
//			break;
//		}
//		default:
//			printf("E");
//
//
//	}
//
//	return 0;
//}


//1009
//����һ��������5λ��������Ҫ�� 1��������Ǽ�λ��
//2���ֱ����ÿһλ���� 
//3�������������λ���֣�
//����ԭ��Ϊ321, Ӧ���123

//�˹�д��
//int main()
//{
//	int a, b;
//	scanf("%d", &a);
//
//	printf("")
//
//	return 0;
//}

//nb��д��
//int main()
//{
//    char str[10];                       //�����ַ�������Ϊ 10
//    scanf("%s", str);                   //�������� (��Ϊ�ַ�������)
//
//    int len = strlen(str);              //��ȡ�ַ�������
//    printf("%d\n", len);                //����ַ������ȣ���Ϊ����λ��
//    for (int i = 0; i < len; i++)       //�������ұ������
//    {
//        printf("%c ", str[i]);
//    }
//    printf("\n");                       //����س�
//    for (int i = len - 1; i >= 0; i--)  //��������������
//    {
//        printf("%c", str[i]);
//    }
//    return 0;
//}

//int main() {
//    int num;                            //��������
//    scanf("%d", &num);                  //��������
//    int n = 0;                          //�������ֵ�λ��
//    if (num == 0) n = 1;                //���������0����λ��Ϊ1
//    int temp = num;                     //���� temp ������ num ���м���
//    while (temp) {                      //��tempѭ������ 10���� 0 Ϊֹ
//        n++;
//        temp /= 10;
//    }
//    printf("%d\n", n);                  //�������λ��
//    for (int i = n - 1; i >= 0; i--) {  //�ڶ�ѭ���������������
//        temp = num / pow(10, i);        //���� 10 �� i �η�
//        printf("%d ", temp % 10);       //����� 10 ȡ��
//    }
//    printf("\n");                       //����س�
//    for (int i = 0; i < n; i++) {       //����ѭ������������ѭ��
//        temp = num / pow(10, i);        //���� 10 �� i �η�
//        printf("%d", temp % 10);        //����� 10 ȡ��
//    }
//    return 0;
//}


//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}
//
//int Add(int* p)
//{
//	(*p)++;
//	return 0;
//}

//int main()
//{
//	int a, b=0;
//	scanf("%d", &a);
//	while (a != 0)
//	{
//		a = a / 10;
//		b++;
//	}
//	printf("%d", b);
//	//b = strlen(a);
//	//printf("%d", b);
//
//
//
//	return 0;
//}



//int main()
//{
//
//	return 0;
//}


//1010
// ��ҵ���ŵĽ������������ɡ�������ڻ����100000Ԫ�ģ��������10%;
//�������100000Ԫ������200000Ԫ��100000 < I��200000��ʱ������100000Ԫ�Ĳ��ְ�10����ɣ�����100000Ԫ�Ĳ��֣������ 7.5 %;
//200000 < I��400000ʱ������200000Ԫ�����԰������취��ɣ�����ͬ��������200000Ԫ�Ĳ��ְ�5����ɣ�
//	400000 < I��600000Ԫʱ������400000Ԫ�Ĳ��ְ�3����ɣ�600000 < I��1000000ʱ������600000Ԫ�Ĳ��ְ�1.5 % ��ɣ�
//	I > 1000000ʱ������1000000Ԫ�Ĳ��ְ�1 % ��ɡ��Ӽ������뵱������I, ��Ӧ������������
// 





//int main()
//{
//	int a, b, c;
//	scanf("%d", &a);
//	b = a / 100000;
//	if (b < 1)
//		c = a / 10;
//	else if (1 <= b && 2 > b)
//		c = 10000 + (a - 100000) * 0.075;
//	else if (2 <= b && 4 > b)
//		c = 17500 + (a - 200000) * 0.05;
//	else if (4 <= b && 6 > b)
//		c = 27500 + (a - 400000) * 0.03;
//	else if (6 <= b && 10 > b)
//		c = 33500 + (a - 600000) * 0.015;
//	else
//		c = 39500 + (a - 1000000)*0.01;
//	printf("%d", c);
//	return 0;
//}



//1011��������������m��n���������Լ������С��������
//int main()
//{
//	int a, b, c;
//	scanf("%d%d", &a, &b);
//	if (a >= b)
//	{
//		c = a;
//	}
//	else
//		c = b;
//
//	return 0;
//}

//int gcd(int a, int b) 
//{
//    return (a % b == 0) ? b : gcd(b, a % b);
//}
//
//int main() {
//    int m, n;
//    scanf("%d %d", &m, &n);
//    int ans = gcd(m, n);
//    printf("%d %d\n", ans, m * n / ans);
//    return 0;
//}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int gcd = 1;
    for (int i = 2; i <= m && i <= n; i++) {
        while (m % i == 0 && n % i == 0) {
            m /= i;
            n /= i;
            gcd *= i;
        }
    }
    printf("%d %d\n", gcd, m * n * gcd);
    return 0;
}

//int main()
//{
//
//	return 0;
//}
//












//1004��ס��