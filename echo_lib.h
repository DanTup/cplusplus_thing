#define DllImport __declspec(dllimport)
#define DllExport __declspec(dllexport)

#include <iostream>
#include <string>

DllImport void echo(std::string pszValue);
