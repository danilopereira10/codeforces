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
typedef vector<ll> vll;

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define CI cin >>
#define co cout <<
#define en << endl;



ll _sieve_size;
bitset <1003> bs;
vll primes;

void sieve(ll upperbound) {
    _sieve_size = upperbound + 1;
    bs.set(); 
    bs[0] = bs[1] = 0;
    for (ll i = 2; i <= _sieve_size; i++) if (bs[i]) {
        for (ll j = i * i; j <= _sieve_size; j += i) bs[j] = 0;
        primes.push_back((ll) i);
    }
}

bool isPrime(ll N) {
    if (N <= _sieve_size) return bs[N];
    for (int i = 0; i < (int)primes.size(); i++)
        if (N % primes[i] == 0) return false;
    return true;
}

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}


vll primeFactors(ll N) {
    vll factors;
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

vector<ll> dividers(ll N) {
    vll f = primeFactors(N);
    vector<ll> b;
    
    b.push_back(1);
    ll c = 1;
    //b.push_back(f[0]);
    //ll c = f[0];
    for (int i = 0 ; i < (int) f.size(); ) {
        c = f[i];
        vll d;
        d.push_back(c);
        i++;
        while (c == f[i]) {
            d.push_back(c*d[d.size()-1]);
            i++;
        }
        int j = (int) b.size();
        for (int i = 0; i < j; i++) {
            for (int k = 0; k < (int) d.size(); k++) {
                b.push_back(b[i]*d[k]);
            }
        }
    }
    return b;
}

vll primeFactors2(ll N) {
    vll factors;
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

vll primeFactors3(ll N) {
    vll factors;
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

vll primeFactors4(ll N) {
    vll factors;

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
        ll p3 = p;
        while (p2 > (n-s-1)) {
            p2 /= 10;
        }
        return (n - s) * d + sum(n - s-1, p2) + (d-1)*(d)/2 * (p3)  + sum(p3-1, p3/10) ; 
    }
}



// int binarySearch(ll arr[], int low, int high, int x)
// {
//     int f = 0, l = -1;
//     while (low <= high) {
//         int mid = low + (high - low) / 2;

//         // Check if x is present at mid
//         if (arr[mid] == x) {
//             return mid;
//         }

//         // If x greater, ignore left half
//         if (arr[mid] <= x)
//             low = mid + 1;

//         // If x is smaller, ignore right half
//         else {
//             high = mid - 1;
//         }
//     }
//     if (f) {
//         return l;
//     } else {
//         // If we reach here, then element was not present
//         return -1;
//     }
// }

int binarySearch(ll arr[], int low, int high, int x)
{
    int f = 0, l = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;


        if (arr[mid] <= x) {
            f = 1;
            if (mid > l) {
                l = mid;
            }
            low = mid + 1;

        } else {
            // If x is smaller, ignore right half 
            high = mid - 1;
        }
    }
    if (f) {
        return l;
    } else {
        // If we reach here, then element was not present
        return -1;
    }
}

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

typedef map<ll,ll> u;
using tl = tuple<ll,ll>;

ll d(tuple<ll,ll> l) {
    return get<0>(l);
}

ll e(tuple<ll,ll> l) {
    return get<1>(l);
}

bool f(tl a, tl b, tl c) {
    if (e(a) == e(b) || e(a) == e(c) || e(b) == e(c)) {
        return 1;
    } else {
        return 0;
    }
}

tl g(ll a, ll b) {
    return make_tuple(a,b);
}


#define CON 1000000007
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        ll a[2];
        cin >> a[0] >> a[1];
        sort(a, a+2);
        ll x[2], y[2];
        cin >> x[0] >> y[0] >> x[1] >> y[1];
        sort(x, x+2);
        sort(y, y+2);
        
        int f = 0;
        if (a[0] != a[1]) {
            ll c[4] = {-b, -a, a, b}
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4 && x[0] +; j++) {
                    if ()
                }
            }
        } else {
            
        }
        
        ll c[6];
        c[0] = -a[0]+a[1];
        c[1] = a[1] - a[0];
        c[2] = 2*a[0];
        c[3] = a[0]+a[1];
        c[4] = 2*a[1];
        c[5] = a[1] + a[0];
        int d = 0, e = 0;
        
        if (a[0] != a[1]) {
            if (c[0] + x[0] == x[1]) {
                d+=2;
            }
            if (c[0] + y[0] == y[1]) {
                e+=2;
            }
            
            for (int i = 0; i < 3; i++) {
                if (x[0] + c[2*i] == x[1] || x[0] + c[2*i+1] == x[1]) {
                    d++;
                }
            }
            for (int i = 0; i < 3; i++) {
                if (y[0] + c[2*i] == y[1] || y[0] + c[2*i+1] == y[1]) {
                    e++;
                }
            }
        } else {
            if (x[0] + c[1] == x[1]) {
                d++;
            }
            if (y[0] + c[1] == y[1]) {
                e++;
            }
            
        }
        co d * e en;
    }
 
   
}