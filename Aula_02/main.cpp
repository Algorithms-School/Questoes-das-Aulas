#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  // Lê o número de testes
  int num_testes;
  cin >> num_testes;
  // Lê o caractere newline deixado pelo cin
  getchar();

  // Repete o número de vezes especificado por num_testes
  while (num_testes)
  {
    // Lê a linha inteira da entrada padrão, incluindo espaços em branco
    string frase;
    getline(cin, frase);

    // Cria um vetor de booleanos para representar as letras do alfabeto
    vector<bool> alfabeto(26, false);

    // Percorre cada caractere da frase lida
    for (auto letra : frase)
    {
      if (isalpha(letra))
      {
        // Marca a letra correspondente no vetor alfabeto como verdadeira
        alfabeto[letra - 'a'] = true;
      }
    }

    // Conta quantas letras diferentes foram encontradas
    int qtd_letras = count(alfabeto.begin(), alfabeto.end(), true);

    if (qtd_letras == 26)
    {
      cout << "frase completa" << endl;
    }
    else if (qtd_letras >= 13)
    {
      cout << "frase quase completa" << endl;
    }
    else
    {
      cout << "frase mal elaborada" << endl;
    }

    // Decrementa o número de testes
    --num_testes;
  }

  return 0;
}
