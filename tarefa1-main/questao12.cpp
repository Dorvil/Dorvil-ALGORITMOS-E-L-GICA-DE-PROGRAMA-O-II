#include<iostream>
using namespace std;
int main(){
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int maior = 0;
	int menor = 0;
	
	cout << "digite um numero: \n";
	cin >> num1;
	cout << "digite outro numero diferen: \n";
	cin >> num2;
	cout << "digite outro numero diferente: \n";
	cin >> num3;
	cout << "digite outro numero diferente: \n";
	cin >> num4;
	
	
		if (num1 >= num2 and num1 >= num3 and num1 >= num4) {
		    cout << " o " << num1 << " e o maior";
		} if (num2 >= num1 and num2 >= num3 and num2 >= num4) {
		     cout << " o " << num2 << " e o maior";
		} if (num3 >= num1 and num3 >= num2 and num3 >= num4) {
		     cout << " o " << num3 << " e o maior";
		} else if (num4 >= num1 and num4 >= num2 and num4 >= num3) {
		    cout << " o " << num4 << " e o maior";
		}
		
		
		if (num1 <= num2 and num1 <= num3 and num1 <= num4) {
		     cout << " e o " << num1 << "  o menor";
		} if (num2 <= num1 and num2 <= num3 and num2 <= num4) {
		     cout << " e o " << num2 << "  o menor";
		} if (num3 <= num1 and num3 <= num2 and num3 <= num4) {
		    cout << " e o " << num3 << " o menor";
		} else if (num4 <= num1 and num4 <= num2 and num4 <= num3) {
		   cout << " e o " << num4 << "  o menor";
		}
	
		return 0;
	//comando em tecla
	system ("pause");
	}          
