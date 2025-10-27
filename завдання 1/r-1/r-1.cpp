#include "pch.h"
using namespace System;
int main(array<System::String^>^ args)
{
    Console::Write("Enter a string:");
    String^ word = Console::ReadLine();
    String^ name = word->Trim();
    String^ name1(L"begin");
    String^ name2(L"end");
    String^ result = (name1 + " " + name + " " + name2);
    Console::WriteLine(L"Result: {0}", result);
    int len = result->Length;
    Console::WriteLine(L"Length: {0}", len);
    return 0;
}