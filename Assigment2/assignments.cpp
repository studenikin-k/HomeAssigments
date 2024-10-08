#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include "assignments.h"


void binaryReadWrite(std::string fileName) {

   std::uintmax_t fileSize=std::filesystem::file_size(fileName);

   std::ifstream inputFile(fileName, std::ios::binary);

    inputFile.open(fileName, std::ios::in | std::ios::binary);
    if (!inputFile.is_open()) {
        std::cerr << "Error, file not openned" << std::endl;
        return;
    }

    char* buffer = new char[fileSize];

    inputFile.read((char *)&buffer,sizeof(buffer));
    inputFile.close();

    std::ofstream outputFile("output_file.bin", std::ios::binary);
    outputFile.write((char *)&buffer,fileSize);
    outputFile.close();

    delete[] buffer;
}

int calculatePolishEntry(std::string input) {
	const int stackMax = 100;
    int stack[stackMax];
    int top = -1;

    std::istringstream stream(input);
    std::string token;

  while (stream >> token) {
      if (std::isdigit(token[0]) || (token.length() > 1 && token[0] == '-' && std::isdigit(token[1]))) {
        stack[++top] = std::stoi(token.c_str());
      }
      else {
         if (top < 1) {
                std::cerr << "Not enough operands. Program stops.\n";
                return -1;
            }
        int a = stack[top--];
        int b = stack[top--];
         switch (token[0]) {
           case '+': stack[++top] = b + a; break;
           case '-': stack[++top] = b - a; break;
           case '*': stack[++top] = b * a; break;
           case '/':
             if (a == 0) {
               std:: cerr << "Dividng by zero. Program stops\n";
             	return -1;
             }
             stack[++top] = b / a; break;
      }
/* In case of division or subtraction, I'll leave a hint: in the example "3 - 4"
	I thought it would be more correct to pass the operands as "3 4 -"
	Where the first will be the number from which they subtract, and the second as the subtrahend.
	Because doing the opposite will be intuitively unclear
*/
  }
}
return stack[top];
}