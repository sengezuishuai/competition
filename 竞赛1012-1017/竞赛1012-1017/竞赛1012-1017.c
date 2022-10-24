#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>
//打着玩
int main()
{
	printf("**************************\n");
	printf("Hello World!\n");
	printf("**************************\n");
	return 0;
}

//1012
// 输入一行字符，分别统计出其中英文字母、数字、空格和其他字符的个数。
int main()
{
    char str[100];
    int i, letter = 0, number = 0, space = 0, other = 0;
    gets(str);//字符串输入
    for (i = 0; i < strlen(str); i++)//用到strlen函数需要string.h头文件
    {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
            letter++;//字母个数增一
        else if (str[i] >= '0' && str[i] <= '9')//单引号易出错
            number++;//数字个数增一
        else if (str[i] == ' ')
            space++;//空格个数增一
        else
            other++;//其他字符个数增一
    }
    printf("%d %d %d %d", letter, number, space, other);
    return 0;
}

//1013
//求Sn=a+aa+aaa+…+aa…aaa（有n个a）之值，
//其中a是一个数字，为2。 例如，n=5时=2+22+222+2222+22222，n由键盘输入。
int main()
{
	int a, i, c = 2, d = 2;
	scanf("%d", &i);
	for (a = 1; a < i; a++)
	{
		c = c * 10 + 2;
		d = d + c;
	}
	printf("%d", d);
	return 0;
}

int main()
{
	int n, Sn = 0, i, a = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		a = a * 10 + 2;
		Sn = Sn + a;
	}
	printf("%d\n", Sn);
	return 0;
}




//1014求Sn=1!+2!+3!+4!+5!+…+n!之值，其中n是一个数字(n不超过20)。
int main()
{
	long long Sn = 0;
	int i = 0;
	int k = 0;
	long long p = 1;
	int o = 0;
	scanf("%d", &k);
	int c = k;
	for (i = 1; i <= k; i++)
	{
		for (o = 1; o <= c; o++)
		{
			p = p * o;
		}
		c--;
		Sn = Sn + p;
		p = 1;
	}
	printf("%lld", Sn);
	return 0;
}

int main(void)
{
	int n;
	long long Sn = 0, j;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		j = 1;
		for (int m = 0; m < i; m++)
			j *= (m + 1);
		Sn = Sn + j;
	}
	printf("%lld", Sn); //long long的格式指定符为%lld
	return 0;
}

//求以下三数的和, 保留2位小数 1~a之和 1~b的平方和 1~c的倒数和
int main()
{
	int a = 0, b = 0, c = 0;
	double d = 0, e = 0, f = 1.0,g = 0;
	
	scanf("%d%d%d",&a,&b,&c);
	//scanf("%d", &a);
	for (g = 0; g <= a; g++)
	{
		d = d + g;
	}
	for (g = 0; g <= b; g++)
	{
		e = e + g * g;
	}
	for (g = 1; g <= c; g++)
	{
		f = f + 1.0 / g;
	}
	//printf("%d", d);
	//printf("%d", e); 
	//printf("%d", d);
	printf("%.2lf", d + e + f);
	return 0;
}
int main()

{

	int a, b, c;

	double sum = 0, n = 1;

	scanf("%d%d%d", &a, &b, &c);

	for (; n <= a || n <= b || n <= c; n++)

	{

		if (n <= a)
			sum = sum + n;

		if (n <= b)
			sum = sum + n * n;

		if (n <= c)
			sum = sum + 1 / n;

	}

	printf("%.2lf", sum);

}



int main()
{
	int a = 5, i = 1, b = 0;
	for (i = 1; i <=5 ; i++)
	{
		b = b + i;
	}
	printf("%d", b);
	return 0;
}

int main()
{
	int a = 2, i = 1, b = 0;
	for (i = 1; i <=2 ; i++)
	{
		b = b + i*i;
	}
	//printf("%d", b);
	printf("%d", b);
	return 0;
}

int main()
{
	int a, b, c;
	double d = 0,i = 1 ;
	scanf("%d%d%d", &a, &b, &c);
	for (; i <= a || i < b || i <= c; i++)
	{
		if (i <= a)
			d = d + i;
		if (i <= b)
			d = d + i * i;
		if (i <= c)
			d = d + 1 / i;
	}
	printf("%.2lf", d );

	return 0;
}

//1016打印出所有"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该本身。 例如：153是一个水仙花数，因为153=1^3+5^3+3^3。 
int main()
{
	int a = 100, b, c, d;
	for (a = 100; a < 1000; a++)
	{
		b = a / 100;
		c = (a / 10) % 10;
		d = a % 10;
		if (a == (b * b * b + c * c * c + d * d * d))
			printf("%d ", a);
	}
	return 0;
}

int main()
{
	int N;
	scanf("%d", N);

}


//
int main()
{
    int n;
    scanf("%d", &n);                    //输入n
    for (int i = 6; i <= n; i++)        //for循环从第一个完数6开始
    {
        // if (i % 10 != 6 && i % 10 != 8)      continue;   //减少运行时间可加入此行，跳过个位非6与8的数
        int s[100] = { 0 };               //初始化数组s全为0，循环内的临时数组每次循环都会初始化
        int* p = s;                     //通过指针p的移动来控制数组的读写
        for (int j = 1; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                *++p = j;               //此处p先后移，再赋值储存因子j
                s[0] += j;              //s[0]储存因子的和
            }
        }
        if (s[0] == i)                  //s[0]==i 则 i 为完数
        {
            printf("%d its factors are", i);
            for (p = &s[1]; *p != 0; p++)   //for循环p指向s[1]，值为0时停止，每次循环后移一次
            {
                printf(" %d", *p);
            }
            putchar('\n');
        }
    }
    return 0;
}