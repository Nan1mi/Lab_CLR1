#include "pch.h"
using namespace System;
int main(array<System::String^>^ args)
{
    Console::Write("Enter the first line: ");
    String^ word1 = Console::ReadLine();
    String^ num1 = word1->Trim();
    Console::Write("Enter the second line: ");
    String^ word2 = Console::ReadLine();
    String^ num2 = word2->Trim();
    array<String^>^ line = { num1, num2 };//створюємо масив
    String^ separator = " ";//роздільник
    String^ joined = String::Join(separator, line);//об'єднуємо рядки
    Console::WriteLine("United string: {0}", joined);
    return 0;
}
