#include <iostream>
#include <string>

class Banana
{
public:
  std::string name;
  int size;
  std::string color;
  Banana(std::string name, int size, std::string color) : name(name), size(size), color(color) {}
};

class Apple
{
public:
  std::string name;
  int size;
  Apple(std::string name, int size) : name(name), size(size) {}
};

// Function templates to display fruit information
template <typename Fruit>
void displayFruit(const Fruit &fruit)
{
  std::cout << "Fruit: " << fruit.name << ", Size: " << fruit.size << std::endl;
}

template <typename Fruit>
void getColor(const Fruit &fruit)
{
  std::cout << "Fruit: " << fruit.name << ", Color: " << fruit.color << std::endl;
}

// Note: The getAppleColor function will cause a compilation error if called,
// because the Apple class does not have a color attribute.
// void getAppleColor(const Apple &fruit)
// {
//   std::cout << "Fruit: " << fruit.name << ", Color: " << fruit.color << std::endl;
// }
