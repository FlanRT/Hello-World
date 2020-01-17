#include <iostream>
#include <vector>
#include <cmath>

bool is_prime(int nNumber) {
  int nSqrt = sqrt(nNumber);
  
  for (int i = 2; i <= Sqrt; i++)
    if (nNumber % i == 0)
      return false;
  return true;
}

int main() {
  int nStart, nEnd;
  std::vector<int> vPrimes;
  
  std::cout << "Enter the start of the interval : ";
  std::cin >> nStart;
  std::cout << "Enter the end of the interval : ";
  std::cin >> nEnd;
  
  for (int i = nStart; i <= nEnd; i++)
    if (is_prime(i))
      vPrimes.push_back(i);
      
  std::cout << "These are the primes in the given range : \n";
  
  for (int n : vPrimes)
    std::cout << n << '\n';
}
