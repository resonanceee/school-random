#include <iostream>
using namespace std;

int main() {
    int n, i = 0;
    int min, max, minn, maxx;
    bool v;

    // Primo numero
    cout << "Inserisci un numero: ";
    cin >> n;
    min = max = n;
    // Inizializziamo i secondi estremi con un valore "non valido"
    minn = 999999;
    maxx = -999999;
    i++;

    cout << "Vuoi inserire un altro numero? premi 1 se si, premi 0 se no: ";
    cin >> v;

    while (v) {
        cout << "Inserisci un numero: ";
        cin >> n;
        i++;

        // Massimo e secondo massimo
        if (n > max) {
            maxx = max;
            max = n;
        } else if (n < max && n > maxx) {
            maxx = n;
        }

        // Minimo e secondo minimo
        if (n < min) {
            minn = min;
            min = n;
        } else if (n > min && n < minn) {
            minn = n;
        }

        cout << "Vuoi inserire un altro numero? premi 1 se si, premi 0 se no: ";
        cin >> v;
    }

    cout << "Minimo: " << min << endl;
    if (minn != 999999)
        cout << "Secondo minimo: " << minn << endl;
    else
        cout << "Secondo minimo non disponibile (tutti i valori sono uguali o uno solo inserito)." << endl;

    cout << "Massimo: " << max << endl;
    if (maxx != -999999)
        cout << "Secondo massimo: " << maxx << endl;
    else
        cout << "Secondo massimo non disponibile (tutti i valori sono uguali o uno solo inserito)." << endl;

    return 0;
}
