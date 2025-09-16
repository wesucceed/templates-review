#include <iostream>
#include "fruits.cpp"

template <typename T, int N>
void add(T a)
{
  std::cout << "Sum: " << a + N << std::endl;
}

int main()
{
  add<int, 5>(10); // Just copy and pastex

  // Banana banana("Banana", 7, "Red");
  // Apple apple("Apple", 5);
  // displayFruit(banana);
  // displayFruit(apple);

  // This will cause a compilation error because Apple does not have a color attribute
  // getColor(apple);

  // Uncommenting this line will also cause a compilation error
  // getAppleColor(apple);
  return 0;
}