#include < iostream>
#include<vector>
using namespace std;
int main()
{    
	int n;
	cout << "�����������Ԫ������";
	cin >> n;
	 vector<float> a(n, 0);       //�����в���Ԫ�ؽ�������
	 vector<float> b(n, 0);
	int i;
	cout << "���������1��Ԫ��"<<endl;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << "���������2��Ԫ��"<<endl;
	float dot_product = 0; //�趨�������
	for (i = 0; i < n; i++)
	{
		cin >> b[i];
		dot_product += a[i] * b[i];
	}
	
	cout << dot_product;
	
      return 0;
}