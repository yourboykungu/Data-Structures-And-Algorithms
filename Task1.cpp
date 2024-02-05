#include <iostream>
#include <limits>

int summation(const int* arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    return sum;
}

int maximum(const int* arr, int n) {
    int max = std::numeric_limits<int>::min();
    for (int i = 0; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;
    std::cout << "Enter the size of the array (n): ";
    std::cin >> n;

    int* arr = new int[n];

    std::cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int sum = summation(arr, n);
    int max = maximum(arr, n);

    std::cout << "Sum: " << sum << "\n";
    std::cout << "Maximum: " << max << "\n";

    delete[] arr;
    return 0;
}
