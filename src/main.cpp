#include "../include/instructions.h"
#include <iostream>
#include <fstream>
#include <vector>


std::vector<u16> loadFile(std::string fileName) {
    std::ifstream file(fileName, std::ios::in | std::ios::binary);

    if (!file.is_open())
        std::exit(1);

    size_t size;
    std::vector<u16> program;
    file.read((char*) &size, sizeof(size_t));
    program.reserve(size);
    program.resize(size);
    file.seekg(sizeof(size_t));
    file.read((char*) &program[0], size * sizeof(u16));
    file.close();
    
    return program;
}

std::string getDisasmName(std::string fileName) {
    return fileName.append("_disasm.owo");
}

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "expected file name argument." << std::endl;
        return 1;
    }

    std::vector<u16> program = loadFile(argv[1]);
    std::ofstream file(getDisasmName(argv[1]), std::ios::out);

    for (u16 operand: program) {
        if (operand & 0x4000)
            file << instructions[operand] << std::endl;

        else
            file << operand << std::endl;
    }
}
