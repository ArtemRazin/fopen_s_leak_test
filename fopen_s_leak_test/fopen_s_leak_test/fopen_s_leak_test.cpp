#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    FILE *file;
    errno_t error_code;
    //Opening file in r mode
    error_code = fopen_s(&file, "c:\\temp\\EPRBAT.txt", "r");
    if (!file)
        return false;
    fclose(file);
    return true;
}
