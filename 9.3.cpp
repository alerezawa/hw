#include <iostream>

using namespace std;
int main(){
	

int i, fib[10];
fib[10]=1;
for(i=1;i<10;i++){
	fib[i]=fib[i-1]+fib[i-2];
}
for(i=0;i<10;i++){
cout<<fib[i];	
}
}