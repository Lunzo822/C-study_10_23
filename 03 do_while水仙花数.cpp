////ˮ�ɻ�����һ����λ������ʾ�����λ����ÿһλ�����������֮���Եñ���
////���磬153 = 1^3+5^3+3^3
////Ҫ��������е�ˮ�ɻ�������λ����
////����do...whileѭ��
//
//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	//��������е���λ��
//	int num = 100;
//	do
//	{
//		//cout<<num<<endl;
//
//		//Ѱ��ˮ�ɻ���
//		//��ȡ��λ
//		int a = num%10;
//		int a_m = a*a*a;
//
//		//��ȡʮλ
//		int b = (num/10)%10;
//		int b_m = b*b*b;
//
//		//��ȡ��λ
//		int c = num/100;
//		int c_m = c*c*c;
//
//		//�ж�
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