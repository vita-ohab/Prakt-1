#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float x,y,z,S;
	cout <<"Введіть дробове значення x:"<<endl;
	
	while (!(cin >> x)){ //поки не буде введено нормальне число, вконуємо цикл
        cout << "Помилка введення значення х. Будь ласка повторіть введення значення ще раз!\n";
        cin.clear();//скидаємо ввід
        fflush(stdin);//очищуємо ввід
    }
	
	cout <<"Введіть дробове значення y:"<<endl;
	while (!(cin >> y)){
        cout << "Помилка введення значення y. Будь ласка повторіть введення значення ще раз!\n";
        cin.clear();
        fflush(stdin);
    }
	
	cout <<"Введіть дробове значення z:"<<endl;
	while (!(cin >> z)){
        cout << "Помилка введення значення z. Будь ласка повторіть введення значення ще раз!\n";
        cin.clear();
        fflush(stdin);
    }

	S=(pow(2,pow(y,x))+pow(pow(3,x),y)-((y*(atan(z))-(1/3))/(abs(x)+(1/(pow(y,2)+1)))));
	S = round(S * 1000.0) / 1000.0; //точність до 3 знаку
	cout<<"Результат обчислення: S= "<<S;
	return 0;	
}


