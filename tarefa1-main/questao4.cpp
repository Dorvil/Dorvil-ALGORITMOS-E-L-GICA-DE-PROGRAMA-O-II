#include<iostream>
using namespace std;
int main(){
	int num1 = 0;

	cout << "digite um numero: \n";
	cin >> num1;
	if( num1 > 0 ){
		cout << "O numero " << num1 << " e positivo.";
	}else if( num1 == 0) {
		cout << "O numero " << num1 << " e nulo.";
	}else {
		cout << "O numero " << num1 << " e negativo.";
	}
	//comando em tecla
	system ("pause");
	} 
	