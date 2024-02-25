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
#include <set>


using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<tuple<int,int>> vti;
stack<tuple<int, int, int>> num;/*  */
stack<tuple<int, int, int>> num2;
typedef vector<string> vs;



ll _sieve_size;
bitset <52> bs;
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



/*int binary_search(int k) {
    int d = 0;
    int b = 28;
    int c = 14;
    while(b != d) {
        if (a[c] )
    }

}*/

int main() {
    int n;
    cin >> n;
    vi a;
    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        a.push_back(b);
    }
    int m;
    cin >> m;
    vti q;
    for (int i = 0; i < m; i++) {
        int b;
        cin >> b;
        q.push_back(make_tuple(b,i));
    }
    sort(q.begin(), q.end());
    int c = 0;
    int j = 0;
    vti r;
    for (int i = 0; i < q.size() && j < n; ) {
        if (c+1 <= get<0>(q[i]) && get<0>(q[i]) <= c+a[j]) {
            r.push_back(make_tuple(get<1>(q[i]),j+1));
            //cout << j+1 << endl;
            i++;
        } else {
            c+=a[j];
            j++;
        }
    }
    sort(r.begin(), r.end());
    for (int i =0; i < r.size(); i++) {
        cout << get<1>(r[i]) << endl;
    }
    
}   