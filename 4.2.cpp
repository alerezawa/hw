#include <iostream>

using namespace std;

int main(){
	float x,y,z;
	int A,B,S;
	cout<<"please enter x :";
	cin>>x;
	cout<<"please enter y :";
	cin>>y;
	cout<<"please enter z :";
	cin>>z;
	 A=(x-y)*(x+z);
	 B=((x*x)+(y*y)+(z*z))+1;
	 S=A/B;
	 cout<<S;
}