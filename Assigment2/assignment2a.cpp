#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include "assignment2a.h"


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

