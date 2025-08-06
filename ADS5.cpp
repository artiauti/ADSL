/*return the k-th smallest element across two sorted arrays*/
#include <iostream>
using namespace std;

class KthSmallest {
    int num1[100], num2[100], merged[200];
    int size1, size2, k, totalSize;

public:
    void getInput() {
        cout << "Enter size of first array: ";
        cin >> size1;
        cout << "Enter " << size1 << " elements of first sorted array:\n";
        for (int i = 0; i < size1; i++) {
            cin >> num1[i];
        }

        cout << "Enter size of second array: ";
        cin >> size2;
        cout << "Enter " << size2 << " elements of second sorted array:\n";
        for (int i = 0; i < size2; i++) {
            cin >> num2[i];
        }

        cout << "Enter the value of k: ";
        cin >> k;
    }

    void mergeArrays() {
        int i = 0, j = 0, m = 0;

        // Merging two sorted arrays
        while (i < size1 && j < size2) {
            if (num1[i] < num2[j]) {
                merged[m++] = num1[i++];
            } else {
                merged[m++] = num2[j++];
            }
        }
        while (i < size1) {
            merged[m++] = num1[i++];
        }
        while (j < size2) {
            merged[m++] = num2[j++];
        }

        totalSize = m;

        // Display merged array
        cout << "Merged Array: ";
        for (int x = 0; x < totalSize; x++) {
            cout << merged[x] << " ";
        }
        cout << endl;
    }

    void findKthSmallest() {
        if (k <= 0 || k > totalSize) {
            cout << "Invalid value of k.\n";
        } else {
            cout << "The " << k << "-th smallest element is: " << merged[k - 1] << endl;
        }
    }
};

int main() {
    KthSmallest obj;
    int choice;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Enter Arrays and k\n";
        cout << "2. Merge Arrays and Show\n";
        cout << "3. Find k-th Smallest Element\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                obj.getInput();
                break;
            case 2:
                obj.mergeArrays();
                break;
            case 3:
                obj.findKthSmallest();
                break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 4);

    return 0;
}