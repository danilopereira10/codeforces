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
    //sieve(40000);
    int t;
    cin >> t;
    for (int i =0; i < t;i++) {
        int n;
        cin >> n;
        int a[n][n];
        if (n == 1) {
            cout << 1 EN;
        } else if (n==2) {
            cout << -1 EN;
        } else if (n==3) {
            /*cout << "1 3 5" EN;
            cout << "4 6 8" EN;
            cout << "2 7 9"*/

            cout << "5 3 8" EN;
            cout << "7 1 6" EN;
            cout << "9 4 2" EN;
        }  else if (n % 2 ) {

        } else {
            int i = n / 2;
            int j = n / 2-1;
            a[i][j]= 1;
            a[i+1][j]=4;
            a[i-1][j]=3;
            a[i][j+1]=6;
            a[i-1][j+1]=8;
            a[i+1][j+1]=4;
            a[i][j-1]=7;
            a[i-1][j-1]=5;
            a[i+1][j-1]=9;

            int k = i - 2;
            a[k][j-1]=10;
            a[k][j]=12;
            a[k][j+1]=14;
            a[k][j+2]=16;
            a[k+1][j+2]=11;
            a[k+2][j+2]=13;
            a[k+3][j+2]=15;
            if (n >= 5) {
                a[k][j-2]=18;
                a[k+1][j-2]=20;
                a[k+2][j-2]=22;
                a[k+3][j-2]=24;
                a[k+4][j-2]=17;
                a[k+4][j-1]=19;
                a[k+4][j]=21;
                a[k+4][j+1]=23;
                a[k+4][j+2]=25;
                for (int j = 6; j <= 100; j++) {

                }
            }
            
            int m2 = 26;
            for (int m = 1 ; k <= 48; k++) {
                int m3 = -1;
                for (m3 = -1; m3 < 4 + 2 * m - 1; m3++) {
                    a[k-m][j-1+m3] = m2;
                    m2 += 2;
                }
                m3--;
                m2 = (3 + 2 * m) * (3 + 2 * m) + 2;
                for (int m4 = 0; m4 < 3 + 2*m; m4++) {
                    a[k-m+m4][j-1+m3] = m2;
                    m2++;
                }

                
            }    
            
        }
    }

    int n;
    cin >> n;
    ll c = 0;
    int j = 0;
    for (int i =n; i > 0; i--) {
        c = c + i + ((i-1)*j);
        j++;
    }
    cout << c EN;

        
        
       
    
    
   
}

