#pragma once
#include <string>
#include <utility>
#include <fstream>

class InputReader
{
public:
    explicit InputReader(const std::string &filename);
    std::pair<std::string, std::string> readStrings();

private:
    std::ifstream file_;
};
