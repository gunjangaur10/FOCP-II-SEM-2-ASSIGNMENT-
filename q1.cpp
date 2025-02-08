#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void printFactors(int n) {
    cout << "Factors of " << n << ": ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) cout << i << " ";
    }
    cout << endl;
}

int nextPrime(int n) {
    while (!isPrime(++n));
    return n;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n)) {
        cout << n << " is prime.\n";
        cout << "Next prime: " << nextPrime(n) << endl;
    } else {
        cout << n << " is NOT prime.\n";
        printFactors(n);
    }

    return 0;
}