#include "LCS.hpp"
#include <iostream>

int LCSufRec(const std::string &s1,
             const std::string &s2,
             int m, int n,
             int &maxLen,
             int &endPos1,
             int &endPos2)
{
    if (m == 0 || n == 0)
        return 0;
    int curr = 0;
    if (s1[m - 1] == s2[n - 1])
    {
        curr = 1 + LCSufRec(s1, s2, m - 1, n - 1,
                            maxLen, endPos1, endPos2);
        if (curr > maxLen)
        {
            maxLen = curr;
            endPos1 = m - 1;
            endPos2 = n - 1;
        }
    }
    return curr;
}

void encontrarMaiorSubstringRec(const std::string &A,
                                const std::string &B)
{
    int n = A.size();
    int m = B.size();
    int maxLen = 0, endPos1 = -1, endPos2 = -1;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            LCSufRec(A, B, i, j, maxLen, endPos1, endPos2);

    if (maxLen > 0)
    {
        int start1 = endPos1 - maxLen + 1;
        std::string maior = A.substr(start1, maxLen);
        std::cout << "Maior substring comum: " << maior << "\n"
                  << "Em A: i = " << start1 << ", j = " << endPos1 << "\n"
                  << "Em B: i = " << (endPos2 - maxLen + 1)
                  << ", j = " << endPos2 << "\n";
    }
    else
    {
        std::cout << "Nenhuma substring comum encontrada.\n";
    }
}
