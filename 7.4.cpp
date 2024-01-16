#include <iostream>
using namespace std;
int main(){
	int m,n,a,i,max;
	cin>>m;
	cin>>n;
	
	if(n>m){
		a=n;
		n=m;
		m=a;
	}
	for(i=1;i<=n;i++){
		if(m%i ==0&&n%i ==0){
			max=i;
		}
	}
	cout<<max;
}
