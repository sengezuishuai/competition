#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>
//������
//int main()
//{
//	printf("**************************\n");
//	printf("Hello World!\n");
//	printf("**************************\n");
//	return 0;
//}

////1012
//// ����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ�����֡��ո�������ַ��ĸ�����
//// 
//int main()
//{
//    char str[100];
//    int i, letter = 0, number = 0, space = 0, other = 0;
//    gets(str);//�ַ�������
//    for (i = 0; i < strlen(str); i++)//�õ�strlen������Ҫstring.hͷ�ļ�
//    {
//        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
//            letter++;//��ĸ������һ
//        else if (str[i] >= '0' && str[i] <= '9')//�������׳���
//            number++;//���ָ�����һ
//        else if (str[i] == ' ')
//            space++;//�ո������һ
//        else
//            other++;//�����ַ�������һ
//    }
//    printf("%d %d %d %d", letter, number, space, other);
//    return 0;
//}

//1013
//��Sn=a+aa+aaa+��+aa��aaa����n��a��ֵ֮��
//����a��һ�����֣�Ϊ2�� ���磬n=5ʱ=2+22+222+2222+22222��n�ɼ������롣
//int main()
//{
//	int a, i, c = 2, d = 2;
//	scanf("%d", &i);
//	for (a = 1; a < i; a++)
//	{
//		c = c * 10 + 2;
//		d = d + c;
//	}
//	printf("%d", d);
//	return 0;
//}
//
//int main()
//{
//	int n, Sn = 0, i, a = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++) {
//		a = a * 10 + 2;
//		Sn = Sn + a;
//	}
//	printf("%d\n", Sn);
//	return 0;
//}

