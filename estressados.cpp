#include <iostream>
#include <vector>

using namespace std;

bool procuraX(int vet[], int tam, int x){
    int aux = false;
    for(int i = 0; i < tam; i++){
        if(vet[i] == x){
            aux = true;
        }
    }
    return aux;
}

int contaX(int vet[], int tam, int x){
    int aux = 0;
    for(int i = 0; i < tam; i++){
        if(vet[i] == x){
            aux += 1;
        }
    }
    return aux;
}

int posicao(int vet[], int tam, int x){
    int aux;
    for(int i = 0; i < tam; i++){
        if(vet[i] == x){
            aux = i;
        }
    }
    return aux;
}

int procura_apartir(int vet[], int tam, int pos, int x){
    int aux {};
    if(pos < tam){
        for(int i = pos; i < tam; i++){
            if(vet[i] == x){
                aux = i;
            }
        }
        return aux;
    }else{
        cout << "inválido" << endl;
    }
}
int procura_menor(int vet[], int tam){
    int aux = vet[0];
    for(int i = 1; i < tam; i++){
        if(vet[i] < aux){
            aux = vet[i];
        }
    }
    return aux;
}

int posicao_menor_valor(int vet[], int tam){
    int aux = vet[0], pos {};
    for(int i = 1; i < tam; i++){
        if(vet[1] < aux){
            aux = vet[i];
            pos = i;
        }
    }
    return pos;
}

int procurar_pos_menor_apartir(int vet[], int tam, int inicio){
    int aux = vet[inicio], pos {};
    for(int i = inicio; i < tam; i++){
        if(vet[1] < aux){
            aux = vet[i];
            pos = i;
        }
    }
    return pos;
}

int homem_mais_calmo(int vet[], int tam){
    int aux = vet[0], pos {};
    for(int i = 1; i < tam; i++){
        if(vet[i] > 0 && vet[i] < aux){
            aux = vet[i];
            pos = i;
        }
    }
    return pos;
}

int main (){

    cout << "digite a quantidade de elementos do vetor" << endl;
    int qt_elemen{};
    cin >> qt_elemen;
    int v[qt_elemen];

    for(int i = 0; i < qt_elemen; i++){
        cin >> v[i];
    }
    int x = 5;
    /*
    if(procuraX(v, qt_elemen, x) == true){
        cout << "existe";
    }else{
        cout << "inexistente";
    }
    */

    //cout << contaX(v, qt_elemen, x) << endl;

    //out << "esta na posicao " << posicao(v, qt_elemen, x) << endl;

    /*
    int pos;
    cout << "digite a posicao" << endl;
    cin >> pos;
    cout << "aparece na posicao " << procura_apartir(v, qt_elemen, pos, x) << endl;
    */

    //cout << "menor elemento: " << procura_menor(v, qt_elemen) << endl;

    //cout << "posicao do menor: " << posicao_menor_valor(v, qt_elemen) << endl;

    /*
    int inicio {};
    cout << "digite o inicio" << endl;
    cin >> inicio;
    cout << "menor posicao: " << procurar_pos_menor_apartir(v, qt_elemen, inicio) << endl;
    */

    //cout << "posicao homem mais calmo: " << homem_mais_calmo(v, qt_elemen) << endl;
}