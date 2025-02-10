// codice per valutare la velocità della ricerca dei divisori primi di un numero con la funzione clock() per misurare il tempo di esecuzione
#include <iostream>
using namespace std;

unsigned long long div(int n) {
    // Trovia i divisori primi di numero
    bool hasprimediv = true;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) { // i è un divisore
            bool primo = true;
            
            // Controlla se i è primo
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    primo = false;
                }
            }

            if (primo) {
                cout<< i << " ";
                hasprimediv = true;
            }
        }
    }
    if (!hasprimediv)
    {
        cout<<"Il numero non ha divisori primi";
    }
};

int main() {
    //per importare senza troppi problemi i dati in excel, quando si incollano i risultati del programma è necessario selezionare ":" come separatore di campi
    for (unsigned long long r = 15, count = 0; count < 50 && r <= 18446744073709551615; r *= 2, ++count) { // 2^64 - 1 (valore max per unsigned long long)
        double inizio = clock();
        cout << "N: " << r << " R: "; // Stampa il numero (n= numero iniziale, r=divisori primi)
        int d = div(r);
        double fine = clock();
        cout << "T: " << ((double)fine - (double)inizio) / CLOCKS_PER_SEC << endl << " "; // Stampa il tempo di esecuzione
    }

    return 0;
}
