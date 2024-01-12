#include <initializer_list>
#include <iostream>

template <typename T, size_t S> class Array {
public:
  Array(std::initializer_list<T> init) {
    size_t i = 0;
    for (auto &value : init) {
      m_data[i] = value;
      ++i;
    }
  }

  Array() {}

  constexpr size_t Size() const { return S; }

  T &operator[](size_t index) { return m_data[index]; }
  const T &operator[](size_t index) const { return m_data[index]; }

private:
  T m_data[S] = {};
};

int main() {
  Array<int, 5> data{1, 10, 100, 1000, 5000};

  for (size_t i = 0; i < data.Size(); ++i) {
    std::cout << data[i] << std::endl;
  }
}
