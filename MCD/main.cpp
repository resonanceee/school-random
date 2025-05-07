#include <iostream>
using namespace std;
int main () {

unsigned int n,x,div;

	cout<<"inserisci un numro: ";
	cin>>n;
	
	cout<<"ionserisci un 2ndo numero: ";
	cin>>x;
	
	if(n>=x){
		div=n;
	}
		else{
			div=x;
		}

	for(int i=div; i--;){
		if(n%div== 0 && x%div == 0){
		
			cout<<div<<" è MCD"<<endl;
			return 0;
		}
		div--;
	}
			return 0;
}



//min min2 max max2
