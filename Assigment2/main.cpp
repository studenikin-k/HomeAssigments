#include <iostream>
#include "assignments.h"

int main() {
   setlocale(LC_ALL, "russian");

   std::string fileName;
   std::cout << "Enter the file name: ";
   std::getline (std::cin,fileName);
   binaryReadWrite(fileName);
   // create any example file and write name in console like: "text.txt"

   std::string calculate;
   std::cout << "input an equation in reverse polish notation: ";
   std::getline (std::cin, calculate);

   const int result = calculatePolishEntry(calculate);
   std::cout << "Answer: " << result << std::endl;

   return 0;
}
