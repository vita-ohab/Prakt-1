#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float x,y,z,S;
	cout <<"������ ������� �������� x:"<<endl;
	
	while (!(cin >> x)){ //���� �� ���� ������� ��������� �����, ������� ����
        cout << "������� �������� �������� �. ���� ����� �������� �������� �������� �� ���!\n";
        cin.clear();//������� ���
        fflush(stdin);//������� ���
    }
	
	cout <<"������ ������� �������� y:"<<endl;
	while (!(cin >> y)){
        cout << "������� �������� �������� y. ���� ����� �������� �������� �������� �� ���!\n";
        cin.clear();
        fflush(stdin);
    }
	
	cout <<"������ ������� �������� z:"<<endl;
	while (!(cin >> z)){
        cout << "������� �������� �������� z. ���� ����� �������� �������� �������� �� ���!\n";
        cin.clear();
        fflush(stdin);
    }

	S=(pow(2,pow(y,x))+pow(pow(3,x),y)-((y*(atan(z))-(1/3))/(abs(x)+(1/(pow(y,2)+1)))));
	S = round(S * 1000.0) / 1000.0; //������� �� 3 �����
	cout<<"��������� ����������: S= "<<S;
	return 0;	
}


