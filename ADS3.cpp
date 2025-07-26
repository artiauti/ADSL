/*given a number n.the task is to find the smallest number with atleast n trailing zeros in factorial
contains at least n trailing zeros*/
#include <iostream>
using namespace std;

class TrailingZeroes {
    int n; 
    int result;

public:
    void input();
    int countzeros(int);
    void findSmallestNumber();
    void display();
};

void TrailingZeroes::input() {
    cout << "Enter number of trailing zeroes: ";
    cin >> n;
}

int TrailingZeroes::countzeros(int num) {
    int count = 0;
    while (num >= 5) {
        count += num / 5;
        num /= 5;
    }
    return count;
}

void TrailingZeroes::findSmallestNumber() {

    int low = 0, high = 5*n;
    result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        int zeroes = countzeros(mid);

        if (zeroes >= n) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
}

void TrailingZeroes::display() {
    cout << "Smallest number whose factorial has at least " << n << " trailing zeroes is: " << result << endl;
}

int main() {
    TrailingZeroes obj;
    int choice;

    cout << "Menu:\n";
    cout << "1. Find smallest number for given trailing zeroes\n";
    cout << "2. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            obj.input();
            obj.findSmallestNumber();
            obj.display();
            break;
        case 2:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice.\n";
    }

    return 0;
}
