#include <iostream>
#include <sys/time.h>

using namespace std;

// Naive approach: Summing numbers from 1 to n iteratively
long long naive_gauss_sum(int n) {
	long long sum = 0;
	for (int i = 1; i <= n; ++i) {
		sum += i;
	}
	return sum;
}

// Efficient approach: Using Gauss' formula
long long formula_gauss_sum(int n) {
	return (static_cast<long long>(n) * (n + 1)) / 2;
}

int main() {
	for (int n = 10000; n <= 150000; n += 10000) {
		// Measure time for naive approach
		double inizio1 = clock();
		long long sum1 = naive_gauss_sum(n);
		double fine1 = clock();

		cout << "\nNaive sum for " << n << ": " << sum1;
		cout << "\nIl tempo in secondi e': " << ((double)fine1 - (double)inizio1) / CLOCKS_PER_SEC;

		// Measure time for formula-based approach
		double inizio2 = clock();
		long long sum2 = formula_gauss_sum(n);
		double fine2 = clock();

		cout << "\nFormula sum for " << n << ": " << sum2;
		cout << "\nIl tempo in secondi e': " << ((double)fine2 - (double)inizio2) / CLOCKS_PER_SEC << endl;
	}

	return 0;
}
