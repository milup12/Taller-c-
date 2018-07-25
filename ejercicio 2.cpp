#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int minuto;
	float D=1;
	float S=2;
	
	cout<<"ingrese minutos que realiza una actividad"<<endl;
	cin>>minuto;
	
	cout<<"ingrese D para la actividad dormir y S para la actividad sentado"<<endl;
	cin>>D,S;
	
	if(D=1){
		cout<<"usted consume"<<1.08*minuto<<endl;
	}else{
		cout<<"usted consume"<<1.66*minuto<<endl;
	}
	system("PAUSE");
	return 0;
}
