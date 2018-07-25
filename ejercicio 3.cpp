#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int c1, c2, c3;
	int suma=c1+c2+c3;

	
	cout<<"ingrese capital"<<endl;
	cin>>c1;
	
	cout<<"ingrese capital"<<endl;
	cin>>c2;
	
	cout<<"ingrese capital"<<endl;
	cin>>c3;
	
	cout<<"su porcentaje es"<<(c1*100)/suma<<endl;
	cout<<"su porcentaje es"<<c2*100/suma<<endl;
	cout<<"su porcentaje es"<<c3*100/suma<<endl;

	system("PAUSE");
	return 0;
}
