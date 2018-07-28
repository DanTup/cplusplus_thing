// Compile with
//    cl /EHsc echo.cpp /link echo_lib.lib

#include <iostream>
#include <string>
#include "echo_lib.h"

int main()
{
    echo("Hello World");
    echo("Goodbye World");
    return 0;
}
