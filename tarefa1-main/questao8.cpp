#include<iostream>
using namespace std;
int main(){
	int num1 = 0;
	int num2 = 0;
	int divisao = 0;
	
	cout << "digite um numero: \n";
	cin >> num1;

	divisao = num1 % 5;
	if ( divisao == 0 and num1 != 0){
		cout << num1 << " e divisivel por 5";
	} else {
		cout << num1 << " nao e divisivel por 5 ";
		//comando em tecla
	system ("pause");
	}
	
	return 0;
	
	}