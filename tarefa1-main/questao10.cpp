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
	
	if ( num1 > num2){
		cout << num1 << " e maior que " << num2;
	}else if (num1 < num2) {
		cout << num2 << " e maior que " << num1;
	}else {
		cout << num1 << " e " << num2 << " sao iguais";
	//comando em tecla
	system ("pause");
	}
	
	}