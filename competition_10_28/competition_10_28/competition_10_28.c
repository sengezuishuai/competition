#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

//用迭代法求 平方根

//公式：求a的平方根的迭代公式为： X[n + 1] = (X[n] + a / X[n]) / 2 要求前后两次求出的差的绝对值少于0.00001。
//输出保留3位小数


//int main()
//
//{
//    int a;
//    double x1 = 1.0, x2 = 0;
//    scanf("%d", &a);
//    while (fabs(x1 - x2) > 1e-5)//绝对值小于0.00005
//    {
//        x2 = x1;//赋予x2初值，储存旧值
//        x1 = (x2 + a / x2) / 2;
//    }
//    printf("%.3lf", x1);
//    return 0;
//}

int main()
{
    int N = 0, a = 0;
    scanf("%d", &N);
    for (a = 2; a <= N; a++)
    {
        if (a == 2 || a == 3 || a == 5 || a == 7)
            printf("%d\n", a);
        if (a % 2 != 0 && a % 3 != 0 && a % 5 != 0 && a % 7 != 0)
            printf("%d\n", a);
    }
    return 0;
}

int main()
{
    int N, i, j, flag;
    N = i = j = flag = 0;
    scanf("%d", &N);
    for (i = 2; i <= N; i++)
    {   //排除数字1和数字本身
        for (j = 2; j != i; j++)
        {   //如果数字有1和其它的因子外，结束本次循环
            if (i % j == 0)
            {
                flag++;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d\n", i);
        }
        flag = 0;//每一次遍历后标志位置0
    }
    return 0;
} 