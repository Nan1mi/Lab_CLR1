#include "pch.h"
using namespace System;
int main(array<System::String^>^ args)
{
    Console::Write("Enter first line: ");
    String^ line1 = Console::ReadLine();
    Console::Write("Enter second line: ");
    String^ line2 = Console::ReadLine();
    // Порівняння довжин рядків
    if (line1->Length > line2->Length)
        Console::WriteLine("First line is longer.");//перший рядок довшк
    else if (line1->Length < line2->Length)
        Console::WriteLine("Second line is longer.");//другий рядок довше
    else
        Console::WriteLine("Lines have the same length.");//рядки однакової довжини
    return 0;
}
