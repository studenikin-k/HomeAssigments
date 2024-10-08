#include <iostream>
#include "assignments.h"

int main() {
   setlocale(LC_ALL, "russian");
   std::string fileName= "test.txt"; //You need to specify any file that will be opened. For me it is "test.txt"
  binaryReadWrite(fileName);
  std::string calculate;
  std::cout << "input an equation in reverse polish notation";
  std::getline (std::cin, calculate);
  const int result = calculatePolishEntry(calculate);
  std::cout << "Answer: " << result << std::endl;
  return 0;
}
