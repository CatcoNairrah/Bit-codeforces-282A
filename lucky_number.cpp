#include <iostream>
#include <string>

using namespace std;

// Function to count lucky digits in a number
int countLuckyDigits(long long n) {
    int count = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit == 4 || digit == 7)
            count++;
        n /= 10;
    }
    return count;
}

// Function to check if a number is lucky
bool isLucky(int n) {
    return (n == 4 || n == 7);
}

int main() {
    long long n;
    cin >> n;

    int luckyDigitCount = countLuckyDigits(n);
    
    if (isLucky(luckyDigitCount))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
