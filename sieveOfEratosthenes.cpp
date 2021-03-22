#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

void sieveOfEratosthenes(int n) {

    bool *prime = new bool[n + 1];
    memset(prime, true, sizeof(prime));
  
    for (int p = 2; p *p <= n; p++) {
    
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
  
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}

int main() 
{
    int n;
    cout << "Enter value of n: ";
  	cin >> n;
    cout << "Prime numbers less than or equal to " << n << " are:" << endl;
  	sieveOfEratosthenes(n);
    return 0;
}