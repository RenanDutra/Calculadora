#include <iostream>
using namespace std;


/*O código a seguir implemente uma calculadora com as funções de soma, subtração, divisão, multiplicação, raiz e potência*/

#define ERRO_OPERACAO_INVALIDA -1


/*Funcão para seleção da operação*/  
int selecao_operacao (std::string opcao)
{
    int contador = 0;
    const char *operadores[6] = { "soma", "sub", "div", "mult", "exp", "raiz"};

    for(contador = 0; contador<6; contador++){
        if(operadores[contador]== opcao){
            return contador;
        }   
    }
    return ERRO_OPERACAO_INVALIDA;
}

/*Funcão para seleção dos valores para operação*/  
int operacao (float valorA, float valorB, int operacao){

    float resultado;

    switch (operacao)
    {
    case 0:
        resultado = valorA+valorB;
        return resultado;
    case 1:
        resultado = valorA-valorB;
        return resultado;
    case 2:
        resultado = valorA/valorB;
        return resultado;
    case 3:
        resultado = valorA*valorB;
        return resultado;
    case 4:
        resultado = valorA*valorB;
        return resultado;
    case 5:
        resultado = valorA*(1/valorB);
        return resultado;
    
    default:
        return ERRO_OPERACAO_INVALIDA;
    }
    

}

int main ()
{
    std::string opcao;  
    float valor1, valor2, escolha;

    cout << "Escolha digitando uma dentre as seguintes operaçães: ";
    cout << "soma, sub, div, mult, exp, raiz ";
    cin >> opcao;
    if(selecao_operacao(opcao) == -1){
        cout << "Operação invalida!"; 
        return 0;
    }
    escolha = selecao_operacao(opcao); 

  
    cout << "Agora digite o primeiro valor:";
    cin >> valor1;

    cout << "Agora digite o segundo valor(o expoente no caso de raiz e exp):";
    cin >> valor2;
    
    cout << "O resultado é:" << operacao(valor1, valor2, escolha);

    return 0;
}
