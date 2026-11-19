#include <iostream>
using namespace std;
enum class Zone {
    Inner, Middle, Outer
};
constexpr int INNER_FARE = 1000;
constexpr int MIDDLE_FARE = 2000;
constexpr int OUTER_FARE = 3000;
constexpr int PEAK_SURCHARGE = 20;
constexpr int MIN_BALANCE = 5000;
int main() {
    Zone passengerZone = Zone::Inner;
    cout << "Inner Fare: Rs " << INNER_FARE / 100.0 << endl;
    cout << "Middle Fare: Rs " << MIDDLE_FARE / 100.0 << endl;
    cout << "Outer Fare: Rs " << OUTER_FARE / 100.0 << endl;

    cout << "Peak Surcharge: "
         << PEAK_SURCHARGE << "%" << endl;

    cout << "Minimum Balance: Rs "
         << MIN_BALANCE / 100.0 << endl;

    return 0;
}
