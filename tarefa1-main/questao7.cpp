#include <iostream>
using namespace std;
int main()
{
    int num1 = 0;
    cout << "Digite um numero: \n";
    cin >> num1;
    if ( num1 % 3 == 0 ){
    	cout << num1 << " e multiplo de 3!";
	}else {
		cout << num1 << " nao e multiplo de 3.";
	}
	//comando em tecla
	system ("pause");
	return 0;
}