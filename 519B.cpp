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

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

vi primeFactors(ll N) {
    vi factors;
    ll PF_idx = 0, PF = primes[PF_idx];
    while (N != 1 && (PF * PF <= N)) {
        while (N % PF == 0) {
            N /= PF;
            factors.push_back(PF);
        }
        PF = primes[++PF_idx];
    }
    if (N != 1) {
        factors.push_back(N);
    }
    return factors;
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



int main() {
    //sieve(40000);
    int n;
    cin >> n;
    //int c = 0;
    string a[n];
    unordered_map<string,int> d, e, g;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        g[a[i]]++;
        if (g[a[i]] != 1) {
            a[i] = a[i] + "_" + to_string(g[a[i]]);
        }
    }
    string b[n-1];
    for (int i =0;i<n-1;i++) {
        cin >> b[i];
        d[b[i]]++;
        if (d[b[i]] != 1) {
            b[i] = b[i] + "_" + to_string(d[b[i]]);
            d[b[i]]=1;
        }
    }
    string c[n-2];
    for (int i = 0; i < n - 2; i++) {
        cin >> c[i];
        e[c[i]]++;
        if (e[c[i]] != 1) {
            c[i] = c[i] + "_" +to_string(e[c[i]]);
            e[c[i]]=1;
        }
    }

    string f;
    for (int i = 0; i < n; i++) {
        if (d[a[i]] == 0) {
            for (int j = 0; j < a[i].length(); j++) {
                if (a[i][j] != '_') {
                    cout << a[i][j];
                } else {
                    break;
                }
            }
            cout << endl;
            f = a[i];
            break;//    
        }
    }
    for (int i = 0; i < n; i++) {
        if (e[a[i]] == 0 && a[i] != f) {
            for (int j = 0; j < a[i].length(); j++) {
                if (a[i][j] != '_') {
                    cout << a[i][j];
                } else {
                    break;
                }
            }
            cout << endl;
            break;
        }
    }
    
   
}
