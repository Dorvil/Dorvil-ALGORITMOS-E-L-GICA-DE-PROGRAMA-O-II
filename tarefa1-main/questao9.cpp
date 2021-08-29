#include<iostream>
using namespace std;
int main(){
	int num1 = 0;
	int num2 = 0;
	int divisao = 0;
	
	cout << "digite um numero: \n";
	cin >> num1;
	cout << "digite outro numero: \n";
	cin >> num2;
	divisao = num1 % num2;
	if ( divisao == 0){
		cout << num1 << " e divisivel por " << num2;
	} else {
		cout << num1 << " nao e divisivel por " << num2;
	}
	//comando em tecla
	system ("pause");
	return 0;
	
	}