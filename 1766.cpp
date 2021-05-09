#include <bits/stdc++.h>
using namespace std;

#define nmax 10005

typedef struct {
    int peso, idade;
    double altura;
    string nome;
}Rena;

bool func(Rena a, Rena b){
if(a.peso != b.peso) return a.peso > b.peso;
if(a.idade != b.idade) return a.idade < b.idade;
if(a.altura != b.altura) return a.altura < b.altura;
return a.nome < b.nome;
}

int main(){

Rena renas[nmax];
int c, n, m;
int caso = 1;

cin >> c;

while(caso <= c){

cin >> n >> m;

for(int i = 0; i < n; i++){
    cin >> renas[i].nome >> renas[i].peso >> renas[i].idade >> renas[i].altura;
}
sort(renas, renas + n, func);

cout << "CENARIO {" << caso << "}" << endl;

for(int i = 0; i < m; i++){
    cout << i + 1 << " - " << renas[i].nome << endl;
}
caso++;
}

return 0;
}
