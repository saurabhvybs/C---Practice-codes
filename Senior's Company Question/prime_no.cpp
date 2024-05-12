#include <iostream>
#include <conio.h>
using namespace std;
bool isPrime(int number)
{
  for (int i = 2; i * i <= number; ++i)
  {
    if (number % i == 0)
    {
      return false; // If divisible, the number is not prime
    }
  }
 return true; // If not divisible by any number, it is prime
}
int main()
{
  int i, n, count=0;
  cout << "Enter the range:\t";
  cin >> n;
  for (i = 2; i <= n; i++)
  {
    if (isPrime(i))
    {
      count++;
    }
  }
  std::cout << count;
  return 0;
}
