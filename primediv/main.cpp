#include <iostream>
using namespace std;

int main() {
    unsigned int numero;
    
    cout << "Inserisci un numero intero maggiore di zero: ";
    cin >> numero;

    if (numero < 2) {
        cout << "Il numero deve essere maggiore di 1.\n";
        return 1;
    }

    cout << "I divisori primi di " << numero << " sono:\n";

    // Trovia i divisori di numero
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) { // i è un divisore
            bool primo = true;
            
            // Controlla se i è primo
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    primo = false;
                }
            }

            if (primo) {
                cout << i << " ";
            }
        }
    }

    cout << endl;
    return 0;
}
