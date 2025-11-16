#include <iostream>
#include <fstream>
#include <cmath>
#include "hello.hpp"

int main()
{

  std::string filename;
  std::cout << "Enter filename: ";
  std::cin >> filename;

  std::ifstream file;
  file.open(filename);
  if (!file.is_open())
  {
    std::cout << "Can't open file.\n";
    return 1;
  }

  DyArray numbers;
  std::string line;

  while (getline(file, line, ','))
  {

    if (line != "")
    {
      int val = stoi(line);
      numbers.add(val);
    }
  }

  double median;

  if (numbers.size() % 2 == 1)
  {
    median = numbers.get(numbers.size() / 2);
  }
  else
  {
    int a = numbers.get(numbers.size() / 2 - 1);
    int b = numbers.get(numbers.size() / 2);
    median = (a + b) / 2.0;
  }

  std::cout << "Median: " << median << std::endl;

  return 0;
}
