
#include <iostream>

void filter(double * numbers, int size) {
    for (int i = 0; i < size; i++) {
        if (numbers[i] < 0) {
            numbers[i] = 0;
        }
    }
}



int main() {
    
    double arr[] = {1.5, -2.3, 3.0, -4.1, 5.6};
    int size = sizeof(arr) / sizeof(arr[0]);

    filter(arr, size);

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}