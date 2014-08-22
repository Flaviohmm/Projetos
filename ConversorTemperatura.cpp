#include <iostream>
#include <stdlib.h> 

using namespace std;

float cel2temp()
{  //1	
    float TC,TF,TK,TR,TRa;
	
    cout << "digite o valor em Celsius:\n\n";
    cin >> TC;
    
    TF = (9*TC+160)/5;
    
    cout << "\n\n valor em Fahrenheit: \n\n"<<TF;
    
    TK = TC + 273;
    
    cout << "\n\n valor em Kelvin: \n\n"<<TK;
    
    TR = (80*TC)/100;
    
    cout << "\n\n valor em Reaumur: \n\n"<<TR;

    TRa = (9*TC+2458.5)/5;
    
    cout << "\n\n valor em Rankine: \n\n"<<TRa;	
}
float far2temp()
{  //2
   float TF,TC,TK,TR,TRa;
	
    cout << "digite o valor em Fahrenheit:\n\n";
    cin >> TF;
    
    TC = (5*TF-160)/9;
    
    cout << "\n\n valor em Celsius: \n\n"<<TC;
    
    TK = (5*TF+2297)/9;
    
    cout << "\n\n valor em Kelvin: \n\n"<<TK;
    
    TR = (4*TF-128)/9;
    
    cout << "\n\n valor em Reaumur: \n\n"<<TR;

    TRa = TF + 459.7;
    
    cout << "\n\n valor em Rankine: \n\n"<<TRa;		
}
float kel2temp()
{  //3
   float TK,TC,TF,TR,TRa;
   
   cout << "digite o valor em Kelvin: \n\n";
   cin >> TK;
   
   TC = TK - 273;
   
   cout << "\n\n valor em Celsius: \n\n"<<TC;
   
   TF = (9*TK-2297)/5;
   
   cout << "\n\n valor em Fahrenheit: \n\n"<<TF;
   
   TR = (4*TK-1092)/5;
   
   cout << "\n\n valor em Reaumur: \n\n"<<TR;
   
   TRa = (9*TK+1.5)/5;
   
   cout << "\n\n valor em Rankine: \n\n"<<TRa;
}
float Rea2temp()
{  //4
	float TR,TC,TF,TK,TRa;
	
	cout << "digite o valor em Reaumur: \n\n";
	cin  >> TR;
	
	TC = (100*TR)/80;
	
	cout << "\n\n valor em Celsius: \n\n"<<TC;
	
	TF = (9*TR+128)/4;
	
	cout << "\n\n valor em Fahrenheit: \n\n"<<TF;
	
	TK = (5*TR+1092)/4;
	
	cout << "\n\n valor em Kelvin: \n\n"<<TK;
	
	TRa = (9*TR+1966.8)/4;
	
	cout << "\n\n valor em Rankine: \n\n"<<TRa;
} 
float Ran2temp()
{  //5
    float TRa,TC,TF,TK,TR;
    
    cout << "digite o valor em Rankine: \n\n";
    cin >> TRa;
    
    TC = (5*TRa-2458.5)/9;
    
    cout << "\n\n valor em Celsius: \n\n"<<TC;
    
    TF = TRa - 459.7;
    
    cout << "\n\n valor em Fahrenheit: \n\n"<<TF;
    
    TK = (5*TRa-1.5)/9;
    
    cout << "\n\n valor em Kelvin: \n\n"<<TK;
    
    TR = (4*TRa-1966.8)/9;
    
    cout << "\n\n valor em Reaumur: \n\n"<<TR;
}
main()
{
	int opcao;
	char op;
	
	cout << "escolha a opcao de temperatura a ser convertida: \n\n";
	
	cout << "1- Converter Celsius para: \n";
	cout << "2- Converter Fahrenheit para: \n";
	cout << "3- Converter Kelvin para: \n";
	cout << "4- Converter Reaumur para: \n";
	cout << "5- Converter Rankine para: \n";
	
	cout << "digite o codigo para escolher a conversao: \n\n";
	cin >> opcao;
	
	switch(opcao)
	{
		case 1:
		    cel2temp();
		break;
		case 2:
		    far2temp();
		break;
		case 3:
		    kel2temp();
		break;
		case 4:
		    Rea2temp();
		break;
		case 5:
		    Ran2temp();
		break;
		default:
			cout << "opcao invalida \n";
		break;			
	}
	
	cout <<"\n Deseja executar novamente? Digite 's' para sim ou qualquer tecla para sair\n";
	cin >> op;
	
	if((op=='s')||(op=='S'))
	{
        system("cls");
        main();
  }                        
 system("PAUSE");
                 
                 
 return 0;
}
