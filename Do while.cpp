#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string str;
	do
    {
		cout <<"Digite o texto: ";
		getline (cin, str);
		cout << "Digitado: " << str << '\n';
    }
    while (str != "Adeus");

	return 0;
}
