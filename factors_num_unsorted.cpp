#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main() {

    int n;
    cout << "Enter value of n: ";
    cin >> n;

    cout << "The factors of " << n << " are " << endl;
    for (int i = 1; i <= sqrt(n); i++) {

        if (n % i == 0) {

            if (n / i == i)
                printf("%d ", i);
            else
                printf("%d %d ", i, n / i);
        }
    }
    
    return 0;
}