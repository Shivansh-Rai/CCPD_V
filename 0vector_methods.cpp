#include <iostream>
#include <vector>
#include <algorithm> // For sort and reverse
#include <iterator>  // For iterators
using namespace std;

int main() {
    // Declare a vector of integers
    vector<int> arr;

    // Add elements to the vector using push_back
    arr.push_back(10); // Adds 10 to the end
    arr.push_back(20); // Adds 20 to the end
    arr.push_back(30); // Adds 30 to the end
    arr.push_back(5);  // Adds 5 to the end
    arr.push_back(25); // Adds 25 to the end

    // Access elements using at() and []
    cout << "First element (at): " << arr.at(0) << endl; // Safe access
    cout << "Second element ([]): " << arr[1] << endl;   // Direct access

    // Get the size of the vector
    cout << "Size of vector: " << arr.size() << endl;

    // Insert element at specific position
    arr.insert(arr.begin() + 1, 15); // Inserts 15 at index 1

    // Remove last element
    arr.pop_back(); // Removes last element

    // Erase element at specific position
    arr.erase(arr.begin()); // Removes first element

    // Iterate over vector using for loop
    cout << "Elements in vector: ";
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Iterate using range-based for loop
    cout << "Range-based for loop: ";
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    // Check if vector is empty
    if (arr.empty()) {
        cout << "Vector is empty." << endl;
    } else {
        cout << "Vector is not empty." << endl;
    }

    // Sort the vector in ascending order
    sort(arr.begin(), arr.end());
    cout << "Sorted vector: ";
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    // Reverse the vector
    reverse(arr.begin(), arr.end());
    cout << "Reversed vector: ";
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    // Find an element in the vector
    int searchVal = 15;
    auto it = find(arr.begin(), arr.end(), searchVal);
    if (it != arr.end()) {
        cout << "Element " << searchVal << " found at index " << distance(arr.begin(), it) << endl;
    } else {
        cout << "Element " << searchVal << " not found." << endl;
    }

    // Split vector into two halves (basic example)
    size_t mid = arr.size() / 2;
    vector<int> firstHalf(arr.begin(), arr.begin() + mid);
    vector<int> secondHalf(arr.begin() + mid, arr.end());
    cout << "First half: ";
    for (int val : firstHalf) cout << val << " ";
    cout << endl;
    cout << "Second half: ";
    for (int val : secondHalf) cout << val << " ";
    cout << endl;

    // Clear all elements from vector
    arr.clear();
    cout << "Size after clear: " << arr.size() << endl;

    return 0;
}