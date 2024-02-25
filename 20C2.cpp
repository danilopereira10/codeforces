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
bitset <402> bs;
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
    //sieve(500);
    int n,m;
    cin >> n >> m;
    vector<vector<tuple<int,int>>> a(n);
    for (int i = 0; i < m; i++) {
        int c, d, e;
        cin >> c >> d >> e;
        a[c-1].push_back(make_tuple(d-1,e));
        a[d-1].push_back(make_tuple(c-1,e));
    }
    ll v[n];
    v[0] = 0;
    for (int i = 1; i < n; i++) {
        v[n] == LONG_LONG_MAX;
    }
    int j = a[0].size();
    priority_queue <tuple<int,int,int>, vector<tuple<int,int,int>>, greater<tuple<int,int,int>> > pq;
    for (int i = 0; i < a[0].size();i++) {
        tuple<int,int> b = a[0][i];
        //v[get<0>(b)] = get<1>(b);
        //a[0].push_back(make_tuple(get<0>(b), get<1>(b)));
        pq.push(make_tuple(get<1>(b),get<0>(b), 0));
    }

    int vis[n];
    vis[0] = 1;
    for (int i = 1 ; i < n ; i++) {
        vis[i]=0;
    }
    int f = 0;
    
    int p[n];
    //p[0] = 0;
    for (int i = 0; i < n; i++) {
        p[i]=-1;
    }
    while (!pq.empty()) {
        tuple<int,int,int> b = pq.top();
        pq.pop();
        if (vis[get<1>(b)]) {
            continue;
        }
        vis[get<1>(b)]=1;
        //p.push_back(get<1>(b));
        v[get<1>(b)] = get<0>(b);
        p[get<1>(b)] = get<2>(b);
        vti c = a[get<1>(b)];
        for (int i = 0; i < c.size(); i++) {
            pq.push(make_tuple(get<1>(c[i])+get<0>(b), get<0>(c[i]), get<1>(b)));
        }

        if (get<1>(b) == n - 1) {
            f = 1;
            break;
        }
        
    }
    if (f) {
        int q[n];
        for (int i = 0; i < n; i++) {
            q[i] = -1;
        }
        int i = n - 1;
        //cout << n;
        while (p[i] != - 1) {
            q[p[i]] = i;
            i = p[i];
        }
        cout << 1;
        i = 0;
        while (q[i] != -1) {
            cout << " ";
            cout << q[i]+1;
            i = q[i];
        }
        cout EN;
       
    } else {
        cout << -1 EN;
    }
    //cout EN;
    
    

    
   
}
