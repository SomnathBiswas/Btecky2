#include <iostream>
using namespace std;

void swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

void bubbleSort(char arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    const int size = 26; // Number of alphabets
    char alphabets[size] = {'z', 'a', 'g', 'b', 'm', 'x', 'c', 'p', 'd', 'y', 'h', 'n', 'q', 'e', 'f', 'r', 'i', 'j', 'k', 'l', 's', 'o', 't', 'u', 'v', 'w'};

    cout << "Original array of alphabets:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << alphabets[i] << " ";
    }

    // Sorting the array using bubble sort
    bubbleSort(alphabets, size);

    cout << "\n\nArray of alphabets after sorting in ascending order:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << alphabets[i] << " ";
    }

    return 0;
}
