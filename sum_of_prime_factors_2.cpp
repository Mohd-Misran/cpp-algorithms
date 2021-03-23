// Time complexity: O (n * log n)

#include <iostream>

using namespace std;

int sumOfPrimeFactors(int n) {

    int sum[n + 1] = { 0 };

    for (int i = 2; i <= n; i++) {

        // If number is prime
        if (!sum[i]) {

            // add this prime to all it's multiples
            for (int j = i; j <= n; j += i)
                sum[j] += i;
        }
    }
    
    return sum[n];
}

int main() {

    int n;
    cout << "Enter value of n: ";
    cin >> n;
    cout << "Sum of prime factors of " << n << " is " << sumOfPrimeFactors(n);
    return 0;
}