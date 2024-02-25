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

int proc(ll s1, ll s2, int j, int k, int a[]) {
    if (s1 == s2) {
        return 1;
    } else {
        if (j > k) {
            return 0;
        } else {
            
        }
    }

}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        ll a[n];
        ll s1 = 0, s2 = 0;
        cin >> a[0];
        s1 =  a[0];

        for (int i = 1; i < n; i++) {
            cin >> a[i];
            if (i % 2 == 0) {
                s1 += a[i];
            } else {
                s2 += a[i];
            }
        }

        if (s1 == s2) {
            YES;
        } else {
            int j = 0;
            int k = n -1;
            if (n % 2 == 0) {
                while (s1 != s2 && j < k) {
                    if (s1 > s2) {
                        s1 -= a[j];
                        j+=2;
                    } else {
                        s2 -= a[k];
                        k-=2;
                    }
                }
                if (s1 == s2) {
                    YES;
                } else {
                    NO;
                }
            } else {
                ll s1b = s1;
                ll s2b = s2;
                s1 -= a[0];
                j = n-1;
                k = 1;
                while (s1 != s2 && k < j) {
                    if (s1 > s2) {
                        s1 -= a[j];
                        j-=2;
                    } else {
                        s2 -= a[k];
                        k+=2;
                    }
                }
                if (s1 == s2) {
                    YES;
                    break;
                } else {
                    s1b -= a[n-1];
                    j=0;
                    k = n - 2;
                    while (s1b != s2b && j < k) {
                        if (s1b > s2b) {
                            s1b -= a[j];
                            j += 2;
                        } else {
                            s2b -= a[k];
                            k -= 2;
                        } 
                    }
                    if (s1b == s2b) {
                        YES;
                    } else {
                        NO;
                    }
                }
            }
        }
        
    }
    return 0;
} 