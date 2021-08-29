#include<iostream>
using namespace std;
int main(){
	int num1 = 0;
	
	cout << "digite um numero: \n";
	cin >> num1;
	if(num1 > 20){
		cout << " o numero "<< num1 << " e maior que 20";
	}else {
		cout << " o numero "<< num1 << " e menor que 20 \n";
	}
	//comando em tecla
	system ("pause");
}