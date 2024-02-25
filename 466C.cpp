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
    int n;
    cin >> n;
    ll c=0;
    vi a;
    for (int i =0; i < n;i++) {
        int d;
        cin >> d;
        c+=d;
        a.push_back(d);
    }
   

    if (c%3 != 0) {
        cout << "0" EN;
    } else if (n < 3) {
        cout << "0" EN;
    } else if (c == 0) {
        ll e = c / 3;

        ll g = 0, h1=0, h2=0;

        ll h[n];
        h[0] = a[0];
        if (h[0]==e) {
            h1 = 1;
            g++;
        }

        for (int i = 1; i < n; i++) {
            h[i] = h[i-1] + a[i];
            if (h[i] == e) {
                h1 = 1;
                g++;
                
            }
        }

        ll s = ((g-2)+1)*(g-2)/2;
        if (g >= 3) {
            cout << s EN;
        } else {
            cout << 0 EN;
        }
        

    } else {

        ll e = c / 3;

        ll g = 0, h1=0, h2=0;

        ll h[n];
        h[0] = a[0];
        if (h[0]==e) {
            h1 = 1;
            g++;
        }
        ll g4=0;
        for (int i = 1; i < n; i++) {
            h[i] = h[i-1] + a[i];
            if (h[i] == e) {
                h1 = 1;
                g++;
                
            } else if (h[i]==2*e && h1 == 1) {
                g4 += g;
                h2 = 1;
                
            }
        }
        if (h1 && h2) {
            cout << g4 EN;
        } else {
            cout << 0 EN;
        }

    }
    
    
   
    

    
    
    
   
}

