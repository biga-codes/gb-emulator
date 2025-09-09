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
  
    uint8_t A, F; 
    uint8_t B, C;
    uint8_t D, E;
    uint8_t H, L;

    uint16_t SP; 
    uint16_t PC; 

    enum Flags
    {
        Z = 7, // zero
        N = 6, // Subtract 
        H = 5, // halfcarry
        C = 4  //carry
    };

  
    bool GetFlag(Flags flag) const;
    void SetFlag(Flags flag, bool value);

    //instructs
};

#endif 
