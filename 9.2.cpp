#include <iostream>

using namespace std;
int main(){
int i,a[10]={8,42,1,435,121,84,21,47,12,8874};
int num0=a[0];
int num1=a[0];
for(i=0;i<10;i++){
	if(a[i]<num0)
	num0=a[i];
	if(a[i]<num1&&a[i]>num0)
	num1=a[i];
	
}	
cout<<num0<<""<<num1;y
}
