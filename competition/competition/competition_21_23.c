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
//clock_t是clock()函数返回类型
double duration;
//记录被测函数的运行时间，一秒为单位

int main()
{//不在测试范围的准备工作在clock（）之前
	start = clock();//开始计时
	MyFunction();//被测函数加在这里
	stop = clock();//停止计时
	duration = ((double)(stop - start)) / CLK_TCK;//计算运行时间
	//其他不在测试范围的写在后面，例如输出duration的值
	return 0;
}




