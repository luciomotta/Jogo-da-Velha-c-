#include <iostream>
using namespace std;

/*
Aqui estão três atividades para você praticar projetos em C++ diretamente do navegador, utilizando plataformas online como **Repl.it**, **Codeforces**, ou **OnlineGDB**.

### Atividade 1: Calculadora Básica
**Objetivo:** Criar uma calculadora simples que execute operações de adição, subtração, multiplicação e divisão com dois números.
- Entrada: Dois números e o operador (por exemplo, `5 + 3`).
- Saída: O resultado da operação.
- Desafio extra: Implementar o uso de `switch` para selecionar a operação.

**Dicas:**
- Utilize `cin` para ler a entrada do usuário.
- Implemente o tratamento de erros para a divisão por zero.

### Atividade 2: Jogo da Adivinhação
**Objetivo:** Criar um jogo onde o programa escolhe um número aleatório entre 1 e 100, e o jogador tem que adivinhar esse número.
- O programa deve dar dicas como "Muito alto!" ou "Muito baixo!" após cada tentativa.
- O jogo termina quando o jogador adivinhar o número.

**Dicas:**
- Use a função `rand()` para gerar o número aleatório.
- Defina um limite de tentativas para tornar o jogo mais desafiador.

### Atividade 3: Fatorial de um Número
**Objetivo:** Criar um programa que calcule o fatorial de um número inteiro positivo.
- Entrada: Um número inteiro.
- Saída: O fatorial desse número.
- Desafio extra: Implementar uma solução recursiva e uma iterativa para comparar os tempos de execução.

**Dicas:**
- Utilize um `for` para a solução iterativa.
- Para a solução recursiva, defina a função `fatorial` que chama a si mesma.

Essas atividades são ideais para praticar lógica de programação e domínio da sintaxe de C++. Você pode desenvolvê-las usando qualquer plataforma de programação online que suporte C++.
*/

void calc()
{
    
    float N1, N2;
    int operador_log;
    // Write C++ code here
    cout << "Digite o 1º operador: ";
    cin >> N1;

    cout << "Digite o 2º operador: ";
    cin >> N2;
    
    cout << "\nSoma(1)\nSubtração(2):\nMultiplicação(3)\nDivisão(4)\nEscolhe o operador da Conta matemática: ";
    cin >> operador_log;
    
    switch(operador_log){
        case 1:
            cout << N1 + N2;
            cout << "\n";
            break;
        
        case 2:
            cout << N1 - N2;
            cout << "\n";
            break;
        case 3:
            cout << N1 * N2;
            cout << "\n";
            break;
        case 4:
            cout << N1 / N2;
            cout << "\n";
            break;
        default:
            cout <<"Número escolhido ínvalido!!";
            cout << "\n";
            break;
    }
}

void game_adivinha()
{

  int Nsecreto, Resposta;
  /* Gerar número secreto entre 1 e 50: */
  Nsecreto = rand() % 50 + 1;

    do {
        printf("Escolha um numero entre 1 - 50: ");
        scanf("%d", &Resposta);
        if (Nsecreto<Resposta) {printf("O número secreto e menor!!\n");}
        else if (Nsecreto>Resposta) {printf("O número secreto e maior!!\n");}
    }while (Nsecreto!=Resposta);
  cout << "Parabéns!!!";
}

void menu()
{
    cout<<"Escolha um programa:\n";
    cout<<"1. Calculadora Básica\n";
    cout<<"2. Jogo da Adivinhação\n";
    cout<<"3. Fatorial de um Número\n";
}

void boas_vindas()
{
    int op;
    cin>>op;

    if(op==1)
        calc();
    else if(op==2)
        game_adivinha();
    else if(op==3)
        cout << "";
    else
        cout<<"Entrada inválida\n";
}

int main()
{
    menu();
    boas_vindas();
    cout<<"Encerrando...\n";

    return 0;
}

