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
#define co cout <<
#define en << endl;



ll _sieve_size;
bitset <33002> bs;
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

vi dividers(ll N) {
    vi f = primeFactors(N);
    vi b;
    
    b.push_back(1);
    ll c = 1;
    //b.push_back(f[0]);
    //ll c = f[0];
    for (int i = 0 ; i < f.size(); ) {
        c = f[i];
        vi d;
        d.push_back(c);
        i++;
        while (c == f[i]) {
            d.push_back(c*d[d.size()-1]);
            i++;
        }
        int j = b.size();
        for (int i = 0; i < j; i++) {
            for (int k = 0; k < d.size(); k++) {
                b.push_back(b[i]*d[k]);
            }
        }
    }
    return b;
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

vi primeFactors3(ll N) {
    vi factors;
    ll PF_idx = 0, PF = primes[PF_idx];
    while (N != 1 && (PF * PF <= N)) {
        if (N % PF == 0) {
            N /= PF;
            factors.push_back(PF);
            break;
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

vi primeFactors4(ll N) {
    vi factors;

    ll PF_idx = 0;
    ll PF=primes[0];
    while (!(N%2)) {
        while (N % PF == 0) {
            N /= PF;
            //factors.push_back(PF);
        }
    }
    PF_idx = 1, PF = primes[PF_idx];
    while (N != 1 && (PF * PF <= N)) {
        while (N % PF == 0) {
            N /= PF;
            factors.push_back(PF);
        }
        PF = primes[++PF_idx];
    }
    
    if (N > 2) {
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
// typedef vector<char> vc;

// int sobra(int a[], int i, int n, int k) {
//     //int k = n - i + 1;
//     int m = i-1;
//     int t = n - i + 1;
//     for (; i < n; i++) {
//         if (a[i] - a[i-1] > k) {
//             int j = sobra(a, i+1, n, k);
//             if (j > (i-m)) {
//                 //t = t - (i-m);
//                 return j;
//             } else {
//                 return (i-m);
//                 //break;
//             }
//             //break;
//         }
//     }
//     return t;
// }
/*
std::sort(population.begin(), population.end(), [](people* a, people* b) {
    if (a->name != b->name) return a->name < b->name;
    return a->city < b->city;
});

std::sort(population.begin(), population.end(),
    [](auto& p1, auto& p2) {
        return std::tie(p1->name, p1->city) < std::tie(p2->name, p2->city); 
    });*/





// int a[200000];

//int c[100000];

int calculate(int a[], int i, int t, int n) {
    t += a[i];
    if (i == n-1) {
        if (!(t%360)) {
            return 1;
        } else {
            t -= 2 * a[i];
            if (!(t%360)) {
                return 1;
            }
            return 0;
        }
    }
    int r = calculate(a, i+1, t, n);
    if (r == 0) {
        t -= 2*a[i];
        r = calculate(a,i+1,t,n);
        if (r == 0) {
            return 0;
        } else {
            return 1;
        }
    } else {
        return r;
    }

}
typedef vector<ll> vll;


void walk(string s[], int i, int j, int n) {
    // if(y[i][j]) {
    //     return;
    // }
    //y[i][j]=1;
    // if (((i + 1) < n) && (s[i+1][j]=='1')) {
    //     walk(s,i+1,j,n);
    // } 
    if (((i-1) > -1) && (s[i-1][j]=='1')) {
        walk(s,i-1,j,n);
    } 
    // if (((j+1)<n) && (s[i][j+1]-'0')) {
    //     walk(s,i,j+1,n);
    // } 
    if (((j-1) >-1) && (s[i][j-1]-'0')) {
        walk(s,i,j-1,n);
    }
    
}
int sum(string s) {
    int t= 0;
    for (auto &e : s) {
        t += e - '0';
    }
    return !(t%4);
}


ll sum(vector<ll> p2, ll d, ll i, ll n, ll s) {
    if (i+s == n) {
        return p2[i-1];
    }
    //p2[i-1];

    ll ac = 0;

    for (int j = 1; (j < (d-1)) && ((i + s+j) <= n); j++) {
        ac = (ac + sum(p2, d, j, n, s+i)) % 1000000007;
    } 
    return (p2[i-1]*ac) % 1000000007;
}
// void insert(list<int>::iterator a[], int b) {
//     if (b < *(a[0])) {
//         a[2] = a[1];
//         a[1] = a[0];
//         a[0] = b;
//     } else if (b < a[1]) {
//         a[2] = a[1];
//         a[1] = b;
//     } else {
//         a[2] = b;
//     }
// }

ll sum(ll n, ll p) {
    if (n <= 9) {
        return (n * (n+1)) / 2;
    } else {
        ll d = n / p;
        ll s = (p * d) - 1;
        ll p2 = p;
        while (p2 > (n-s-1)) {
            p2 /= 10;
        }
        while (p > s) {
            p /= 10;
        }
        return (n - s) * d + sum(n - s-1, p2) + sum(s, p) ; 
    }
}


#define CON 1000000007
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        ll p = 10;
        while (p <= n) {
            p *= 10;
        }
        p /= 10;
        cout << sum(n, p) en;
    }
    
   

   

    
           
    
}

    

    


    



    
    
    


    

  
    
    
    
    
    
   

