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
    char dado;
    p_no prox;
    p_no ant;
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

p_no adicionar_elemento(p_no lista, char x) {
    p_no novo;
    novo = new no;
    novo->dado = x;
    novo->prox = lista;
    if (lista != NULL) {
        lista->ant = novo;
    }
    novo->ant = NULL;
    return novo;
}



int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n,x;
        cin >> n >> x;
        int e = 0, o = 0;
        for (int i = 0; i <  n; i++) {
            int c;
            cin >> c;
            if ( c % 2 == 0) {
                e++;
            } else {
                o++;
            }
        }
        if (o == 0) {
            NO;
        } else if (x == 1) {
            
            YES;
            
        } else if (x==2) {
            if (e == 0) {
                NO;
            } else {
                YES;
            }
        } else if (x==3) {
            if (o >= 3) {
                YES;
            } else {
                YES;
            }
        }
    }
    int d = 5e5+1;
    ll a[d];
    a[1] = 0;
    for (ll i = 3; i < 5e5+1; i+=2) {
        a[i] = a[i-2] + (i-1)/2*((i*i)-(i-2)*(i-2));
    }
    for (int i = 0; i < t;i++) {
        int n;
        cin >> n;
        cout << a[n] EN;
    }
    
    
    
    
   
}

