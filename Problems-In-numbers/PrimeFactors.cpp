#include <bits/stdc++.h>
using namespace std ;

class PrimeFactors {

public:

  void printPrimeFactors(int n) {

    cout << "Prime Factors : ";
    for (int i = 2; i * i <= n, n > 1; i++) {

      if (n % i == 0) {

        while (n % i == 0) {

          cout << i << " " ;
          n = n / i ;
        }
      }
    }
  }
} ;
int main() {

  int n = 60;

  PrimeFactors p1 ;
  p1.printPrimeFactors(n)  ;

  return 0  ;
}
