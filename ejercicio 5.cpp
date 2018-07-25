#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int v;
	
	cout<<"ingrese valor"<<endl;
	cin>>v;
	
	cout<<"la casa tiene un avaluo de:"<<v+(v*0.30)*3<<endl;
	cout<<"el carro tiene un devaluo de:"<<v-(v*0.10)*3<<endl;
	
	
	system("PAUSE");
	return 0;
}
