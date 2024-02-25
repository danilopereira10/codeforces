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
    a[n] = 0;
    ll b;
    
    const ll range_from  = -1000000000;
    const ll range_to    = 1000000000;
    std::random_device                  rand_dev;
    std::mt19937                        generator(rand_dev());
    std::uniform_int_distribution<int>  distr(range_from, range_to);

    ll s = 0;
    ll r = 0;
    //ll rr = 0;
    while (true) {
        r = distr(generator);
        /*while (((s+r) > 1000000000) || ((s+r)<-1000000000)) {
            r = distr(generator);
        }*/
        while (((s+r) > 4e18) || ((s+r)<-4e18)) {
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
      
        cin >> b;

        if((a[b] != 0 || b==n) && ((s-a[b])!=0)) {
            s = s - a[b];
            if (s < 0) {
                s = -s;
            }
            vector<ll> f = primeFactors(s);
            
            ll r3 = b;
            ll r4 = b;

           

            for (ll i = min(1e6, sqrt(s));i  > 1;) {
                if (!(s % i)) {
                    cout << "+ " << s/i << endl;
                    
                    cout << endl;
                    cout.flush();
                    cin >> r3;
                    
                    if (r4 != r3) {
                        r4 = r3;
                    } else {
                        s = s / i;
                        if (s < i*i) {
                            i = sqrt(s);
                        }
                    }
                } else {
                    i--;
                }
            }
            if ( !(s%2)) {
                cout << "+ " << s / 2 << endl;
                cout << endl;
                cout.flush();
                cin >> r3;
                if (r4 != r3) {
                    r4 = r3;
                } else {
                    s = s / 2;
                }
            }

            break;
        } else {
            a[b] = s;
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