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
    int tamanho, cont, max, min;

    //Lendo o tamanho do vetor
    cout << "Digite o tamanho do vetor que deseja criar: ";
    cin >> tamanho;

    //Criando um ponteiro que recebe o novo vetor vazio
    int vetor[tamanho];

    //Modificando e imprimindo valores
    for(cont = 0; cont < tamanho; cont++){
        cout << "entre com o valor do vetor na posição: " << cont << endl;
        cin >> vetor[cont];
    }

    for(int i = 0; i < tamanho; i++){
      cout << vetor[i] << " ";
    }

    cout << endl;

    max = vetor[0];
      for(int i = 1; i < 5; i++){
        if(vetor[i] > max){
          max = vetor[i];
        }
      }
   

    cout << max << endl;

    return 0;
}
