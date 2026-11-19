#include <iostream>
#include <climits>
using namespace std;
int main() {
    bool peak = true;
    char zone = 'I';
    int hour = 9;
    long long balance = 10000;
    double fare = 10.50;
    float discount = 0.20f;
    cout << "Boolean size: " << sizeof(peak) << endl;
    cout << "Character size: " << sizeof(zone) << endl;
    cout << "Integer size: " << sizeof(hour) << endl;
    cout << "Long long size: " << sizeof(balance) << endl;
    cout << "Double size: " << sizeof(fare) << endl;
    cout << "Float size: " << sizeof(discount) << endl;
    cout << "Maximum int value: " << INT_MAX << endl;
    long long journeys = 3000000;
    long long total = journeys * 3000;
    cout << "Total collection in paise: " << total << endl;
    cout << "Total collection in rupees: " << total / 100.0 << endl;
    return 0;
}
