#include "InputReader.hpp"
#include <stdexcept>

InputReader::InputReader(const std::string &filename)
{
    file_.open(filename);
    if (!file_.is_open())
    {
        throw std::runtime_error("Não foi possível abrir o arquivo: " + filename);
    }
}

std::pair<std::string, std::string> InputReader::readStrings()
{
    std::string A, B;
    if (!std::getline(file_, A) || !std::getline(file_, B))
    {
        throw std::runtime_error("Formato inválido: o arquivo deve conter duas linhas.");
    }
    return {A, B};
}
