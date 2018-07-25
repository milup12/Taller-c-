#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	float monto;
	float ganancia;
	
	cout<<"ingrese monto"<<endl;
	cin>>monto;
	
	for(int i=0;i<=11;i++){
	ganancia=(monto*0.02);
	monto=monto+ganancia;
	
	
	cout<<"el total es:"<<monto<<endl;
}
	 
	system ("pause");
	return 0;
}
