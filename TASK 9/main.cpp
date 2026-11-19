#include <iostream>
using namespace std;

enum class Zone { Inner, Middle, Outer };

constexpr long long MIN_BALANCE = 5000;

bool isPeak(int hour) {
    return (hour >= 8 && hour < 10) ||
           (hour >= 17 && hour < 20);
}

long long calculateFare(Zone zone, int hour) {
    long long base = 0;

    switch (zone) {
        case Zone::Inner: base = 1000; break;
        case Zone::Middle: base = 2000; break;
        case Zone::Outer: base = 3000; break;
    }

    if (isPeak(hour))
        base += base * 20 / 100;

    return base;
}

int main() {
    long long balance = 20000;

    struct Test {
        Zone zone;
        int hour;
    };

    Test tests[] = {
        {Zone::Inner, 7},
        {Zone::Middle, 9},
        {Zone::Outer, 12},
        {Zone::Inner, 18},
        {Zone::Outer, 20}
    };

    for (const Test& t : tests) {
        long long fare = calculateFare(t.zone, t.hour);

        cout << "Fare: Rs " << fare / 100.0;

        if (balance - fare >= MIN_BALANCE) {
            balance -= fare;
            cout << " - Journey Allowed";
        } else {
            cout << " - Journey Denied";
        }

        cout << " - Balance: Rs " << balance / 100.0 << endl;
    }

    return 0;
}
