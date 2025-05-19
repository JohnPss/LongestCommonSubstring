# Busca da Maior Substring Comum (Recursivo)

Este repositório contém uma implementação em C++ que encontra a maior substring continua comum entre duas strings, usando um método recursivo baseado em sufixos.

---

## 📄 Estrutura

```
.
├── src/
│   ├── InputReader.hpp
│   ├── LCS.hpp
│   ├── InputReader.cpp
│   ├── LCS.cpp
│   └── Main.cpp
└── input.txt
```

---

## ⚙️ Como Compilar

```bash
# Clone o repositório
git clone https://github.com/JohnPss/LongestCommonSubstring
cd LongestCommonSubstring

# Compile com Make
make clean
make
make run

```

---


Por padrão, o `main.cpp` já contém duas strings de exemplo. Para testar outras, edite as strings dentro de input.txt, recompile e execute novamente.

---

## 📊 Exemplo de Saída

```
Maior substring comum: ACGTACGT
Em A: i = 14, j = 21
Em B: i = 0,  j = 7
```




---




*Desenvolvido por [João Pedro Siqueira](https://github.com/JohnPss)*  
