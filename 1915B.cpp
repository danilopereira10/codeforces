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
#include <cstdlib>


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




using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string s;
        for (int i = 0; i < 3; i++) {
            cin >> s;
            int a = 0, b = 0, c = 0;
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == 'A') {
                    a++;
                } else if (s[i] == 'B') {
                    b++;
                } else if (s[i] == 'C') {
                    c++;
                }
            }
            if (a+b+c == 3) {
                continue;
            } else {
                if (a == 0) {
                    cout << "A" << endl;
                } else if (b==0) {
                    cout << 'B' << endl;
                } else {
                    cout << 'C' << endl;
                }
                //break;
            }
        }
        
    }
    return 0;
} 