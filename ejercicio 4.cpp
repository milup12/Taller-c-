#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int presupuesto;
	
	cout<<"ingrese presupuesto"<<endl;
	cin>>presupuesto;
	
	cout<<"ginecologia recibe"<<(presupuesto*0.40)<<endl;
	cout<<"traumatologia recibe"<<(presupuesto*0.30)<<endl;
	cout<<"pediatria recibe"<<(presupuesto*0.30)<<endl;
	
	system("PAUSE");
	return 0;
	
}
