#ifndef MACHINE_H
#define MACHINE_H

class machine()
{
    private:
        uint16_t R0; //General purpose register
        uint16_t R1; //General purpose register
        uint16_t R2; //General purpose register
        uint16_t R3; //General purpose register
        uint16_t R4; //General purpose register
        uint16_t R5; //General purpose register
        uint16_t R6; //General purpose register
        uint16_t R7; //General purpose register
        uint16_t PC; //Program Counter
        uint16_t PSR; //Processor Status Register

        std::vector<uint16_t> memory; //Simulated memory
};

#endif // MACHINE_H
