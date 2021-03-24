#include <iostream>

using namespace std;

int gcd(int a, int b) {

    // Base case
    if (a == 0)
        return b;
    
    // Recursive GCD
    return gcd(b % a, a);
}

int findSum(unsigned int n) {

    unsigned int sum = 0;

    for (int i = 1; i <= n; i++) {

        // If GCD is 1
        if (gcd(i, n) == 1)
            sum += i;
    }
    
    return sum;
}

int main() {

    int n;
    cout << "Enter value of n: ";
    cin >> n;

    cout << "Sum of all numbers that are co-prime to " << n << " is " << findSum(n) << endl;
    return 0;
}