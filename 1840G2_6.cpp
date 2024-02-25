//#include <stdio.h>


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

// #include <cmath>
// #define MAXN 101
// #include <iostream>
// #include <iomanip>
// #include <sstream>
// #include <unordered_map>
// #include <random>
// #include <climits>
// #include <bits/stdc++.h>

using namespace std;

// double prob[MAXN][MAXN];

void le_matriz(int, int);
void floyd_warshall(int);



typedef long long ll;
typedef vector<int> vi;




ll _sieve_size;
bitset <1100002> bs;
vector<ll> primes;

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

ll gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}


vector<ll> primeFactors(ll N) {
    vector<long long> factors;
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

int main() {
    sieve(1100000);
    ll n;
    cin >> n;
    unordered_map<ll, long long> a;
    unordered_map <ll,long long> e;
    a[n] = 0;
    ll b;
    
    const ll range_from  = -500000;
    const ll range_to    = 500000;
    std::random_device                  rand_dev;
    std::mt19937                        generator(rand_dev());
    std::uniform_int_distribution<int>  distr(range_from, range_to);

    ll s = 0;
    e[s] = n;
    ll r = 0;
    //ll rr = 0;
    //ll d[10] = {1, 5, 6, 7,2 ,10, 9, 8, 4, 3};
    while (true) {
        r = distr(generator);
        while (((s+r) > 1000000) || ((s+r)<0) || e[s+r]!=0) {
            r = distr(generator);
        }
        s = s + r;
        if (r > 0) {
            cout << "+ " << r << endl;
        } else {
            cout << "- " << -r << endl;
        }
        cout << endl;
        cout.flush();
      
        ll ind = s % 10;
        if (ind < 0) {
            ind = ind + 10;
        }
        //b = d[ind];
        //cout << "b (print 3) " << b<< endl;
        cin >> b;
        e[s]=b;

        ll s5 = s;
        
        ll b2 = b;
        ll s6 = s;
        //cout << "b2 s6 " << b2 << " " << s6 << endl;
        vector<tuple<int,int,int,int>> r5;
        vector<tuple<int,int,int,int>> b3;
        if((a[b] != 0 || b==n)) {
            //cout << "a[b] b (print 2) " << a[b] << " " << b << endl;
            s = s - a[b];
            //cout << "s " << s << endl;
            if (s < 0) {
                s = -s;
            }
            vector<ll> f = primeFactors(s);
            
            ll r3 = b;
            ll r4 = b;

           
            
            for (ll i = 0;i  < f.size(); i++) {
                ll s2 = f[i];
                ll re = s5-s/s2;
                ll p =0;
                if (e[re] == 0) {
                    re = s5 + s/s2;
                    p = 1;
                }
                if (e[re]==0) {
                    if (s5 + s / s2 > 1000000) {
                        cout << "- " << s/s2 << endl;
                        s5 = s5 - s / s2;
                    } else {
                        cout << "+ " << s/s2 << endl;
                        s5 = s5 + s / s2;
                    }
                    cout << endl;
                    cout.flush();
                    ll ind = s5 % 10;
                    if (ind < 0) {
                        ind += 10;
                    }
                    //r3 = d[ind];
                    
                    b3.push_back(make_tuple(r3, i, s5, re));
                    //cout << "r3 i s5 re " <<r3 << " " << i << " " << s5 << " " << re << endl; 
                    
                    cin >> r3;
                    e[s5]=r3;
                    if (r4 != r3) {
                        r4 = r3;
                    } else {
                        s = s / s2;
                    }


                } else {
                    r5.push_back(make_tuple(r3, i,r4, e[re]));
                    //cout << "r3 i r4 e[re] " << r3 << " " << i << " " << r4 << " " << e[re] << endl;
                    ll r3 = e[re];
                    if (r3 != r4) {

                    } else {
                        s = s / s2;
                    }
                    //ll dif = s5 - a[b];
                }
                
                
            }
            if (s != 10) {
                //cout << "o";
            }
            break;

            //break;
        } else {
            a[b] = s;
            //cout << "a[b] b " << a[b] << " " << b  << endl;
            
            //e[s] = b;
        }
    }



    cout << "! " << s << endl;
    cout.flush();
    
    
    return 0;
}

// void le_matriz(int n, int m) {
//     int u, v, probabilidade;
//     for (u = 0; u < n; u++) {
//         for (v = 0; v < n; v++) {
//             prob[u][v] = 0;
//         }
//     }
//     while (m--) {
//         scanf("%d %d %d", &u, &v, &probabilidade);
//         prob[u][v] = prob[v][u] = (probabilidade + 0.0) / 100;
//     }
// }

// void floyd_warshall(int n) {
//     int u, v, intermediario;
//     double prob_candidata;
//     for (intermediario = 0; intermediario <= n; intermediario++) {
//         for (u = 0; u <= n; u++) {
//             for (v = 0; v <= n; v++) {
//                 prob_candidata = prob[u][intermediario] * prob[intermediario][v];
//                 if (prob_candidata > prob[u][v]) {
//                     prob[u][v] = prob_candidata;
//                 }
//             }
//         }
//     }
// }