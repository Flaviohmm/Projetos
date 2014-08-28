#include <iostream>
#include <math.h>


using namespace std;

int main()
{
	float hipotenusa, a, b;


	cout << "\n\tAqui voce vai calcular a hipotenusa" <<endl << endl << endl;


	cout << "Entre com o primeiro cateto: ";
	cin >> a;
	cout << "Entre com o segundo cateto: ";
	cin >> b;

	hipotenusa = (a*a) + (b*b);
	cout <<"Hipotenusa e: " << sqrt(hipotenusa) << endl;

	return 0;
}
