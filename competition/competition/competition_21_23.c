#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>

int main()
{
	int i = 1, j = 1;
	int arr[5][5] = { 0 };
	for(i=1;i<=5;i++)
		for (j = 1; j <= 4; j++)
			scanf("%d", &arr[i][j]);
	for (i = 1; i <= 4; i++)
		for (j = 1; j <= 5; j++)
			printf("%d", arr[i][j]);
	return 0;
}

void PrintN(int N);
int main()
{
	int N;
	scanf("%d", &N);
	PrintN(N);
	return 0;
}

void PrintN(int N)
{
	int i;
	for (i = 1; i <= N; i++)
		printf("%d\n", i);
	return;
}


void PrintN(int N)
{
	if (N)
	{
		PrintN(N - 1);
		printf("%d\n", N);
	}
	return;
}


clock_t start, stop;
//clock_t��clock()������������
double duration;
//��¼���⺯��������ʱ�䣬һ��Ϊ��λ

int main()
{//���ڲ��Է�Χ��׼��������clock����֮ǰ
	start = clock();//��ʼ��ʱ
	MyFunction();//���⺯����������
	stop = clock();//ֹͣ��ʱ
	duration = ((double)(stop - start)) / CLK_TCK;//��������ʱ��
	//�������ڲ��Է�Χ��д�ں��棬�������duration��ֵ
	return 0;
}




