
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
bitset <34002> bs;
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

#define CON 1000000007
int main() {
    int k;
    cin >> k;
    for (int i = 0; i < k ; i++) {
        int n,m;
        cin >> n >> m;
        ll a[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        unordered_map<string,ll> b;
        for (int i = 0; i < n; i++) {
            //int d = i;
            for (int j = 0; j < m; j++) {
                b[to_string(i-j)+"_"+to_string(i+j)] = a[i][j];
            }
        }
        ll t =0, t2 = 0, m1=-1, m2 =-2;

        

        ll j1 = -1;
        for (int i2 = 0; i2 < n; i2+=2) {
            t = 0;
            for (int i = i2; i < n && i-i2 < m; i++) {
                t+=a[i][i-i2];
            }
            if (t > m1) {
                m1 = t;
                j1 = i2;
            }
        }

        for (int i2 = 2; i2 < m; i2+=2) {
            t = 0;
            for (int i = 0; i < n && (i+i2 <m); i++) {
                t += a[i][i+i2];
            }
            if (t > m1) {
                m1 = t;
                j1 = -i2;
            }
        }
        ll j2 = -1;
        for (int i2 = 1; i2 < n; i2+=2) {
            t2=0;
            for (int i = i2; i < n && (i-i2 < m); i++) {
                t2 += a[i][i-i2];
            }
            if (t2 > m2) {
                m2 = t2;
                j2 = i2;
            }
        }
        for (int i2 =1; i2 < m; i2+=2) {
            t2 = 0;
            for (int i = 0; i < n && (i2+i < m); i++ ) {
                t2 += a[i][i2+i];
            }
            if (t2 > m2) {
                m2 = t2;
                j2 = -i2;
            }
        }

        ll t3 = 0, j3 =- 1, m3 = -1;
        for (int i2 = 0; i2 < n; i2+=2) {
            t3 = 0;
            for (int i=i2; i > -1 && i < n && i2-i < m; i--) {
                t3 += a[i][i2-i];
            }
            if (t3 > m3) {
                m3 = t3;
                j3 = i2;
            }
        }

        for (int i2 = 1 + (n%2); i2 < m; i2+=2) {
            t3 = 0;
            for (int i=i2; n-1+i2-i >-1 && n-1+i2-i <n && i < m ;i++) {
                t3 += a[n-1+i2-i][i];
            }
            if (t3 > m3) {
                m3 = t3;
                j3 = n-1+i2;
            }
        }

        ll m4 = -1, t4, j4=-1;
        for (int i2 = 1; i2 < n; i2+=2) {
            t4 = 0;
            for (int i=i2; i < n && i >-1 && i2-i > -1 && (i2-i < m); i--) {
                t4+=a[i][i2-i];
            }
            if (t4 > m4) {
                m4 = t4;
                j4 = i2;
            }
        }
        for (int i2 = 2-(n%2); i2 < m; i2+=2) {
            t4 = 0;
            for (int i = i2; n-1+i2-i < n && n-1+i2-i > -1 && i < m; i++) {
                t4+=a[n-1+i2-i][i];
            }
            if (t4 > m4) {
                m4 = t4;
                j4 = n-1+i2;
            }
        }
        if (n==1 && m == 1) {
            cout << a[0][0] EN;
        } else {
            int t5 = b[to_string(j1) + "_" + to_string(j3)];
            ll m5 = m1+m3 - t5;
            int t6 = b[to_string(j2)+"_"+to_string(j4)];

            ll m6 = m2+m4 - t6;
            cout << max(m5,m6) EN;
        }

    }
    

   

    
           
    
}

    

    


    



    
    
    


    

  
    
    
    
    
    
   


    
  


