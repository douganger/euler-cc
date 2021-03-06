// Copyright 2017 Douglas Anger

// Problem 1
//
// If we list all the natural numbers below 10 that are multiples of 3 or 5, we
// get 3, 5, 6 and 9. The sum of these multiples is 23.
//
// Find the sum of all the multiples of 3 or 5 below 1000.
//
// https://projecteuler.net/problem=1

#include <iostream>
using std::cout;
using std::endl;

int main() {
  int sum = 0;

  for ( int i = 1; i < 1000; i++ ) {
    if ( i%3 == 0 || i%5 == 0 ) {
      cout << i << endl;
      sum += i;
    }
  }

  cout << "Sum: " << sum << endl;

  return 0;
}
