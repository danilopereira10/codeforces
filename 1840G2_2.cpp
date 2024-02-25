#include <stdio.h>
#include <cmath>
#define MAXN 101
#include <iostream>
#include <iomanip>
#include <sstream>
#include <unordered_map>
#include <random>
#include <climits>
#include <bitset>
using namespace std;

double prob[MAXN][MAXN];

void le_matriz(int, int);
void floyd_warshall(int);


int number(int n){
    int count = 0;
    
    while(n>0){
        count++;
        n = n/10;
    }
    //printf("No. of digits = %d", count);

}
typedef long long ll;
typedef vector<int> vi;




ll _sieve_size;
bitset <1100002> bs;
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

int main() {
    sieve(1100000);
    int n;
    cin >> n;
    unordered_map<int, long long> a;
    a[n] = 0;
    int b;
    
    const int range_from  = 0;
    const int range_to    = 10000000;
    std::random_device                  rand_dev;
    std::mt19937                        generator(rand_dev());
    std::uniform_int_distribution<int>  distr(range_from, range_to);

    ll s = 0;
    int r = 0;

    //int c[10] = {1, 5, 6, 7, 2, 10, 9, 8, 4, 3};
    while (true) {
        while (((s+r) > 1000000000) || ((s+r)<-1000000000)) {
            r = distr(generator);
        }
        s = s + r;
        if (r > 0) {
            cout << "+ " << r << endl;
        } else {
            cout << "- " << r << endl;
        }
        cout << endl;
        cout.flush();
        //int b = c[s % 10];
        cin >> b;
        if((a[b] != 0) || (b==n && s!=0)) {
            s = s - a[b];
            if (s < 0) {
                s = -s;
            }
            //vi f = primeFactors(s);
            ll r3 = s-a[b];
            ll r4 = b;

            ll s4 = s;
            
            for (ll i = sqrt(s);i  >2; i-=2) {
                if (!(s % i)) {
                    cout << "+ " << s/i << endl;
                    s4 += s / i;
                    cout << endl;
                    cout.flush();
                    //int r3 = c[s4%10];
                    cin >> r3;
                    if (r4 != r3) {
                        r4 = r3;
                    } else {
                        s = s / i;
                    }
                }
            }
            if (!(s % 2)) {
                cout << "+ " << s / 2 << endl;
                s4 += s / 2;
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

void le_matriz(int n, int m) {
    int u, v, probabilidade;
    for (u = 0; u < n; u++) {
        for (v = 0; v < n; v++) {
            prob[u][v] = 0;
        }
    }
    while (m--) {
        scanf("%d %d %d", &u, &v, &probabilidade);
        prob[u][v] = prob[v][u] = (probabilidade + 0.0) / 100;
    }
}

void floyd_warshall(int n) {
    int u, v, intermediario;
    double prob_candidata;
    for (intermediario = 0; intermediario <= n; intermediario++) {
        for (u = 0; u <= n; u++) {
            for (v = 0; v <= n; v++) {
                prob_candidata = prob[u][intermediario] * prob[intermediario][v];
                if (prob_candidata > prob[u][v]) {
                    prob[u][v] = prob_candidata;
                }
            }
        }
    }
}