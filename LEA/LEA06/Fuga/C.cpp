#include <bits/stdc++.h>
using namespace std;

void bfs_dists(int U, vector<int>& dist, const vector<vector<int>>& matriz, const int oo){
    queue<int> fila;
    fila.push(U);
    dist[U] = 0;
    while(!fila.empty()){
        U = fila.front();
        fila.pop();
        for(auto M: matriz[U]){
            if(dist[M] == oo){
                fila.push(M);
                dist[M] = dist[U] + 1;
            }
        }
    }
}

int main(){
    int N, M, C;
    cin >> N >> M >> C;
 
    vector<vector<int>> prisao (N + 1);

    vector<int> cameras;
    int P;
    while(C--){
        cin >> P;
        cameras.push_back(P);
    }

    int A, B;
    auto prisao_sem_cameras = prisao;
    while(M--){
        cin >> A >> B;

        if(find(cameras.begin(), cameras.end(), A) != cameras.end() || find(cameras.begin(), cameras.end(), B) != cameras.end()){
            prisao[A].push_back(B);
            prisao[B].push_back(A);  
            continue;
        }

        prisao[A].push_back(B);
        prisao[B].push_back(A);
        prisao_sem_cameras[A].push_back(B);
        prisao_sem_cameras[B].push_back(A);
    }

    const int oo = 0x3f3f3f3f;
    vector<int>dist_chave(N + 1, oo);
    vector<int>dist_saida(N + 1, oo);

    int E, S, K, cam_chave, cam_saida;
    cin >> E >> S >> K;

    bfs_dists(E, dist_chave, prisao_sem_cameras, oo);
    cam_chave = dist_chave[K];

    if(cam_chave == oo){
        cout << "impossivel fugir";
        return 0;
    }

    cam_chave = cam_chave * 2;

    bfs_dists(E, dist_saida, prisao, oo);
    cam_saida = dist_saida[S];

    cout << cam_chave << " " << cam_saida;

    return 0;
}