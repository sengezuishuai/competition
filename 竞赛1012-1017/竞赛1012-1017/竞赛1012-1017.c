#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>
//������
int main()
{
	printf("**************************\n");
	printf("Hello World!\n");
	printf("**************************\n");
	return 0;
}

//1012
// ����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ�����֡��ո�������ַ��ĸ�����
int main()
{
    char str[100];
    int i, letter = 0, number = 0, space = 0, other = 0;
    gets(str);//�ַ�������
    for (i = 0; i < strlen(str); i++)//�õ�strlen������Ҫstring.hͷ�ļ�
    {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
            letter++;//��ĸ������һ
        else if (str[i] >= '0' && str[i] <= '9')//�������׳���
            number++;//���ָ�����һ
        else if (str[i] == ' ')
            space++;//�ո������һ
        else
            other++;//�����ַ�������һ
    }
    printf("%d %d %d %d", letter, number, space, other);
    return 0;
}

//1013
//��Sn=a+aa+aaa+��+aa��aaa����n��a��ֵ֮��
//����a��һ�����֣�Ϊ2�� ���磬n=5ʱ=2+22+222+2222+22222��n�ɼ������롣
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




//1014��Sn=1!+2!+3!+4!+5!+��+n!ֵ֮������n��һ������(n������20)��
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
	printf("%lld", Sn); //long long�ĸ�ʽָ����Ϊ%lld
	return 0;
}

//�����������ĺ�, ����2λС�� 1~a֮�� 1~b��ƽ���� 1~c�ĵ�����
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

//1016��ӡ������"ˮ�ɻ���"����ν"ˮ�ɻ���"��ָһ����λ�������λ���������͵��ڸñ��� ���磺153��һ��ˮ�ɻ�������Ϊ153=1^3+5^3+3^3�� 
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
    scanf("%d", &n);                    //����n
    for (int i = 6; i <= n; i++)        //forѭ���ӵ�һ������6��ʼ
    {
        // if (i % 10 != 6 && i % 10 != 8)      continue;   //��������ʱ��ɼ�����У�������λ��6��8����
        int s[100] = { 0 };               //��ʼ������sȫΪ0��ѭ���ڵ���ʱ����ÿ��ѭ�������ʼ��
        int* p = s;                     //ͨ��ָ��p���ƶ�����������Ķ�д
        for (int j = 1; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                *++p = j;               //�˴�p�Ⱥ��ƣ��ٸ�ֵ��������j
                s[0] += j;              //s[0]�������ӵĺ�
            }
        }
        if (s[0] == i)                  //s[0]==i �� i Ϊ����
        {
            printf("%d its factors are", i);
            for (p = &s[1]; *p != 0; p++)   //forѭ��pָ��s[1]��ֵΪ0ʱֹͣ��ÿ��ѭ������һ��
            {
                printf(" %d", *p);
            }
            putchar('\n');
        }
    }
    return 0;
}