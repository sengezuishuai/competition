#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>

////一球从M米高度自由下落，每次落地后返回原高度的一半，再落下。 它在第N次落地时反弹多高？共经过多少米？ 保留两位小数
//int main()
//{
//	double reng, danci;
//	int i, diao;
//	scanf("%lf%d", &reng, &diao);
//	double zong=reng;
//	danci = reng;
//	for (i = 1; i < diao; i++)
//	{
//		danci = danci / 2;
//		zong = zong + danci * 2;
//	}
//	danci = danci / 2;
//	printf("%.2lf %.2lf", danci, zong);
//	return 0;
//}

//int main()
//{
//	int F;
//	double C;
//	for (F = 0; F <= 100; F++)
//	{
//		if (F % 10 == 0)
//		{
//			C = 5 / 9.0 * (F - 32);
//			printf("%d %.2lf\n", F, C);
//		}
//	}
//	return 0;
//}


////猴子吃桃问题。猴子第一天摘下若干个桃子，当即吃了一半，还不过瘾，又多吃了一个。 第二天早上又将剩下的桃子吃掉一半，又多吃一个。
////以后每天早上都吃了前一天剩下的一半零一个。 到第N天早上想再吃时，见只剩下一个桃子了。求第一天共摘多少桃子。
//int main()
//{
//	int N, i, tao = 1;
//	scanf("%d", &N);
//	for (i = 1; i < N; i++)
//	{
//		tao =(tao + 1) * 2;
//	}
//	printf("%d", tao);
//	return 0;
//}


////斐波那契数列
int main()
{
	int a = 1, b = 1, c = 1, d = 0, f;
	scanf("%d", &d);
	if (d == 1, 2)
		printf("%d", 1);
	for (f = 3; f <= d; f++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	printf("%d", c);
	return 0;
}


////用迭代法求 平方根
///
////公式：求a的平方根的迭代公式为： X[n + 1] = (X[n] + a / X[n]) / 2 要求前后两次求出的差的绝对值少于0.00001。 输出保留3位小数
//int main()
//{
//
//	return 0;
//}

