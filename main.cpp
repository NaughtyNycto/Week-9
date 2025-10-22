#include <iostream>
using namespace std;

// Problem 1
// int power (int x, int y) {
//     if (y == 0) {
//         return 1;
//     }
//     else return x * power(x, y - 1);
// }
//
// int main() {
//     cout << power(2, 4) << endl;
// }


// Problem 2
// int reverse(int n, int rev = 0) {
//     if (n == 0) return rev;
//     return reverse(n/10, rev *10 + n%10);
// }
//
// int main() {
//     cout << reverse(1234);
// }


// Problem 3
// int reverse(int n, int rev = 0) {
//     if (n == 0) return rev;
//     return reverse(n/10, rev *10 + n%10);
// }
// bool palin(int n) {
//     if (n<0) return false;
//     if (reverse(n)==n) return true;
//     if (reverse(n)!=n) return false;
// }
//
// int main() {
//     int num;
//     cin >> num;
//     if (reverse(num)) {
//         cout << "True";
//     } else cout << "False";
// }


// Problem 4
// bool prime(int a, int i = 2) {
//     if (a <= 2)
//         return (a == 2);
//     if (a % i == 0)
//         return false;
//     if (i * i > a)
//         return true;
//     return prime(a, i + 1);
// }
//
// int main() {
//     int n;
//     cin >> n;
//     if (prime(n))
//         cout << "true";
//     else cout << "false";
// }


// Problem 5
// int evenCounter (int n) {
//     n = abs(n);
//     if (n == 0) return 0;
//     if ((n%10)%2 == 0) return 1 + evenCounter(n/10);
//     else return evenCounter(n/10);
// }
// int main() {
//     cout << evenCounter(1234);
// }


// Problem 6
// int product(int n) {
//     if (n == 0) return 1;
//     else return n%10 * product(n/10);
// }
// int main() {
//     cout << product(1234);
// }


// Problem 7
// bool pow2(int n) {
//     if (n == 1) return true;
//     if (n % 2 != 0 || n <= 0) return false;
//     return pow2(n / 2);
// }
//
// int main() {
//     int n;
//     cin >> n;
//     cout << (pow2(n) ? "true" : "false");
// }


// Problem 8
// bool increase(int n) {
//     if (n < 10) return true;
//
//     int lastDigit = n % 10;
//     int secondLastDigit = (n / 10) % 10;
//
//     if (lastDigit <= secondLastDigit) {
//         return false;
//     }
//
//     return increase(n / 10);
// }
//
// int main() {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;
//
//     if (increase(number)) {
//         cout << "true" << endl;
//     } else {
//         cout << "false" << endl;
//     }
// }


// Problem 9
// int countZero(int n) {
//     if (n == 0) {
//         return 1;
//     }
//
//     if (n < 10) {
//         return 0;
//     }
//
//     int lastDigit = n % 10;
//     int count = 0;
//
//     if (lastDigit == 0) {
//         count = 1;
//     }
//
//     return count + countZero(n / 10);
// }
//
// int main() {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;
//
//     cout << countZero(number) << endl;
// }


// Problem 10
// int power(int x, int y) {
//     if (y == 0) {
//         return 1;
//     }
//
//     if (y % 2 == 0) {
//         int half = power(x, y / 2);
//         return half * half;
//     } else {
//         return x * power(x, y - 1);
//     }
// }
//
// int main() {
//     int base, exponent;
//     cout << "Enter base: ";
//     cin >> base;
//     cout << "Enter exponent: ";
//     cin >> exponent;
//
//     cout << power(base, exponent) << endl;
// }