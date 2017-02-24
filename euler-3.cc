// Copyright 2017 Douglas Anger

// Problem 3
//
// The prime factors of 13195 are 5, 7, 13 and 29.
//
// What is the largest prime factor of the number 600851475143?
//
// https://projecteuler.net/problem=3

#include <iostream>
using std::cout;
using std::endl;

int main() {
  // We'll be factoring by repeated division. We start with the dividend from
  // the problem, but we'll replace this with the quotient of each successful
  // division.

  uint64_t dividend = 600851475143;

  // Repeated division will find the prime factors in order from least to
  // greatest. Consequently, the last number we can't divide is not only the
  // final prime, but also the largest one, so there will be no need to compare
  // factors once we've found them.

  // Try dividing until we reach the square root of the dividend.

  for ( uint64_t divisor = 2; divisor * divisor <= dividend; divisor++ ) {
    if ( dividend % divisor == 0 ) {
      // We've found a prime factor. Alert the user.
      cout << "Found prime factor: " << divisor << "." << endl;

      // The quotient becomes the new number to factor.
      dividend = dividend / divisor;

      // And the divisors start at two again. (Set it to 1 because it will be
      // incremented at the end of the loop.)
      divisor = 1;
    }
  }

  cout << "Found largest prime factor: " << dividend << "." << endl;

  return 0;
}
