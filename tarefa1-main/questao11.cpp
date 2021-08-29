#include<iostream>
using namespace std;
int main(){
	int num1 = 0;
	int num2 = 0;
	int divisao = 0;
	
	cout << "digite um numero: \n";
	cin >> num1;
	
	if (num1 % 3 == 0 and num1 % 7 == 0){
		cout << num1 << " e divisivel por 3 e por 7.";
	}else {
		cout << num1 << " nao e divisivel por 3 e 7.";
	}
	//comando em tecla
	system ("pause");
	
	}