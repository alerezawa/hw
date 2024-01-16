#include <iostream>

using namespace std;
int main(){
	int m[5],n[5],x,i;
	for(i=0;i<5;i++){
		cin>>m[i];
		
	}
	for(i=0;i<5;i++){
	
	cin>>n[i];
	}
	for(i=0;i<5;i++){
	
	x=m[i];
	m[i]=n[i];
	n[i]=x;
	
	cout<<m[i]<<"\n"<<n[i];
}
}
