#include <iostream>

using namespace std;
int main(){
int n,i,o;
cin>>n;
for(i=2;i<n;i++)
for(o=2;o*o<=i;o++){
	if(i%o==0)
	break;
	else if(o+1>i){
		cout<<i<<"";
	}
}	
}
