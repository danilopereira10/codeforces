// #include <stdio>
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
//stack<tuple<int, int, int>> num;/*  */
//stack<tuple<int, int, int>> num2;
//typedef vector<string> vs;

#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define CI cin >>
#define CO cout <<
#define EN << endl;



ll _sieve_size;
bitset <3102> bs;
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

vi primeFactors2(ll N) {
    vi factors;
    ll PF_idx = 0, PF = primes[PF_idx];
    while (N != 1 && (PF * PF <= N)) {
        if (N % PF == 0) {
            N /= PF;
            factors.push_back(PF);
        }
        while (N % PF == 0) {
            N /= PF;
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

/*
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

ll calculate(string s, int i) {
    ll d = 0;
    if (i == s.length() - 1) {
        return s[i]=='9' ? 1 : 0;
    }
    //c[s.length()-i]='\0';
    string s2 = s.substr(i+1, s.length()-i-1);

    for (int i = 0; i < s2.length(); i++) {
        s2[i]='9';
    }
    d += (s[i]-'0') * calculate(s2,0);
    d += calculate(s, i + 1);
    
    return d;

}

ll lcm(ll a, ll b) {
    return (a / gcd(a,b)) * b;
}
*/
typedef vector<char> vc;

int sobra(int a[], int i, int n, int k) {
    //int k = n - i + 1;
    int m = i-1;
    int t = n - i + 1;
    for (; i < n; i++) {
        if (a[i] - a[i-1] > k) {
            int j = sobra(a, i+1, n, k);
            if (j > (i-m)) {
                //t = t - (i-m);
                return j;
            } else {
                return (i-m);
                //break;
            }
            //break;
        }
    }
    return t;
}
int main() {
    int n,m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0;i  < m; i++) {
        cin >> b[i];
    }
    sort(a, a+n);
    sort(b, b+m);
    int j =0;

    int c = 0;
    int i = 0;
    int f = 0;
    
    while (j < n - 1 && i < m - 1) {
        if (a[j] <= b[i]) {
            c++;
            f=1;
        } else {
            cout << c << " ";
            f = 0;
            i++;
        }
    }
    if (i < m - 1) {
        while (i < m - 1) {
            if (a[j] <= b[i]) {
                c++;
                break;
            } else {
                cout << c << " ";
                i++;
            }
        }
        for (;i < m - 1; i++) {
            cout << c << " ";
        }
    }



    if (a[n-1] <= b[i])
    
    for (;i < m-1; i++) {
        cout << c << " ";
    }
    if (f) {
        cout << c EN;
    }
    
    

    int t;
    cin >> t;
    for (int i = 0;i<t; i++) {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll s[n];
        s[0] = a[0];
        for (int i = 1;i < n; i++) {
            s[i] = s[i-1] + a[i];
        }

        int k = 0;
        for (int i = n-1; i > - 1; i--) {
            if ((s[i] % x) != 0) {
                k = i + 1;
                break;
            }
        }


        for (int i = 0;i < n-1; i++) {
            if (((s[n-1] - s[i] ) % x ) != 0) {
                if (n - (i+1) > k) {
                    k = n - (i+1);
                }
                break;
            }
        }
        if (k ) {
            cout << k EN;
        } else {
            cout << -1 EN;
        }
        
    }
   
    
    
    
    
    
   


    
  
}

