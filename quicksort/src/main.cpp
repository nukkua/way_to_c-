#include <iostream>
#include <vector>

int partition(std::vector<int> &arr, int low, int high) {
  int pivot = arr[high]; // pivot
  int i = (low - 1);     // Index of smaller element

  for (int j = low; j <= high - 1; j++) {
    // If current element is smaller than or
    // equal to pivot
    if (arr[j] <= pivot) {
      i++; // increment index of smaller element
      std::swap(arr[i], arr[j]);
    }
  }
  std::swap(arr[i + 1], arr[high]);
  return (i + 1);
}

void quicksort(std::vector<int> &arr, int low, int high) {
  if (low < high) {
    // Partitioning index
    int pi = partition(arr, low, high);

    // Separately sort elements before
    // partition and after partition
    quicksort(arr, low, pi - 1);
    quicksort(arr, pi + 1, high);
  }
}
int main() {
  std::vector<int> arr = {5, 7, 3, 2, 20, 4};
  int n = arr.size();

  quicksort(arr, 0, n - 1);

  std::cout << "Sorted array: \n";
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << "\n";
  return 0;
}
