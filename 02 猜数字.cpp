////��������:ϵͳ�������һ��1��100֮������֣���ҽ��в²⣬����´���ʾ������ֹ�����С������¶Թ�ϲ���ʤ���������˳���Ϸ��
//
//#include<iostream>
//#include<ctime>			//timeͷ�ļ�
//
//using namespace std;
//
//int main()
//{
//	//�����������ӣ����õ�ǰϵͳʱ���������������ֹÿ�����ɵĶ�һ��
//	srand((unsigned int)time(NULL));
//
//	while(1)
//	{
//		//ϵͳ�����������
//		int num1 = 0;
//		num1 = rand()%100+1;		//�������1~100
//
//		int num2 = 0;
//
//		//�ж�
//		while(num2 != num1)
//		{
//			//��Ҳ²�
//			cout<<"���������²������"<<endl;
//			cin>>num2;
//
//			if(num2>num1)
//			{
//				cout<<"����������ֹ���"<<endl;
//			}
//			else if(num2<num1)
//			{
//				cout<<"����������ֹ�С"<<endl;
//			}
//			else
//			{
//				cout<<"��ϲ���¶��ˣ����˳���Ϸ������"<<endl;
//				cout<<endl;
//			}
//		}
//		cout<<"�뿪ʼ�µ���Ϸ"<<endl;
//	}
//
//	system("pause");
//	return 0;
//}