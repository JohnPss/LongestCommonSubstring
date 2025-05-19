#pragma once

#include <string>

int LCSufRec(const std::string &s1,
             const std::string &s2,
             int m, int n,
             int &maxLen,
             int &endPos1,
             int &endPos2);

void encontrarMaiorSubstringRec(const std::string &A,
                                const std::string &B);
