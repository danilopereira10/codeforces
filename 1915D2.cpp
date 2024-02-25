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
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << s[0];
        if (s.size() > 1) {
            cout << s[1];
        }
        if (s.size() == 3) {
            cout << s[2];
        } else if (s.size() == 4) {
            cout << '.' << s[2] << s[3];
        } else{
            for (int i = 2; i < s.size(); ) {
                if (i + 2 < s.size()) {
                    if ((s[i] == 'b' || s[i] == 'c' || s[i] == 'd') && (s[i+1] == 'b' || s[i+1] == 'c' || s[i+1] == 'd')) {
                        cout << s[i] << '.' << s[i+1] << s[i+2];
                        i+=3;
                    } else {
                        //if (i + 1 == s.size() - 1) {
                        //    cout << s[i] << s[i+1];
                        //} else {
                        cout << '.' << s[i] << s[i+1];
                        //}
                        i+=2;
                    }
                } else {
                    if (s.size()-1 - i == 0) {
                        cout << s[i];
                    } else {
                        cout << '.' << s[i];
                    }
                    i++;
                }

            }
        }
        cout << endl;
        
        
        
    }
    return 0;
} 