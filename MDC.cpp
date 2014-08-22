#include <iostream>

using namespace std;

int main()
{
	
	int anterior,atual,resto;
	
	cout << "Digite 2 numeros inteiros positivos: \n\n";
	cin >> anterior >> atual;
	
	resto = atual % anterior;
	
	while (resto != 0)
	{
		resto = anterior % atual;
		anterior = atual;
		atual = resto;
	}
	
	cout << "\n" << anterior << endl;
	return 0;
	
}
