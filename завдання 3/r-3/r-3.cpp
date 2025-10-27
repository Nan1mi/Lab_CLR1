#include "pch.h"
using namespace System;
int main(array<System::String^>^ args)
{
    Console::Write("Enter the first line: ");
    String^ line1 = Console::ReadLine();
    String^ num1 = line1->Trim();
    Console::Write("Enter the second line: ");
    String^ line2 = Console::ReadLine();
    String^ num2 = line2->Trim();
    int result(String::Compare(num1, num2, true));//порівнюємо
    if (result < 0)
        Console::WriteLine(L"{0} is smaller than {1}", num1, num2);//менший
    else if (result > 0)
        Console::WriteLine(L"{0} is greater than {1}", num1, num2);//більший
    else
        Console::WriteLine(L"{0} is equal to {1}", num1, num2);//однаковий
    return 0;
}
