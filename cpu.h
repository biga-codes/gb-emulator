// cpu.h - LR35902 CPU emulation header

#ifndef CPU_H
#define CPU_H

#include <cstdint>

class CPU
{
public:
    CPU();
    ~CPU();

    void Reset();
    void ExecuteInstruction();

private:
    // Registers
    uint8_t A, F; // Accumulator & Flags
    uint8_t B, C;
    uint8_t D, E;
    uint8_t H, L;

    uint16_t SP; // Stack Pointer
    uint16_t PC; // Program Counter

    // Flags bit positions
    enum Flags
    {
        Z = 7, // Zero Flag
        N = 6, // Subtract Flag
        H = 5, // Half Carry Flag
        C = 4  // Carry Flag
    };

    // Helper functions to get/set flags
    bool GetFlag(Flags flag) const;
    void SetFlag(Flags flag, bool value);

    // Instruction implementations will be added here
};

#endif // CPU_H
