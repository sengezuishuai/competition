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
//作者：chenlele
//链接：https ://leetcode.cn/problems/two-sum/solution/liang-shu-zhi-he-by-gpe3dbjds1/
//来源：力扣（LeetCode）
//著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
//int main()
//{
//	int a, b;
//	int c = 1;
//	while (c)
//	{
//		scanf("%d%d", &a , &b);
//		printf("%d", a + b);
//		printf("你还要输入吗如果是输入1\n");
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
//题解2
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
//题解三
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
//有一头母牛，它每年年初生一头小母牛。每头小母牛从第四个年头开始，每年年初也生一头小母牛。请编程实现在第n年的时候，共有多少头母牛？
//输入格式
//输入数据由多个测试实例组成，每个测试实例占一行，包括一个整数n(0 < n < 55)，n的含义如题目中描述。
//	n = 0表示输入数据的结束，不做处理。
//	输出格式
//	对于每个测试实例，输出在第n年的时候母牛的数量。
//	每个输出占一行。
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
//完全不会
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

//比大小
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
//	printf("输出最大的是%d", d);
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
//	printf("请输入数字x\n");
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
//	printf("输出的数字为%d", y);
//
//	return 0;
//}


//1008
// 傻子用的
//int main()
//{
//	int a;
//	printf("请输入你的成绩：");
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
// 聪明的做法
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
//给出一个不多于5位的整数，要求 1、求出它是几位数
//2、分别输出每一位数字 
//3、按逆序输出各位数字，
//例如原数为321, 应输出123

//菜狗写的
//int main()
//{
//	int a, b;
//	scanf("%d", &a);
//
//	printf("")
//
//	return 0;
//}

//nb人写的
//int main()
//{
//    char str[10];                       //定义字符串长度为 10
//    scanf("%s", str);                   //输入数字 (作为字符串输入)
//
//    int len = strlen(str);              //获取字符串长度
//    printf("%d\n", len);                //输出字符串长度，即为数字位数
//    for (int i = 0; i < len; i++)       //从左往右遍历输出
//    {
//        printf("%c ", str[i]);
//    }
//    printf("\n");                       //输出回车
//    for (int i = len - 1; i >= 0; i--)  //从右往左遍历输出
//    {
//        printf("%c", str[i]);
//    }
//    return 0;
//}

//int main() {
//    int num;                            //定义数字
//    scanf("%d", &num);                  //输入数字
//    int n = 0;                          //定义数字的位数
//    if (num == 0) n = 1;                //如果数字是0，则位数为1
//    int temp = num;                     //定义 temp 来代替 num 进行计算
//    while (temp) {                      //将temp循环除以 10，到 0 为止
//        n++;
//        temp /= 10;
//    }
//    printf("%d\n", n);                  //输出数字位数
//    for (int i = n - 1; i >= 0; i--) {  //第二循环，从左往右输出
//        temp = num / pow(10, i);        //除以 10 的 i 次方
//        printf("%d ", temp % 10);       //输出对 10 取余
//    }
//    printf("\n");                       //输出回车
//    for (int i = 0; i < n; i++) {       //第三循环，从右往左循环
//        temp = num / pow(10, i);        //除以 10 的 i 次方
//        printf("%d", temp % 10);        //输出对 10 取余
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
// 企业发放的奖金根据利润提成。利润低于或等于100000元的，奖金可提10%;
//利润高于100000元，低于200000元（100000 < I≤200000）时，低于100000元的部分按10％提成，高于100000元的部分，可提成 7.5 %;
//200000 < I≤400000时，低于200000元部分仍按上述办法提成，（下同），高于200000元的部分按5％提成；
//	400000 < I≤600000元时，高于400000元的部分按3％提成；600000 < I≤1000000时，高于600000元的部分按1.5 % 提成；
//	I > 1000000时，超过1000000元的部分按1 % 提成。从键盘输入当月利润I, 求应发奖金总数。
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



//1011输入两个正整数m和n，求其最大公约数和最小公倍数。
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












//1004记住了