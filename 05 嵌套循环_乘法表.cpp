//����Ƕ��ѭ����ӡ��9*9�˷���

#include<iostream>

using namespace std;

int main()
{
	for(int i = 1;i<10;i++)
	{
		for(int j = 1;j<=i;j++)
		{
			int result = i*j;
			cout<<j<<"*"<<i<<"="<<result<<"\t";
		}
		cout<<endl;
	}

	system("pause");
	return 0;
}