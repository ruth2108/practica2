#include <iostream>
#include <string> 
include "stdafx.h"
using namespace std;
palindroma(string palabra)
{
	int I = 0;
	string  pal =palabra;
	

	int J = pal.length() - 1;
	int mitad = J / 2;
	while (pal[I] == pal[J]) {
		if (mitad == I) {
			cout << "Es palindroma";
			break;
		}
		J--;
		I++;
	}
	if (mitad != I)
		cout << "No es palindroma";



}
vcales(string palabra)
{
	
	
}
int main(){
	
string palabra;
cout<<"introduce una palabra: ";
cin>>palabra;

cout<<"La palabra : ";
palindroma(palabra);
cout<<"La palabra: ";
vocales(palabra);	
system("Pause");
return 0;
}
