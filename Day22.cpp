#include <iostream>
using namespace std;
class MaxCalculator {
    private:
        int first, second, third, fourth, max;
    public:
        void findMax() {
            cout << "Enter four numbers: ";
            cin >> first >> second >> third >> fourth;
            max = first;
            if (second > max) max = second;
            if (third > max) max = third;
            if (fourth > max) max = fourth;
        }
        void displayMax() {
            cout << "The largest number is: " << max;
        }
};
int main() {
    MaxCalculator mc;
    mc.findMax();
    mc.displayMax();
    return 0;
}
