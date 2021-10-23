////水仙花数是一个三位数，表示这个三位数的每一位的三次幂相加之后仍得本身
////例如，153 = 1^3+5^3+3^3
////要求输出所有的水仙花数（三位数）
////利用do...while循环
//
//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	//先输出所有的三位数
//	int num = 100;
//	do
//	{
//		//cout<<num<<endl;
//
//		//寻找水仙花数
//		//获取个位
//		int a = num%10;
//		int a_m = a*a*a;
//
//		//获取十位
//		int b = (num/10)%10;
//		int b_m = b*b*b;
//
//		//获取百位
//		int c = num/100;
//		int c_m = c*c*c;
//
//		//判断
//		int sum = a_m+b_m+c_m;
//		if(num == sum)
//		{
//			cout<<num<<endl;
//		}
//		num++;
//	}while(num<1000);
//
//	system("pause");
//	return 0;
//}