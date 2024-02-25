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
/*
std::sort(population.begin(), population.end(), [](people* a, people* b) {
    if (a->name != b->name) return a->name < b->name;
    return a->city < b->city;
});

std::sort(population.begin(), population.end(),
    [](auto& p1, auto& p2) {
        return std::tie(p1->name, p1->city) < std::tie(p2->name, p2->city); 
    });*/

tuple<ll,ll> a[200001];
string s[100];
int visited[100][100], visited2[100][100];
int m, n, c;

int visit(int i, int j) {
    if (visited2[i][j]) {
        return 0;
    } else if (visited[i][j]) {
        //visited2[i][j] = 1;
        return 1;
    } else {
        visited[i][j] = 1;
        int f = 0;
        if (s[i][j] == 'R') {
            if (j + 1 >= m) {
                // c++;
                f = 1;
            } else {
                //pj = j;
                j = j + 1;
            }
        } else if (s[i][j] == 'U') {
            if (i - 1 < 0) {
                // c++;
                f = 1;
            } else {
                // pi = i;
                i = i -1;
            } 
        } else if (s[i][j] == 'D') {
            if (i + 1 >= n) {
                // c++;
                f = 1;
            } else {
                //pi = i;
                i = i + 1;
            }   
        } else if (s[i][j] == 'L') {
            if (j - 1 < 0) {
                
                f = 1;
            } else {
                j = j - 1;
            }
        }
        int d;
        if (!f) {
            d = visit(i,j);
            if (d == 1) {
                f = 1;
            }
        }
        if (f) {
            if ((j + 1 < m) && (!visited[i][j+1] || visited2[i][j+1])) {
                s[i][j] = 'R';
                j = j + 1;
                c++;
                
            } else if ((i+1 < n) && (!visited[i+1][j] || visited2[i+1][j])) {
                s[i][j] = 'D';
                i = i + 1;
                c++;
                
            } else if ((i-1 > 0) && (!visited[i-1][j] || visited2[i-1][j])) {
                s[i][j] = 'U';
                i = i -1;
                c++;
                
            } else if (!visited[i][j-1] || visited2[i][j-1]) {
                s[i][j]= 'L';
                j = j - 1;
                c++;
                
            } else {
                return 1;
            }
            d = visit(i,j);
        
        }
        if (d == 0) {
            visited2[i][j] = 1;
        }
         
        return d;
        
        /*if (d) {
            c++;
        }
        return 0;
        while (d) {
            
            if ((j + 1 <= m) && (s[i][j] != 'R')) {
                j = j + 1;
                s[i][j] = 'R';
            } else {
                i = i + 1;
                s[i][j] = 'D';
            }
        }
        visited2[i][j]=1;*/
        
    } 

}

int main() {
    int t;
    cin >> t;
    for (int k = 0;k <t ; k++) {
        //int  n,m;
        cin >> n >> m;
        
        for (int i = 0;i < n; i++) {
            cin >> s[i];
        }
        int i = 0;
        int j = 0;
        for (int i = 0;i < n; i++) {
            for (int j = 0; j < m; j++) {
                visited[i][j] = 0;
                visited2[i][j]=0;
            }
        }
        visited2[n-1][m-1]=1;
        
        int pi = 0;
        int pj = 0;
        //int c = 0;
        c = 0;
        if ((n == 1) && m == 1) {
            cout << 0 EN;
        } else {
            for (int i = 0;i < n; i++) {
                for (int j = 0; j < m; j++) {
                    visit(i,j);
                }
            }
            cout << c EN;
            //c+= visit(0,0);
        }
        /*for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (visited2[i][j]) {
                    continue;
                } else {
                    while (true) {
                        if (!visited[i][j]) {
                            visited[i][j] = 1;
                            int f = 0;
                            if (s[i][j] == 'R') {
                                if (j + 1 >= m) {
                                    c++;
                                    f = 1;
                                } else {
                                    pj = j;
                                    j = j + 1;
                                }
                            } else if (s[i][j] == 'U') {
                                if (i - 1 < 0) {
                                    c++;
                                    f = 1;
                                } else {
                                    pi = i;
                                    i = i -1;
                                } 
                            } else if (s[i][j] == 'D') {
                                if (i + 1 >= n) {
                                    c++;
                                    f = 1;
                                } else {
                                    pi = i;
                                    i = i + 1;
                                }   
                            } else if (s[i][j] == 'L') {
                                if (j - 1 < 0) {
                                    c++;
                                    f = 1;
                                } else {
                                    pj = j;
                                    j = j - 1;
                                }
                            }
                            if (f) {
                                if (j + 1 <= m) {
                                    pj = j;
                                    j = j + 1;
                                    s[i][j] = 'R';
                                } else {
                                    pi = i;
                                    i = i + 1;
                                    s[i][j] = 'D';
                                }
                            }
                        } else {

                        }
                    }
                }
            }
        }*/
        
        
    }
    
    
    
   


    
  
}

