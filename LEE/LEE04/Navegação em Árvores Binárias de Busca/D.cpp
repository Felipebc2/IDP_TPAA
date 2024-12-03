#include<bits/stdc++.h>
using namespace std;

class ArvoreBinaria{
    private:
        struct No {
            int valor;
            No *esq;
            No *dir;
        };

        No *raiz;

        No* inserirNo(No* no, int valor){
            if(no == nullptr){
                No* novoNo = new No();
                novoNo->valor = valor;
                novoNo->esq = nullptr;
                novoNo->dir = nullptr;
                return novoNo;
            }

            if(valor < no->valor){
                no->esq = inserirNo(no->esq, valor);
            } else if (valor > no->valor){
                no->dir = inserirNo(no->dir, valor);
            }

            return no;
        }

        void ordem(No *no){
            if(no != nullptr){
                ordem(no->esq);
                cout << no->valor << " ";
                ordem(no->dir);
            }
        }

        void preOrdem(No *no){
            if(no != nullptr){
                cout << no->valor << " ";
                preOrdem(no->esq);
                preOrdem(no->dir);
            }
        }

        void posOrdem(No *no){
            if(no != nullptr){
                posOrdem(no->esq);
                posOrdem(no->dir);
                cout << no->valor << " ";
            }
        }
    
    public:
        ArvoreBinaria(){
            raiz = nullptr;
        }

        void inserir(int valor){
            raiz = inserirNo(raiz, valor);
        }

        void printOrdem(){
            cout << "In.: ";
            ordem(raiz);
            cout << endl;
        }

        void printPreOrdem(){
            cout << "Pre: ";
            preOrdem(raiz);
            cout << endl;
        }


        void printPosOrdem(){
            cout << "Pos: ";
            posOrdem(raiz);
            cout << endl;
        }
};

int main(){
    int N, V;
    ArvoreBinaria arvore;

    cin >> N;

    while(N--){
        cin >> V;
        arvore.inserir(V);
    }

    arvore.printOrdem();
    arvore.printPreOrdem();
    arvore.printPosOrdem();

    return 0;
}