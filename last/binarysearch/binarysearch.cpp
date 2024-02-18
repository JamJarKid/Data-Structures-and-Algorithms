#include <iostream>
template <typename T>
int binary_search(const T *arr, const T &target, int size) {
  int low = 0;
  int high = size - 1;

  do {
    int mid = (low + (high - low) / 2);
    std::cout << "high is " << high << std::endl;
    std::cout << "mid is " << mid << std::endl;
    std::cout << "low is " << low << std::endl;

    if (arr[mid] == target) {
      return mid;
    } else if (arr[mid] < target) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  } while (low <= high);

  return -1;
}

int main() {
  int arr[8]{0, 1, 2, 3, 4, 5, 6, 7};
  int size{8};
  int target_1{7};
  int target_2{-1};

  std::cout << "Result 1: " << binary_search(arr, target_1, size) << std::endl;
  std::cout << "Result 2: " << binary_search(arr, target_2, size) << std::endl;

  return 0;
}
