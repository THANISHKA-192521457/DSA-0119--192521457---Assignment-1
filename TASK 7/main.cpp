#include <iostream>
using namespace std;
constexpr long long MIN_BALANCE = 5000;
bool proceduralCanTravel(long long balance, long long fare) {
    return balance - fare >= MIN_BALANCE;
}
class SmartCard {
private:
    long long balance;
public:
    SmartCard(long long b) : balance(b) {}
    bool canTravel(long long fare) {
        return balance - fare >= MIN_BALANCE;
    }
    void deduct(long long fare) {
        if (canTravel(fare))
            balance -= fare;
    }
    long long getBalance() {
        return balance;
    }
};
int main() {
    long long balance = 10000;
    long long fare = 2000;
    if (proceduralCanTravel(balance, fare))
        cout << "Procedural: Journey Allowed" << endl
    SmartCard card(10000);
    if (card.canTravel(fare)) {
        card.deduct(fare);
        cout << "OOP: Journey Allowed" << endl;
    }

    cout << "Remaining Balance: Rs "
         << card.getBalance() / 100.0 << endl;

    return 0;
}
