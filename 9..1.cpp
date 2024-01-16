#include <iostream>
#define array_size 10
using namespace std;
int main(){
	int i,j,a[array_size] ={1,8,11,17,19,22,27,32,35},tem;
	cin>> a[9];
	for(i=1;i<array_size;++i){
		for(j=0;j<(array_size-i);j++){
			if(a[j]>a[j+1]){
				tem=a[j];
				a[j]=a[j+1];
				a[j+1]=tem;
			}
		}
	}
	for(i=0;i<10;i++){
		cout<<a[i]<<"";
	}
	
	
}
