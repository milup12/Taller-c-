#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int a,b,c;
	
	cout << "Ingrese un numero" << endl;
	cin >> a;
	cout << "Ingrese un numero" << endl;
	cin >> b;
	cout << "Ingrese un numero" << endl;
	cin >> c;
	
	if((a>b and a<c) or (a<b and a>c)){
		cout << " El numero del medio es " << a << endl;
	}else if((b>a and b<c )or (b<a and b>c)){
		cout << " El numero medio es " << b << endl;
		}else if((c>a and c<b) or (c<a and c>b)){
		cout << "El medio es " << c << endl;
	}
	system("pause");
	return 0;
	
	
	
}
