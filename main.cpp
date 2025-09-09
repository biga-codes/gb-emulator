#include <iostream>
#include "ROM.hpp"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: pikagameboy <rom.gb>" << std::endl;
        return 1;
    }
     // TODO: Initialize emulator components (CPU, Memory, PPU, Cartridge, etc.)

    // TODO: Load ROM from command line argument

    // TODO: Start emulation loop


    std::string romPath = argv[1];
    ROM rom(romPath);

    std::cout << "Loaded ROM: " << romPath << " (" << rom.getSize() << " bytes)" << std::endl;
    return 0;
}

