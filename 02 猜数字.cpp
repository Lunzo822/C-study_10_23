////案例描述:系统随机生成一个1到100之间的数字，玩家进行猜测，如果猜错，提示玩家数字过大或过小，如果猜对恭喜玩家胜利，并且退出游戏。
//
//#include<iostream>
//#include<ctime>			//time头文件
//
//using namespace std;
//
//int main()
//{
//	//添加随机数种子：利用当前系统时间生成随机数，防止每次生成的都一样
//	srand((unsigned int)time(NULL));
//
//	while(1)
//	{
//		//系统随机生成数字
//		int num1 = 0;
//		num1 = rand()%100+1;		//随机生成1~100
//
//		int num2 = 0;
//
//		//判断
//		while(num2 != num1)
//		{
//			//玩家猜测
//			cout<<"请输入您猜测的数字"<<endl;
//			cin>>num2;
//
//			if(num2>num1)
//			{
//				cout<<"您输入的数字过大"<<endl;
//			}
//			else if(num2<num1)
//			{
//				cout<<"您输入的数字过小"<<endl;
//			}
//			else
//			{
//				cout<<"恭喜您猜对了，请退出游戏！！！"<<endl;
//				cout<<endl;
//			}
//		}
//		cout<<"请开始新的游戏"<<endl;
//	}
//
//	system("pause");
//	return 0;
//}