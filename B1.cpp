/*
Statement: Given two arrays S[] and E[] of size N denoting starting and closing time of the shops and an integer value K denoting the number of people, the task is to find out the maximum number of shops they can visit in total if they visit each shop optimally based on

the following conditions: A shop can be visited by only one person A person cannot visit another shop if its timing collide with it

Input: S[] (1, 8, 3, 2, 6), E[] = {5, 10, 6, 5, 9), K = 2

Output: 4

Input: S[]= (1, 2, 3), E[] (3, 4, 5), K = 2
Output:3
*/
#include <iostream>
using namespace std;

class Shop {
public:
    int start, end;
    void set(int s, int e) {
        start = s;
        end = e;
    }
};


int partition(Shop arr[], int low, int high) {
    int pivot = arr[high].end; 
    int i = low ;

    for (int j = low; j < high; j++) {
        if (arr[j].end <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}




void quickSort(Shop arr[],int low,int high){
    if(low<high){
        int pi=partition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);

    }
}




int maxShopsVisited(Shop shops[], int n, int k) {
    int personFree[100] = {0}; 
    int count = 0;

    quickSort(shops, 0, n - 1); // sort by end time

    for (int i = 0; i < n; ++i) {
        for (int p = 0; p < k; ++p) {
            if (personFree[p] <= shops[i].start) { // if this person is free
                personFree[p] = shops[i].end;      // assign shop
                count++;
                break; // move to next shop
            }
        }
    }
    return count;
}

int main() {
    int n, k;
    cout << "Enter number of shops: ";
    cin >> n;
    cout << "Enter number of people: ";
    cin >> k;

    int S[100], E[100];
    cout << "Enter start times:\n";
    for (int i = 0; i < n; i++) cin >> S[i];
    cout << "Enter end times:\n";
    for (int i = 0; i < n; i++) cin >> E[i];

    Shop shops[100];
    for (int i = 0; i < n; i++) {
        shops[i].set(S[i], E[i]);
    }

    cout << "Maximum shops visited: " << maxShopsVisited(shops, n, k) << endl;
    return 0;
}





