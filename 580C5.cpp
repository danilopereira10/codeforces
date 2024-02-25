//#include <stdio>
#include <iostream>
#include <cmath>
#include <vector>
#include <stack>
#include <tuple>
#include <cstring>
#include <cstdlib>
#include <bits/stdc++.h>
#include <iomanip>
#include <unordered_map>
#include <set>
#include <algorithm>
#include <set>


using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<tuple<int,int>> vti;
stack<tuple<int, int, int>> num;/*  */
stack<tuple<int, int, int>> num2;
typedef vector<string> vs;

#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define CI cin >>
#define CO cout <<
#define EN << endl;



ll _sieve_size;
bitset <52> bs;
vi primes;

void sieve(ll upperbound) {
    _sieve_size = upperbound + 1;
    bs.set(); 
    bs[0] = bs[1] = 0;
    for (ll i = 2; i <= _sieve_size; i++) if (bs[i]) {
        for (ll j = i * i; j <= _sieve_size; j += i) bs[j] = 0;
        primes.push_back((int) i);
    }
}

bool isPrime(ll N) {
    if (N <= _sieve_size) return bs[N];
    for (int i = 0; i < (int)primes.size(); i++)
        if (N % primes[i] == 0) return false;
    return true;
}




/*int binary_search(int k) {
    int d = 0;
    int b = 28;
    int c = 14;
    while(b != d) {
        if (a[c] )
    }

}*/
typedef grafo *p_grafo;

struct grafo {
    int **adj;
    int n;
};

p_grafo criar_grafo(int n);

void destroi_grafo(p_grafo g);

void insere_aresta(p_grafo g, int u, int v);

void remove_aresta(p_grafo g, int u, int v);

int tem_aresta(p_grafo g, int u, int v);

void imprime_arestas(p_grafo g);

p_grafo criar_grafo(int n) {
    int i, j;
    p_grafo g = malloc(sizeof(struct grafo));
    g->n = n;
    g->adj = malloc(n * sizeof(int *));
    for (i = 0; i < n; i++) {
        g->adj[i]=malloc(n*sizeof(int));
    }
    for (i=0; i <n; i++)
        for (j=0;j<n;j++)
            g->adj[i][j]=0;
    return g;
}

void destroi_grafo(p_grafo g) {
    int i;
    for (i = 0; i < g->n; i++) 
        free(g->adj[i]);
    free(g->adj);
    free(g);
}

void insere_aresta(p_grafo g, int u, int v) {
    g->adj[u][v]=1;
    g->adj[v][u]=1;
}

void remove_aresta(p_grafo g, int u, int v) {
    g->adj[u][v]=0;
    g->adj[v][u]=0;
}

int tem_aresta(p_grafo g, int u, int v) {
    return g->adj[u][v];
}

p_grafo le_grafo() {
    int n,m,i,u,v;
    p_grafo g;
    cin >> n >> m;
    g=criar_grafo(n);
    for (i = 0; i<m; i++) {
        cin >> u >> v;
        insere_aresta(g,u,v);
    }
    return g;
}

void imprime_arestas(p_grafo g) {
    int u, v;
    for (u=0;u < g->n; u++)
        for (v =u+1; v < g->n; v++)
            if (g->adj[u][v])
                cout << u <<
}

int main() {
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n == 0) {
        cout << 1 << endl;
    } else if (n % 4 == 1) {
        cout << 8 << endl;
    } else if (n % 4 == 2) {
        cout << 4 << endl;
    } else if (n % 4 == 3) {
        cout << 2 << endl;
    } else {
        cout << 6 << endl;
    }
    
    

}   