#include <iostream>

using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    // Calculate the maximum number of toasts based on each ingredient
    int max_toasts_drink = (k * l) / nl;
    int max_toasts_lime = (c * d);
    int max_toasts_salt = p / np;

    // Find the minimum among the three limiting factors
    int min_toasts = min(min(max_toasts_drink, max_toasts_lime), max_toasts_salt);

    // Calculate the number of toasts each friend can make
    int toasts_per_friend = min_toasts / n;

    cout << toasts_per_friend << endl;

    return 0;
}
