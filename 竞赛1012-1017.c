#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<time.h>
//1012
//����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ�����֡��ո�������ַ��ĸ�����
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
// //��������ausmֵ
//С����

//int main()
//{
//    char arr[100] = { 0 };
//    scanf("%s", arr);
//    for (int i = 0; i <= 9; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

 

//1013
//��Sn = a + aa + aaa + �� + aa��aaa����n��a��ֵ֮������a��һ�����֣�Ϊ2�� 
//���磬n = 5ʱ = 2 + 22 + 222 + 2222 + 22222��n�ɼ������롣

//int main()
//
//{
//	int a, b = 2, c = 1,d = 10,e = 0;
//	scanf("%d", &a);
//	for ( c = 1; c <= a; c++ )
//	{
//		b = (b % 10) * d + b;
//		
//		d = d * 10;
//
//		e = e + b;
//	}
//	printf("%d", e);
//
//	return 0;
//}

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




//1014
//��Sn = 1!+ 2!+ 3!+ 4!+ 5!+ �� + n!ֵ֮������n��һ������(n������20)��
 

int main()
{
	int Sn, i, a, n;
	scanf("%d", &a);
	for (i = 0; i <= a; i++)
	{
		n=i


	}
	
	
	
	return 0;
}




//1015


//int main()
//{
//
//	return 0;
//}



//1016
 

//int main()
//{
//
//	return 0;
//}



//1017


//int main()
//{
//
//	return 0;
//}