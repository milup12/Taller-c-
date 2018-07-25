#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int n,n1;
	int l;
	
	cout<<"ingrese numero limite"<<endl;
	cin>>l;
	cout<<"ingrese numero"<<endl;
	cin>>n1;
	
	for(int i=1;i<=l;i++) {
		cout<<"ingrese numero"<<endl;
		cin>>n;
		if(n>n1){
		
		cout<<"el numero menor es:"<<n1<<endl;
		}else{
		
		cout<<"el numero menor es:"<<n<<endl;	
		}
		
}
system("PAUSE");
		return 0;	
	
}
