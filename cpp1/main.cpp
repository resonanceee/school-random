#include <iostream>

int add2n() {
    int x, y, z; // dichiarazione di tre variabili intere
    std::cout << "Inserisci il primo numero: "; // stampa a video
    std::cin >> x; // acquisizione del primo numero da tastiera
    std::cout << "Inserisci il secondo numero: "; // stampa a video
    std::cin >> y; // acquisizione del secondo numero da tastiera
    z = x + y; // somma dei due numeri
    std::cout << "La somma di " << x << " e " << y << " è " << z << std::endl; // stampa a video
    return 0;
}

int add3n() {
    int x, y, z, w; // dichiarazione di quattro variabili intere
    std::cout << "Inserisci il primo numero: "; // stampa a video
    std::cin >> x; // acquisizione del primo numero da tastiera
    std::cout << "Inserisci il secondo numero: "; // stampa a video
    std::cin >> y; // acquisizione del secondo numero da tastiera
    std::cout << "Inserisci il terzo numero: "; // stampa a video
    std::cin >> z; // acquisizione del terzo numero da tastiera
    w = x + y + z; // somma dei tre numeri
    std::cout << "La somma di " << x << ", " << y << " e " << z << " è " << w << std::endl; // stampa a video
    return 0;
}

int sub2n() {
    int x, y, z; // dichiarazione di tre variabili intere
    std::cout << "Inserisci il primo numero: "; // stampa a video
    std::cin >> x; // acquisizione del primo numero da tastiera
    std::cout << "Inserisci il secondo numero: "; // stampa a video
    std::cin >> y; // acquisizione del secondo numero da tastiera
    z = x - y; // differenza dei due numeri
    std::cout << "La differenza di " << x << " e " << y << " è " << z << std::endl; // stampa a video
    return 0;
}

int sub3n() {
    int x, y, z, w; // dichiarazione di quattro variabili intere
    std::cout << "Inserisci il primo numero: "; // stampa a video
    std::cin >> x; // acquisizione del primo numero da tastiera
    std::cout << "Inserisci il secondo numero: "; // stampa a video
    std::cin >> y; // acquisizione del secondo numero da tastiera
    std::cout << "Inserisci il terzo numero: "; // stampa a video
    std::cin >> z; // acquisizione del terzo numero da tastiera
    w = x - y - z; // differenza dei tre numeri
    std::cout << "La differenza di " << x << ", " << y << " e " << z << " è " << w << std::endl; // stampa a video
    return 0;
}

int mult2n() {
    int x, y, z; // dichiarazione di tre variabili intere
    std::cout << "Inserisci il primo numero: "; // stampa a video
    std::cin >> x; // acquisizione del primo numero da tastiera
    std::cout << "Inserisci il secondo numero: "; // stampa a video
    std::cin >> y; // acquisizione del secondo numero da tastiera
    z = x * y; // moltiplicazione dei due numeri
    std::cout << "Il prodotto di " << x << " e " << y << " è " << z << std::endl; // stampa a video
    return 0;
}

int mult3n() {
    int x, y, z, w; // dichiarazione di quattro variabili intere
    std::cout << "Inserisci il primo numero: "; // stampa a video
    std::cin >> x; // acquisizione del primo numero da tastiera
    std::cout << "Inserisci il secondo numero: "; // stampa a video
    std::cin >> y; // acquisizione del secondo numero da tastiera
    std::cout << "Inserisci il terzo numero: "; // stampa a video
    std::cin >> z; // acquisizione del terzo numero da tastiera
    w = x * y * z; // moltiplicazione dei tre numeri
    std::cout << "Il prodotto di " << x << ", " << y << " e " << z << " è " << w << std::endl; // stampa a video
    return 0;
}

int main() {
    char operazione; // dichiarazione di una variabile carattere
    int n; // dichiarazione di una variabile intera
    std::cout << "Che tipo di operazione vuoi fare?" << std::endl; // stampa a video
    std::cout << "A) Somma" << std::endl; // stampa a video
    std::cout << "B) Differenza" << std::endl; // stampa a video
    std::cout << "C) Moltiplicazione" << std::endl; // stampa a video
    std::cin >> operazione; // acquisizione dell'operazione da tastiera
    std::cout << "Hai scelto l'operazione " << operazione << std::endl; // stampa a video
    std::cout << "Vuoi inserire 2 o 3 numeri interi?" << std::endl; // stampa a video
    std::cin >> n; // acquisizione del numero di numeri da tastiera
    // controllo dell'operazione scelta
    if (operazione == 'A' or operazione == 'a') {   
        // controllo del numero di numeri scelti
        if (n == 2) {
            add2n(); // chiamata alla funzione add2n
        }
        else if (n == 3) {
            add3n(); // chiamata alla funzione add3n
        }
    }
    // controllo dell'operazione scelta
    else if (operazione == 'B' or operazione == 'b') {
        // controllo del numero di numeri scelti
        if (n == 2) {
            sub2n(); // chiamata alla funzione sub2n
        }
        else if (n == 3) {
            sub3n(); // chiamata alla funzione sub3n
        }
    }
    // controllo dell'operazione scelta
    else if (operazione == 'C' or operazione == 'c')
    {
        // controllo del numero di numeri scelti
        if (n == 2) {
            mult2n(); // chiamata alla funzione mult2n
        }
        else if (n == 3) {
            mult3n(); // chiamata alla funzione mult3n
        }
    }
}