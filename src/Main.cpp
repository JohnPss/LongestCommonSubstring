#include "InputReader.hpp"
#include "LCS.hpp"
#include <iostream>

int main()
{
    const std::string filename = "input.txt";
    try
    {
        InputReader reader(filename);
        auto [A, B] = reader.readStrings();
        encontrarMaiorSubstringRec(A, B);
    }
    catch (const std::exception &ex)
    {
        std::cerr << ex.what() << "\n";
        return 1;
    }
    return 0;
}
