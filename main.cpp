#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>
#include <new>

using namespace std;

int main(){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    //Definindo variáveis
    int tamanho, cont;

    //Lendo o tamanho do vetor
    cout << "Digite o tamanho do vetor que deseja criar: ";
    cin >> tamanho;

    //Criando um ponteiro que recebe o novo vetor vazio
    int *vetor = new int(tamanho);

    //Modificando e imprimindo valores
    for(cont = 0; cont < tamanho; cont++){
        cout << "entre com o valor do vetor na posição: " << cont << endl;
        cin >> vetor[cont];
        cout << vetor[cont] << endl;
    }

    for(cont = 0; cont < tamanho; cont++){
        cout << vetor[cont] << endl;
    }

    free(vetor);

    system("pause");
    return 0;
}
