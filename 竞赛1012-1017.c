#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<time.h>
//1012
//输入一行字符，分别统计出其中英文字母、数字、空格和其他字符的个数。
//int main()
//{
//    char str[100];
//    int i, letter = 0, number = 0, space = 0, other = 0;
//    gets(str);//字符串输入
//    for (i = 0; i < strlen(str); i++)//用到strlen函数需要string.h头文件
//    {
//        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
//            letter++;//字母个数增一
//        else if (str[i] >= '0' && str[i] <= '9')//单引号易出错
//            number++;//数字个数增一
//        else if (str[i] == ' ')
//            space++;//空格个数增一
//        else
//            other++;//其他字符个数增一
//    }
//    printf("%d %d %d %d", letter, number, space, other);
//    return 0;
//}
// //巧妙利用ausm值
//小测验

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
//求Sn = a + aa + aaa + … + aa…aaa（有n个a）之值，其中a是一个数字，为2。 
//例如，n = 5时 = 2 + 22 + 222 + 2222 + 22222，n由键盘输入。

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
//求Sn = 1!+ 2!+ 3!+ 4!+ 5!+ … + n!之值，其中n是一个数字(n不超过20)。
 

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