//print odd numbers and even numbers within the start and end range whose varaibles are intalized toa parametric counstructor 
#include <iostream>
using namespace std;

class NumberPrinter {
    public:
        NumberPrinter(int start, int end): start_(start), end_(end) {}

        void printNumbers(bool isEven) {
            cout << (isEven ? "Even Numbers: " : "Odd Numbers: ");
            for (int i = start_; i <= end_; i++) {
                if ((i % 2 == 0) == isEven) {
                    cout << i << " ";
                }
            }
            cout << endl;
        }

    private:
        int start_, end_;
};

int main() {
    int start, end;
    cout << "Enter start and end numbers: ";
    cin >> start >> end;

    NumberPrinter printer(start, end);
    printer.printNumbers(true);
    printer.printNumbers(false);

    return 0;
}
