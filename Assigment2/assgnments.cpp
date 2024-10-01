#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include "assgnments.h"


void binaryReadWrite(std::string fileName) {

   std::uintmax_t fileSize=std::filesystem::file_size(fileName);

   std::ifstream inputFile("example_file.bin", std::ios::binary);

    inputFile.open("example_file.bin", std::ios::in | std::ios::binary);
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

  for (int i = 0; i < input.length(); i++) {
      if (std::isdigit(input[i])) {
        stack[++top] = input[i] - '0';
      }
      else {
        int a = stack[top--];
        int b = stack[top--];
         switch (input[i]) {
           case '+' : stack[++top] = a + b; break;
           case '-': stack[++top] = a - b; break;
           case '*': stack[++top] = a * b; break;
           case '/': stack[++top] = a / b; break;
      }
  }
}
return stack[top];
}