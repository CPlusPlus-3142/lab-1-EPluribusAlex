// practicing some imperative C++
// see README for instructions
#include <iostream>
#include <string>
using namespace std;

bool isPrime(int x);
int closestPrime(int x);

/** You should put in a main for testing, but then comment it out for submission.
 * The test.cpp file will include the main in your submission. You do not edit the test.cpp 
 * file. The only file to edit is app.cpp**/

/*
    Takes int, tests if prime, and outputs bool
*/
bool isPrime(int x) {
    if (x <= 1)
        return false;
    if (x == 2)
        return true;

    int const TESTLAST = x / 2;

    for (int i = 3; i <= TESTLAST; i+=2) {
        if (x % i == 0)
            return false;
    }

    return true;
}

/*
    looks for first prime value higher than x
*/
int closestPrime(int x) {
    for (int i = x + 1;; i++) {
        if (isPrime(i)) {
            return i;
        }
    }
}

/*
    outputs if prime and closest prime (if not)
*/
// void testResult(int x) {
//     if (isPrime(x)) {
//         cout << x << " is prime." << endl;
//     } else {
//         cout 
//             << x << " is not prime. Closest prime is " << closestPrime(x) 
//             << "." << endl;
//     }
// }

// int main() {
//     cout << "Enter two numbers: ";

//     int x1, x2;

//     cin >> x1;
//     cin >> x2;

//     cout << endl;

//     testResult(x1);
//     testResult(x2);

//     return 0;          
// }
