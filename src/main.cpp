/*
lab2 inclassassignment2 Recursion
*/

#include <iostream>
#include <vector>
using namespace std;

int calculateFactorial(int n) { // This is the start of the function the int factorial and this esssentially helps with
    if (n == 0) {
        return 1; // This is essentially the base case
    } else {
        return n * calculateFactorial(n - 1); // This is essentially the recursive case
    }
}

int thesumArray(int arr[], int size) {
    if (size <= 0) {
        return 0; // This is essentially the base case
        return arr[size - 1] + thesumArray(arr, size - 1); // This is also essentially the recursive case
    }
    return arr[size - 1] + thesumArray(arr, size - 1); // This is also essentially the recursive case
}
int binarysearch(int arr[], int left, int right, int target) {//binary serach
    if (left > right) {
        return -1;
    }
    int middle = left + (right - left) / 2;
    if (arr[middle] == target) {
        return middle;
    } else if (arr[middle] > target) {
        return binarysearch(arr, left, middle - 1, target);
    } else {
        return binarysearch(arr, middle + 1, right, target);
    }
}


int main() {

    int factorial5 = calculateFactorial(5);
    int factorial7 = calculateFactorial(7);
    cout << "The Factorial(5) = " << factorial5 << endl;
    cout << "The Factorial(7) = " << factorial7 << endl;

    int arr[]= {2,4,6,8,10,12};
    int thesumResult= thesumArray(arr, 4);
    cout << "The sum of 2,4,6,8 at n=4 is : " << thesumResult << endl;


    int size = 6;
    int target = 8;

    cout << "The binary search for 8 in the array is at index: " << binarysearch(arr, 0, size - 1, target) << endl;
    return 0;
}
