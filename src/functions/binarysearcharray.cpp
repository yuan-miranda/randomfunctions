#include "../../header/main.h"

int BinarySearchArray(int arr[], int left, int right, int target) {
    // check if the search range is empty
    if(left > right) {
        return -1;
    }

    // calculate the middle index of the array.
    int mid = left + (right - left) / 2;

    // check if the target is at the middle index.
    if(target == arr[mid]) {
        return mid;
    }

    // if the target is smaller than the middle element, search in the left half .
    if(target < arr[mid]) {
        return BinarySearchArray(arr, left, mid - 1, target);
    }

    // if the key is larger than the middle element, search in the right half.
    if(target > arr[mid]) {
        return BinarySearchArray(arr, mid + 1, right, target);
    }
}