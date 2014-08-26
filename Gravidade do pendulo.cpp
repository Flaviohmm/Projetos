#include <iostream>

using namespace std;

const double pi = 3.141592654;

int main()
{
	
	float L,T,g;
	
	cout << "\n\tEncontre a gravidade do pendulo\n ";
	
	cout << "\nComprimento da corda: ";
	cin >> L;
	
	cout << "\nPeriodo: ";
	cin >> T;
	
	g = (4*pi*pi*L)/(T*T);
	
	cout << "A gravidade desse pendulo e' de:  "<< g <<" m/s^2 ";
	
	return 0;
}
