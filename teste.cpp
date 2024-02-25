    /* ================================================== AKSHAT AJMERA ================================================== */
    #include <bits/stdc++.h>
    using namespace std;
     
    using ll = long long;
    using ld = long double;
    using ull = unsigned long long;
     
    #define fast() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
    #define loop(a,begin,end) for(__typeof(begin)a=((begin)-((begin)>(end))); a!=((end)-((begin)>(end))); a+=(1-(2*((begin)>(end)))))
    // Mathematics macros
    #define gcd(a,b) __gcd(a,b)
    #define lcm(a,b)  (a/gcd(a,b))*b
    // Vector macros
    #define inputVec(v) loop(a,0,v.size()) {cin >> v[a];}
    #define outputVec(v) loop(a,0,v.size()) {cout << v[a] << " ";} cout << "\n"
    #define all(v) v.begin(), v.end()
    #define rall(v) v.rbegin(), v.rend()
    // Associative Container macros
    #define loopc(it, container) for(auto it=container.begin(); it!=container.end(); it++)
    // Debugger macros
    #ifndef ONLINE_JUDGE
        #define debug(x) cerr << '[' << #x << " is " << x << ']' << "\n"
    #else
        #define debug(x)
    #endif
     
    const ull mod = 1e9+7;  // 998244353
    const float PI = 3.141592653589793;
    const float  E = 2.718281828459045;
     
    // Custom Comparator
    bool comp(const pair<ll,ll> &a, const pair<ll,ll> &b) {
        if(a.first != b.first) {return (a.first > b.first);}
        else {return (a.second > b.second);}
    }
     
    // Decimal to Binary
    string DecToBin(ll x) {
        string s = "";
        while(x>0) {
            ll t = x%2;
            s.push_back(t+'0');
            x /= 2; 
        }
        reverse(all(s));
        if(s.compare("") == 0) {
            return "0";
        }
        return s;
    }
     
    // Binary to Decimal
    int BinToDec(string s) {
        ll ans = 0;
        ll n = s.size();
        loop(i,n,0) {
            if(s[i] == '1') {
                ans += pow(2,n-i-1);
            }
        }
        return ans;
    }
     
    // Prime Checker
    void sievePrime(vector<bool> &sieve) {
        int N = sieve.size()-1;
        sieve[0] = sieve[1] = false;
        for(int i=2; i*i<=N; i++) {
            if(sieve[i]) {
                for(int j=i*i; j<=N; j+=i) {
                    sieve[j] = false;
                }
            }
        }
    }
     
    bool isPrime(int n) {
        if(n<2) {return false;}
        if(n==2) {return true;}
        for(int i=3; (i*i)<=n; i+=2) {if(!(n%i)) {return true;}}
        return false;
    }
     
    // Modular Arithmetic
    ull modPow(ull a, ull b, ull p = mod) {  // power of large numbers using mod
        ull ans = 1;
        a %= p;
        while(b) {
            if(b & 1) {ans = (ans * a) % p;}
            a = (a * a) % p;
            b >>= 1;
        }
        return ans;
    }
    ull modInv(ull n, ull p = mod) {return modPow(1ll*n, p-2);}	// using Fermat's Little Theorem
    ll modAdd(ll a, ll b) {return ((a % mod) + (b % mod)) % mod;}
    ll modSub(ll a, ll b) {return ((a % mod) - (b % mod) + mod) % mod;}
    ll modMul(ll a, ll b) {return ((a % mod) * (b % mod)) % mod;}
    ll modDiv(ll a, ll b) {return ((a % mod) * (modInv(b) % mod)) % mod;}
     
    void solve() {
        ull a, b, r, x=0, abit=0, bbit=0, t;
        cin >> a >> b >> r;
        bool f0 = true, f1 = true;
        if(b > a) {
            swap(a,b);
        }
        loop(i,64,0) {
            abit = 0;
            bbit = 0;
            t = (1LL << i);
            if(t & a) {
                abit = 1;
            }
            if(t & b) {
                bbit = 1;
            }
            if(abit != bbit) {
                if((f0 && bbit) || (!f0 && abit)) {
                    if(x+t <= r) {
                        x += t;
                    }
                    f0 = false;
                }
            }
            else {
                continue;
            }
            if(f1) {
                if((x & t) && !(r & t)) {
                    f1 = false;
                    x &= ~t;
                }
            }
        }
        cout << ((a^x) - (b^x)) << endl;
        return;
    }
     
    main(void) {
        fast();
        #ifndef ONLINE_JUDGE
            freopen("input.txt","r",stdin);
            freopen("output.txt","w",stdout);
            freopen("error.txt","w",stderr);
        #endif
        clock_t begin = clock();
        int t;
        cin >> t;
        while(t--) {
            solve();
        }
        clock_t end = clock();
        #ifndef ONLINE_JUDGE
            cerr << "Time Elapsed: " << (double)(end-begin)/CLOCKS_PER_SEC << " s\n";
        #endif
        return 0;
    }