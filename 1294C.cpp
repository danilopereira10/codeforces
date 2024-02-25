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
#include <list>


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
bitset <40002> bs;
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
    vector<p_no> prox;
    p_no ant;
};

p_no criar_lista() {
    return NULL;
}

void destruir_lista(p_no lista) {
    if (lista != NULL) {
        //destruir_lista(lista->prox);
        free(lista);
    }
}

p_no adicionar_elemento(p_no lista, char x) {
    p_no novo;
    novo = new no;
    novo->dado = x;
    //novo->prox = lista;
    if (lista != NULL) {
        lista->ant = novo;
    }
    novo->ant = NULL;
    return novo;
}


void visit(int* d, vector<int> v[], int j, int* m) {
    (*d)++;
    for (int i = 0; i < v[j].size(); i++) {
        visit(d, v, v[j][i], m);
    }
    if (*d > *m) {
        *m = *d;
    }
    (*d)--;
}

int main() {
    sieve(40000);
    int t;
    cin >> t;
    for (int i = 0; i < t;i++) {
        int n;
        cin >> n;
        vi v = primeFactors(n);
        int A, B, C;
        if (v.size() < 3) {
            NO;
        } else {
            int j = 1;
            int k = v[0];
            for (int i = 1; i < v.size(); i++) {
                if (v[i] != k) {
                    j++;
                    k = v[i];
                }
            }
            if (j == 2 && v.size() < 4) {
                
                NO;
            } else if (j==2) {
                A = v[0];
                B = 1;
                int i2 = 1;
                for (; i2 < v.size(); i2++) {
                    B *= v[i];
                    if (B != A) {
                        break;
                    }
                }
                C =1;
                for (; i2 < v.size(); i2++) {
                    C *= v[i];
                }
                YES;
                cout << A << " " << B << " " << C EN;
            } else if (j==1 && v.size() < 6) {
                NO;
            } else if (j==1) {
                A = v[0];
                B = 1;
                int i2 = 1;
                for (; i2 < v.size(); i2++) {
                    B *= v[i2];
                    if (B != A) {
                        i2++;
                        break;
                    }
                }
                C = 1;
                for (; i2 < v.size(); i2++) {
                    C *= v[i2];
                }
                YES;
                cout << A << " " << B << " " << C EN;
            } else {
                int p = 1;
                for (int i = 2; i < v.size(); i++) {
                    p *= v[i];
                } 
                A = v[0];
                B = v[1];
                C = p;
                YES;
                cout << A << " " << B << " " << C EN;
            }
            
            

            
        }

    }
    
   
    
   
}

