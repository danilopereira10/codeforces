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

typedef struct no *p_no;

struct no {
    int dado;
    p_no prox;
};

p_no criar_lista() {
    return NULL;
}

void destruir_lista(p_no lista) {
    if (lista != NULL) {
        destruir_lista(lista->prox);
        free(lista);
    }
}

p_no adicionar_elemento(p_no lista, int x) {
    p_no novo;
    novo = new no;
    novo->dado = x;
    novo->prox = lista;
    return novo;
}

int m;
void dfs(p_no lista[], int* c, int d, int p, int a[], int e[]) {

        
        if (lista[p] != NULL) {
            if (a[p] == 1) {
                d++;
                if (d > m) {
                    return;
                }
            } else {
                d = 0;
            }

            int pr = lista[p]->dado;
            dfs(lista, c, d, pr, a, e);
            p_no ac = lista[p]->prox;
            while (ac != NULL) {
                int pr = ac->dado;
                dfs(lista, c, d, pr, a, e);
                ac = ac->prox;
            }
            //if (a[p] == 1) {
            // d--;
            //}
            //*d--;
        } else {
            if (a[p]==1) {
                d++;
                if (d>m) {
                    return;
                }
            } 
            (*c)++;
        }

    
}

void montar_arvore(p_no lis[], int e[], int p, p_no lista[]) {
    if (e[p]) {
        return;
    } else {
        e[p] = 1;
        if (lista[p] != NULL) {
            int pr = lista[p]->dado;
            if (!e[pr]) {
                lis[p] = adicionar_elemento(lis[p], pr);
            }
            montar_arvore(lis, e, pr, lista);
            p_no ac = lista[p]->prox;
            while (ac != NULL) {
                int pr = ac->dado;
                if (!e[pr]) {
                    lis[p] = adicionar_elemento(lis[p], pr);
                }
                montar_arvore(lis, e, pr, lista);
                ac = ac->prox;
            }
            //if (a[p] == 1) {
            // d--;
            //}
            //*d--;
        } 
    }
    
}

int main() {
    int t;
    cin >> t;
     


    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        int a =0,b=0,c=0;
        for (int i=0;i<s.length();i++) {
            if (s[i] == 'A') {
                a++;
            } else if (s[i]=='B') {
                b++;
            } else {
                c++;
            }
        }
        if (b == a + c) {
            YES;
        } else {
            NO;
        }
        
        
        

        
    }
   
}

