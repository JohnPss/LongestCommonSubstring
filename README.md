# Busca da Maior Substring Comum (Recursivo)

Este repositório contém uma implementação em C++ que encontra a maior substring contígua comum entre duas strings, usando um método recursivo baseado em sufixos.

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
git clone https://github.com/SEU_USUARIO/NOME_DO_REPOSITORIO.git
cd NOME_DO_REPOSITORIO

# Compile com g++
g++ -std=c++17 -O2 src/main.cpp -o lcs_recursive

# ou com clang++
clang++ -std=c++17 -O2 src/main.cpp -o lcs_recursive
```

---

## ▶️ Como Executar

```bash
# Executa o programa
./lcs_recursive
```

Por padrão, o `main.cpp` já contém duas strings de exemplo. Para testar outras, edite as variáveis `A` e `B` em `src/main.cpp`, recompile e execute novamente.

---

## 📊 Exemplo de Saída

```
Maior substring comum: ACGTACGT
Em A: i = 14, j = 21
Em B: i = 0,  j = 7
```

---

## 📈 Complexidade

- **Tempo (pior caso):**  
  \(O(n 	imes m 	imes \min(n, m))\), onde \(n = |A|\) e \(m = |B|\).

- **Espaço auxiliar:**  
  \(O(\min(n, m))\), devido à profundidade máxima da recursão.

---

## 🤝 Contribuições

Sinta‑se à vontade para abrir _issues_ ou enviar _pull requests_. Toda contribuição é bem‑vinda!

---

## 📜 Licença

Este projeto está licenciado sob a [MIT License](LICENSE).

---

*Desenvolvido por [Seu Nome](https://github.com/SEU_USUARIO)*  