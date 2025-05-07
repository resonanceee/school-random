#include <iostream>
using namespace std;
int main () {

int n, j, i=0;
bool v;
	do {
		cout<<"Inserisci un numero: "<<endl;
		cin>>n;
		if ( i!=0 ) {
			if( n == j ){
				cout<<n<<" ha due valori consecutivi uguali";
				return 0;
			} else{
				cout<<n<<" è diverso";
			}
		}
		j=n;
		cout<<"Vuoi inserire un altro numero? premi 1 se si, premi 0 se no: "<<endl;
		cin>>v;
		i++;
	}	
	while (v == true);
	return 0;
}
