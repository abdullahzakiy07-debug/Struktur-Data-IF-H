#include <iostream>
using namespace std;

double* calculateStats(double arr[], int size) {
    // You'll need to calculate 4 values before storing them in newArr
    // Initialize variables for sum (start at 0), max, and min (both start at arr[0])
    // Use a for loop to iterate through the array
    // Inside the loop:
    //   - Add each element to sum
    //   - Compare each element with max and update if larger
    //   - Compare each element with min and update if smaller
    // Calculate average = sum / size (after the loop)
    

    double* newArr = new double[4];
    newArr[0] = sum;
    newArr[1] = average;
    newArr[2] = max;
    newArr[3] = min;

    return newArr;
}

int main() {
    int n;

    std::cin >> n;
    std::cin.ignore();
    double arr[n];

    for (int i = 0; i < n; i++) {
        double val;
        std::cin >> val;
        arr[i] = val;
    }

    double* stats = calculateStats(arr, n);
    std::cout << "Sum: " << stats[0] << std::endl;
    std::cout << "Average: " << stats[1] << std::endl;
    std::cout << "Maximum: " << stats[2] << std::endl;
    std::cout << "Minimum: " << stats[3] << std::endl;
    delete[] stats;
    return 0;
}