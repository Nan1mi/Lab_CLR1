#include "pch.h"
using namespace System;
int main(array<System::String^>^ args)
{
    Console::Write("Enter the line: ");
    String^ input = Console::ReadLine();
    String^ reversed = "";
    int i = input->Length - 1; // починаємо з останнього символа
    while (i >= 0)
    {
        reversed += input[i];
        i--; // рухаємося вліво
    }
    Console::WriteLine("String in reverse order: {0}", reversed);
    return 0;
}
