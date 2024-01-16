#include <iostream>
using namespace std;
int main(){
	float  hf;
	int max;
	cout<<"lotfan hogog tan ra vared knid:";
	cin>>hf;
	if(hf<6000000){
		cout<<"maliat nadarid...";
	}
	else if(hf>=6000000&&hf<8000000){
		max=(float)  (hf*0.95);
		cout<<max;
	}
	else if(hf>=8000000&&hf<10000000){
		max=(float) hf*0.90;
		cout<<max;
	} 
	else if(hf<=10000000&&hf<14000000){
		max=(float) hf*0.85;
		cout<<max;
	}
	else if(hf>=14000000&&hf<18000000){
		max=(float) hf*0.80;
		cout<<max;
	}
	else if(hf>=180000007&&hf<25000000){
		max=(float) hf*0.75;
		cout<<max;
	}
	else if(hf>=25000000){
		max=(float) hf*0.65;
		cout<<max;
		
	}
}

