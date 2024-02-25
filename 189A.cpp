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

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<tuple<int,int>> vti;
stack<tuple<int, int, int>> num;/*  */
stack<tuple<int, int, int>> num2;
typedef vector<string> vs;


vti dif;
typedef long long ll;

ll _sieve_size;
bitset <1202> bs;
vi primes;
vi tprimes;

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

vi j;
int main() {
    int n, a, b, c;
    
    cin >> n >> a >> b >> c;
    j.push_back(a);
    j.push_back(b);
    j.push_back(c);
    sort(j.begin(), j.end());

    int d = min(a,b);
    d = min(d, c);
    int f = max(a,b);
    f = max(f, c);
    int e = j[1];
    /*
    int g = n / d;
    int r = n % d;
    if (r != 0) {
        while(r%e != 0) {
            r+=d;
            g--;
        }
        g+= r/e;
    }
    r = n % d;
    int h = n / d;
    if (r != 0) {
        while(r % f != 0) {
            r+=d;
            h--;
        }
        h+=r/f;
    }
    
    if (max(g,h) < 0) {
        int su = 0;
        for (int i = 0; su < n; i++) {
            for (int ma = 0; su < n; ma++) {
                for (int ma2 = 0; su < n; ma2++) {
                    su = i * f + ma * e + ma2 * d;
                    if (su == n) {
                        f = 1;
                        break;
                    }
                }
            }
        }
    } else {
        cout << max(g,h) << endl;
    }*/

    int su = 0;
    int kk = 0;
    int f2 = 0;
    for (int i = 0; su <= n; i++) {
        for (int ma = 0; su <= n; ma++) {
            int ma2 = (n - i*f -ma*e)/d;
            su = i * f + ma * e + ma2 * d;
            if (su == n) {
                f2 = 1;
                if (i + ma + ma2 > kk && ma2 >= 0) {
                    kk = i + ma + ma2;
                }
            }
            su = i * f + ma * e;

        }
        su = i * f;
    }
    cout << kk << endl;

}