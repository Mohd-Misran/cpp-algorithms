#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n, k, flag = 1;
    cout << "Enter value of n: ";
    cin >> n;

    k = ceil(sqrt(n));

    for (int i = 2; i <= k; i++)
        if (n % i == 0) {
            flag = 0;
            break;
        }
    
    if (flag == 1)
        cout << "Prime number";
    else
        cout << "Not a prime number";
}