#include<iostream>
using namespace std;
int main(){
	int num1 = 0;
	int num2 = 0;
	int soma = 0;
	
	cout << "digite um numero: \n";
	cin >> num1;
	cout << "Digite outro numero: \n";
	cin >> num2;
	soma = num1 + num2;
	if(soma > 10 ){
	cout << "A soma e maior que 20. Sendo assim a soma e: " << soma;
	}else {
		cout << "O numero e menor que 20. Sendo assim a nao e feita." ;
	}
	//comando em tecla
	system ("pause");
}