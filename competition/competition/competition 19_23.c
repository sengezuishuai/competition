#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>

////һ���M�׸߶��������䣬ÿ����غ󷵻�ԭ�߶ȵ�һ�룬�����¡� ���ڵ�N�����ʱ������ߣ������������ף� ������λС��
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


////���ӳ������⡣���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬������񫣬�ֶ����һ���� �ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ��һ����
////�Ժ�ÿ�����϶�����ǰһ��ʣ�µ�һ����һ���� ����N���������ٳ�ʱ����ֻʣ��һ�������ˡ����һ�칲ժ�������ӡ�
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


////쳲���������
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


////�õ������� ƽ����
///
////��ʽ����a��ƽ�����ĵ�����ʽΪ�� X[n + 1] = (X[n] + a / X[n]) / 2 Ҫ��ǰ����������Ĳ�ľ���ֵ����0.00001�� �������3λС��
//int main()
//{
//
//	return 0;
//}

