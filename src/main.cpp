#include "../include/instructions.h"
#include <iostream>
#include <fstream>
#include <vector>


std::vector<i16> loadFile(std::string fileName) {
    std::ifstream file(fileName, std::ios::in | std::ios::binary);

    if (!file.is_open())
        std::exit(1);

    size_t size;
    std::vector<i16> program;
    file.read((char*) &size, sizeof(size));
    program.reserve(size);
    program.resize(size);
    file.seekg(sizeof(size_t));
    file.read((char*) &program[0], size * sizeof(i16));
    file.close();
    
    return program;
}

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "expected file name argument." << std::endl;
        return 1;
    }

    std::vector<i16> program = loadFile(argv[1]);
    std::ofstream file("disassembly.owo", std::ios::out);

    for (i16 operand: program) {
        std::cout << operand << std::endl;
        if (operand & 0x4000)
            file << instructions[operand] << std::endl;

        else
            file << operand << std::endl;
    }
}
