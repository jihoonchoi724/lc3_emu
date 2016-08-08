#include <iostream>
#include <string>
#include "opcodes.h"

void lc3_ADD(std::string code)
{
    std::cout << "ADD was called" << std::endl;
}

void lc3_AND(std::string code)
{
    std::cout << "AND was called" << std::endl;
}

void lc3_BR(std::string code)
{
    std::cout << "BR was called" << std::endl;
}

void lc3_JMP(std::string code)
{
    std::cout << "JMP was called" << std::endl;
}

void lc3_JSR(std::string code)
{
    std::cout << "JSR was called" << std::endl;
}

void lc3_JSRR(std::string code)
{
    std::cout << "JSRR was called" << std::endl;
}

void lc3_LD(std::string code)
{
    std::cout << "LD was called" << std::endl;
}

void lc3_LDI(std::string code)
{
    std::cout << "LDI was called" << std::endl;
}

void lc3_LDR(std::string code)
{
    std::cout << "LDR was called" << std::endl;
}

void lc3_LEA(std::string code)
{
    std::cout << "LEA was called" << std::endl;
}

void lc3_NOT(std::string code)
{
    std::cout << "NOT was called" << std::endl;
}

void lc3_RET(std::string code)
{
    std::cout << "RET was called" << std::endl;
}

void lc3_RTI(std::string code)
{
    std::cout << "RTI was called" << std::endl;
}

void lc3_ST(std::string code)
{
    std::cout << "ST was called" << std::endl;
}

void lc3_STI(std::string code)
{
    std::cout << "STI was called" << std::endl;
}

void lc3_STR(std::string code)
{
    std::cout << "STR was called" << std::endl;
}

void lc3_TRAP(std::string code)
{
    std::cout << "TRAP was called" << std::endl;
}

void lc3_ILLEGAL()
{
    std::cout << "ILLEGAL" << std::endl;
}

