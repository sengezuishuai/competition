#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>

//��һ�������У� 2 / 1 3 / 2 5 / 3 8 / 5 13 / 8 21 / 13......���������е�ǰN��֮�ͣ�������λС����
int main()
{
	int a = 2, b = 3, c = 1, d = 2, i, num1 = 0, num2 = 0, mao, num3 = 0;
	scanf("%d", &mao);
	for (i = 1; i <= mao; i++)
	{
		if (mao == 1)
		{
			printf("%f", 2 / 1);
			break;
		}
		if (mao == 2)
		{
			printf("%f",3 / 2);
			break;
		}
		num1=
	}
	return 0;
}

int quizhi(int i);
int quizhi2(int i);

int main()
{
	double num1, num2, num3 = 0;
	int i, m;
	scanf("%d", &i);
	for (m = 1; m <= i; m++)
	{
		num1 = quizhi(i);
		num2 = quizhi2(i);
		num3 = (num2 / num1) + num3;
	}
	printf("%.2f", num3);
}

int quizhi(int i)
{
	int num1 = 1, num2 = 2, num3, tishen;
	switch(i)
	{
	case 1:
	{
		return 1;
		break;
	}
	case 2:
	{
		return 2;
		break;
	}
	}
	int b;
	for (b = 3; b <= i; b++)
	{
		num3 = num1 + num2;
		if (num1 > num2)
		{
			tishen = num1;
			num2 = num1;
			num1 = num3;
		}
		else
		{
			tishen = num2;
			num1 = num2;
			num2 = num3;
		}
	}
	return num3;
}

int quizhi2(int i)
{
	int num1 = 2, num2 = 3, num3, tishen;
	switch (i)
	{
	case 1:
	{
		return 2;
		break;
	}
	case 2:
	{
		return 3;
		break;
	}
	}
	int b;
	for (b = 3; b <= i; b++)
	{
		num3 = num1 + num2;
		if (num1 > num2)
		{
			tishen = num1;
			num2 = num1;
			num1 = num3;
		}
		else
		{
			tishen = num2;
			num1 = num2;
			num2 = num3;
		}
	}
	return num3;
}


int main() {
    double Sn = 0, an = 0, n, i, t, a = 2.0, b = 1.0;//aΪ���ӣ�bΪ��ĸ��anΪ�����ֵ��SnΪ�ܺ�
    scanf("%lf", &n);
    Sn += a / b;//��һ��ڹ����У���ѭ��ǰ�ȼ���
    for (i = 1; i < n; i++) {
        t = a;
        a = a + b;//��ǰһ��ķ��Ӽӷ�ĸ����һ��ķ���
        b = t;//��ǰһ��ķ��Ӹ���һ��ķ�ĸ
        an = a / b;
        Sn += an;
    }
    printf("%0.2lf", Sn);
    return 0;
}
