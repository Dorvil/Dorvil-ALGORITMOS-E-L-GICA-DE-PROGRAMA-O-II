#include<iostream>
using namespace std;
int main(){
	int num1 = 0;
	int num2 = 0;
	int soma = 0;
	
	cout << "digite um numero: \n";
	cin >> num1;
	cout << "digite outro numero: \n";
	cin >> num2;
	soma = num1 + num2;
	if ( soma > 20){
		cout << soma + 8;
	} else {
		cout << soma - 5;
	}
	//comando em tecla
	system ("pause");
	return 0;
	
	}