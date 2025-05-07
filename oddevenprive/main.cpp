#include <iostream>
using namespace std;
int main () {

int n, mult;
bool v;
bool primo=true;

	do {
	cout<<"Inserisci un numero: "<<endl;
	cin>>n;
	cout<<"Vuoi inserire un altro numero? premi 1 se si, premi 0 se no: "<<endl;
	cin>>v;	
	
		if(n%2 == 0){
			cout<<n<<" è pari"<<endl;
		}
	
			else {
				cout<<n<<" è dispari"<<endl;
			}
	
		if(n % 5 == 0){
			cout<<n<<" è multiplo di 5"<<endl;
		}
	
			else {
				cout<<n<<" non è multiplo di 5"<<endl;
			}
	
		for(int i = 2; i<=n/2; i++){
		
			if(n % i == 0){
				cout<<n<<" non è primo"<<endl;
				primo = false;
			}	
		}
		if (primo == true){
			cout<<n<<" è primo"<<endl;
		}
		primo = true;
	} while (v == true);
	return 0;
}
