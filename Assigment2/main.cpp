#include <iostream>
#include "assignments.h"

int main() {
   setlocale(LC_ALL, "russian");
  binaryReadWrite("example_file.bin");
  std::string calculate;
  std::cout << "Введите польское уравнение: ";
  std::getline (std::cin, calculate);
  std::string uravn= "3 4 + 2 *";
  int result = calculatePolishEntry(uravn);
  std::cout << "Ответ: " << result << std::endl;
  return 0;
}