#include <iostream>

using namespace std;

int main()
{
	int n,i,resultado;
	
	for(n=1; n<=10; n++)
	{
		for(i=1; i<=10; i++)
		{
			if(n*i == n)
			{
				cout << "_____________________"<<endl;
				
			}
			
			resultado = n*i;
			
			cout << n << " x " << i <<" = " << resultado << endl; 
			
		}
	}
	
	return 0;
}
