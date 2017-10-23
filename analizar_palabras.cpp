#include <iostream>
#include <string> 
//include "stdafx.h"
/*Comentario Prof Kevin*/
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
vocales(string palabra)
{
	int a,b;  

for(a=0;a<40;a++){ 
switch (palabra[a]){ 
case 'a': b=b+1; 
break; 
case 'e': b=b+1; 
break; 
case 'i': b=b+1; 
break; 
case 'o': b=b+1; 
break; 
case 'u': b=b+1; 
break; 
} } 

cout<<"el numero de vocales son"<<b; 


	
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
