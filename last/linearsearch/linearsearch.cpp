#include <cassert>
#include <vector>

bool linear_search(int needle, std::vector<int> haystack) {
  for (size_t i = 0; i < haystack.size(); ++i)
    if (needle == haystack[i]) {
      return true;
    }

  return false;
}
int main() {
  int search_value = 5;
  std::vector<int> arr1{1, 2, 3, 4, 5, 6, 67};
  std::vector<int> arr2{1, 2, 3, 4, 4, 6, 67};

  assert(linear_search(5, arr1) == true);
  assert(linear_search(5, arr2) == false);
}
