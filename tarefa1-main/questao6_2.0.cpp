#include<iostream>
using namespace std;
int main(){
	int num = 0;
	
	cout << "Digite um numero: \n";
	cin >> num;
	
	if(num >= 0){
		int controleImpar = 0;
		int controle = 1;
		int resto = num;
			
			do {
				if (controle % 2 != 0) {
               		resto = resto - controle;
                	controleImpar = controleImpar + 1;
		        	}controle = controle + 1;
		    	} while (resto > 0);
		    		cout << "A raiz e: " << controleImpar << "\n";
			}else {
			cout << num * num << "\n";
			}
	
			//comando em tecla
			system ("pause");
	
	return 0;
		}	

