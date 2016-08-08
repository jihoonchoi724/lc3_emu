#include <iostream>
#include <string>
#include "reader.h"
#include "opcodes.h"

void reader(std::string code)
{
    unsigned pos;
    for (pos = 0; pos > code.length(); ++pos)
    {
        if (code.at(pos) == ' ') break;
    }
    std::string opcode = code.substr(0, pos - 1);

    if (opcode == "ADD")
    {
        lc3_ADD(code);
    }
    else if (opcode == "AND")
    {
        lc3_AND(code);
    }
    else if (opcode == "BR")
    {
        lc3_BR(code);
    }
    else if (opcode == "JMP")
    {
        lc3_JMP(code);
    }
    else if (opcode == "JSR")
    {
        lc3_JSR(code);
    }
    else if (opcode == "JSRR")
    {
        lc3_JSRR(code);
    }
    else if (opcode == "LD")
    {
        lc3_LD(code);
    }
    else if (opcode == "LDI")
    {
        lc3_LDI(code);
    }
    else if (opcode == "LDR")
    {
        lc3_LDR(code);
    }
    else if (opcode == "LEA")
    {
        lc3_LEA(code);
    }
    else if (opcode == "NOT")
    {
        lc3_NOT(code);
    }
    else if (opcode == "RET")
    {
        lc3_RET(code);
    }
    else if (opcode == "RTI")
    {
        lc3_RTI(code);
    }
    else if (opcode == "ST")
    {
        lc3_ST(code);
    }
    else if (opcode == "STI")
    {
        lc3_STI(code);
    }
    else if (opcode == "STR")
    {
        lc3_STR(code);
    }
    else if (opcode == "TRAP")
    {
        lc3_TRAP(code);
    }
    else
    {
        lc3_ILLEGAL();
    }

}
