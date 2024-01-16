#include <iostream>

using namespace std;
int main(){
	int number[10];
	int x,y,i;
	for(i=0;i<10;i++){
		cin>>number[i];
	}
	x=number[0];
	y=number[0];
	for(i=0;i<10;i++){
		if(number[i]>x){
			x=number[i];
		}
		if(number[i<y]){
			y=number[i];
		}
	}
	cout<<"x:"<<x<<"\t";
	cout<<"y:"<<y<<"\t";
}
