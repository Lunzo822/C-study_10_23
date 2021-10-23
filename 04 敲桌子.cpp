////案例描述:从1开始数到数字100，如果数字个位含有7，或者数字十位含有7，或者该数字是7的倍数，我们打印敲桌子，其余数字直接打印输出。
//
//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int i = 0;
//	//打印数字
//	for(i =1;i<=100;i++)
//	{
//		int a = i%10;	//个位
//		int b = i/10;		//十位
//		int c = i%7;		//去模7的余数
//
//		if(a == 7 || b == 7 || c ==0)
//		{
//			cout<<"敲桌子"<<endl;
//		}
//		else
//		{
//			cout<<i<<endl;
//		}
//	}
//
//	system("pause");
//	return 0;
//}
