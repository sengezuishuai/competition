#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

//�õ������� ƽ����

//��ʽ����a��ƽ�����ĵ�����ʽΪ�� X[n + 1] = (X[n] + a / X[n]) / 2 Ҫ��ǰ����������Ĳ�ľ���ֵ����0.00001��
//�������3λС��


//int main()
//
//{
//    int a;
//    double x1 = 1.0, x2 = 0;
//    scanf("%d", &a);
//    while (fabs(x1 - x2) > 1e-5)//����ֵС��0.00005
//    {
//        x2 = x1;//����x2��ֵ�������ֵ
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
    {   //�ų�����1�����ֱ���
        for (j = 2; j != i; j++)
        {   //���������1�������������⣬��������ѭ��
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
        flag = 0;//ÿһ�α������־λ��0
    }
    return 0;
} 