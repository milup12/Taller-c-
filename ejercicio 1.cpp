#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int ht;
	int v=ht*16;
	
	cout<<"ingrese horas trabajadas"<<endl;
	cin>>ht;
	
	if(ht<=40){
		cout<<v<<endl;
	}else{
		cout<<"su salario es"<<((ht-40)*20)+(40*16)<<endl;
	}

	system("PAUSE");
	return 0;
	}
	
