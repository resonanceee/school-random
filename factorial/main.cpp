#include <iostream>
#include <sys/time.h>

using namespace std;

long long naive_factorial_sum(int n) {
    long long sum = 0;
    long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}


int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    // measure time
    double inizio1 = clock();
    long long sum = naive_factorial_sum(n);
    double fine1 = clock();
    
    cout << "\nNaive factorial sum: " << sum;
    cout << "\nIl tempo in secondi e': " << ((double)fine1 - (double)inizio1) / CLOCKS_PER_SEC;
    
    return 0;
}
