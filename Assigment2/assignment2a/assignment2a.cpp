#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include "assignment2a.h"


void binaryReadWrite(const std::string &fileName) {

   unsigned long fileSize=std::filesystem::file_size(fileName);

   std::ifstream inputFile(fileName, std::ios::binary);

    if (!inputFile.is_open()) {
        std::cerr << "Error, file not openned" << std::endl;
        return;
    }

    char* buffer = new char[fileSize];

    inputFile.read(buffer,fileSize);
    inputFile.close();

    std::ofstream outputFile("output_file.bin", std::ios::binary);
    outputFile.write(buffer,fileSize);
    outputFile.close();

    delete[] buffer;
}

int main () {
    binaryReadWrite("example_file.bin");
}
