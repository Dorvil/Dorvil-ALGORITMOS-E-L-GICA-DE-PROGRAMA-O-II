#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int num1 = 0;
	cout << "digite um numero: ";
	cin >> num1;
	
    if (num1 >= 0){
    cout << sqrt(num1) << " e a raiz de " << num1 <<".";
	}
	if (num1 < 0){
		int quadrado = 0;
		quadrado = num1 * num1;
		cout << "O quadrado de " << num1 << " e " << quadrado;
		
	}
	//comando em tecla
	system ("pause");
    return 0;
    
}