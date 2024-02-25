// https://codeforces.com/blog/entry/125435
// Ultimate C++ Debug Template

// Frustrated with keeping track of variables in different functions? Say goodbye to the hassle with our easy-to-use template!
// It's designed to handle all data types, making it simple to see variable statuses throughout your program.

// Note: For latest updates on template, visit my Github.
// Template
// Simple Usage

// This template supports datatypes such as:

//     Primitive: int, char, bool, long long int etc.

//     STL: pair, tuple, vector, set, map, stack, queue, priority_queue, bitset etc.

//     Arrays of all datatypes: int arr[], bool arr[], vector<int> adj[] etc.

//     Matrix: int mat[100][200], vector<vector<bool>> vis(100, vector<bool> (200, 0)) etc.

//     Decayed Arrays / Matrices.

//     Rvalue Literals like "Hello", false, 'z', isSafe(i, j), dfs(u) etc.

//     Even complicated nested datatypes like: map<string, vector<pair<char, unordered_set<long long>>>> WHATTT; etc.

// You can use it on your computer when doing coding challenges on sites like CodeForces.
// Additionally, you can use it in online coding environments like LeetCode for practicing data structures and algorithms.
// How to use it?

// Let's say you have different datatypes such as:
// Example

// You can debug them like this debug(var1, var2, var3, var4, ...);
// Example

// In instances where arrays / matrices have decayed into pointers, use debugArr(arr, n);
// What is Array Decay?
// Note:

//     You don't need to remove debug(var, ...) statements in your code when submitting it.
//     On platforms like Codeforces, there's a macro called ONLINE_JUDGE that's defined, automatically disregarding all your debug statements. This ensures your solution will be accepted unless there's a logical error.
//     However, on platforms like LeetCode, ONLINE_JUDGE isn't defined. As a result, your solution might exceed the time limit even if it's correct, as these statements still consume time to print. To address this, simply change #ifndef to #ifdef before submitting, and your solution will be accepted.
//     Also, LeetCode supports cout instead of cerr, so you need to uncomment first line i.e. #define cerr cout to get output there.

// How to Setup?

//     Copy this template into your own templates. The output will be directed to the stderr stream.
//     Alternatively you can make a separate header file and include this into your template

//     #ifndef ONLINE_JUDGE
//     #include "template.cpp"
//     #else
//     #define debug(...)
//     #define debugArr(arr, n)
//     #endif

//     When using it for LeetCode uncomment #define cerr cout and before submitting change #ifndef to #ifdef to ignore debug(...);. For convenience, after changing it, copy it, and keep it pinned in your clipboard for repetitive use.

// For Complete Beginners who need step by step tutorial (for VS Code), follow these steps:
// Steps

// If you feel like this template is too long, you change it to one liner too. If you use format on save , you can take advantage of /* clang-format off */ to keep it one line.

// Since this is my first blog post, I'm open to any suggestions you might have, whether they're technical or not.

// Honorable Mention to this blog, that led me to develop my own template which supports almost everything now.

// If you liked this blog, please upvote it, I'd really be gratefull :)



#ifndef DEBUG_TEMPLATE_CPP
#define DEBUG_TEMPLATE_CPP
#include <bits/stdc++.h>
/* Uncomment following line to see Debug code on leetcode */
// #define cerr cout
namespace _DEBUG_UTIL_
{
    using namespace std;
    /* Primitive Datatypes Print */
    void print(const char *x) {}
    void print(bool x) { cerr << (x ? "T" : "F"); }
    void print(char x) { cerr << '\'' << x << '\''; }
    void print(signed short int x) { cerr << x; }
    void print(unsigned short int x) { cerr << x; }
    void print(signed int x) { cerr << x; }
    void print(unsigned int x) { cerr << x; }
    void print(signed long int x) { cerr << x; }
    void print(unsigned long int x) { cerr << x; }
    void print(signed long long int x) { cerr << x; }
    void print(unsigned long long int x) { cerr << x; }
    void print(float x) { cerr << x; }
    void print(double x) { cerr << x; }
    void print(long double x) { cerr << x; }
    void print(string x) { cerr << '\"' << x << '\"'; }
    template <size_t N>
    void print(bitset<N> x) { cerr << x; }
    void print(vector<bool> x)
    {
        /* vector<bool> doesn't work in general iteration template because of rvalue problems */
        int f = 0;
        cerr << '{';
        for (bool i : x)
        {
            cerr << (f++ ? "," : "");
            cerr << (i ? "T" : "F");
        }
        cerr << "}";
    }
    /* Templates Declarations to support nested datatypes */
    template <typename T>
    void print(T x);
    template <typename T>
    void print(vector<vector<T>> mat);
    template <typename T, size_t N>
    void print(T (&arr)[N]);
    template <typename T, size_t N, size_t M>
    void print(T (&mat)[N][M]);
    template <typename... T>
    void print(tuple<T...> x);
    template <typename F, typename S>
    void print(pair<F, S> x);
    template <typename... T>
    void print(priority_queue<T...> pq);
    template <typename T>
    void print(stack<T> st);
    template <typename T>
    void print(queue<T> q);
    /* Template Datatypes Definitions */
    template <typename T>
    void print(T x)
    {
        /* This works for every container that supports range-based loop i.e. vector, set, map, dequeue */
        int f = 0;
        cerr << '{';
        for (auto i : x)
            cerr << (f++ ? "," : ""), print(i);
        cerr << "}";
    }
    template <typename T>
    void print(vector<vector<T>> mat)
    {
        /* Specialized for 2D to format every 1D in new line */
        int f = 0;
        cerr << "{\n";
        for (auto i : mat)
            cerr << (f++ ? ",\n" : ""), print(i);
        cerr << "}\n";
    }
    template <typename T, size_t N>
    void print(T (&arr)[N])
    {
        /* Helps in iterating through arrays and prevent decays */
        int f = 0;
        cerr << '{';
        for (auto &i : arr)
            cerr << (f++ ? "," : ""), print(i);
        cerr << "}";
    }
    template <typename T, size_t N, size_t M>
    void print(T (&mat)[N][M])
    {
        /* Helps in iterating through 2D arrays and prevent decays and also print arrays in new line */
        int f = 0;
        cerr << "{\n";
        for (auto &i : mat)
            cerr << (f++ ? ",\n" : ""), print(i);
        cerr << "}\n";
    }
    template <typename... T>
    void print(tuple<T...> x)
    {
        int f = 0;
        cerr << '(';
        apply([&f](auto... args)
              { ((cerr << (f++ ? "," : ""), print(args)), ...); },
              x);
        cerr << ')';
    }
    template <typename F, typename S>
    void print(pair<F, S> x)
    {
        /* Works for pairs and iterating through maps */
        cerr << '(';
        print(x.first);
        cerr << ',';
        print(x.second);
        cerr << ')';
    }
    template <typename... T>
    void print(priority_queue<T...> pq)
    {
        int f = 0;
        cerr << '{';
        while (!pq.empty())
            cerr << (f++ ? "," : ""), print(pq.top()), pq.pop();
        cerr << "}";
    }
    template <typename T>
    void print(stack<T> st)
    {
        int f = 0;
        cerr << '{';
        while (!st.empty())
            cerr << (f++ ? "," : ""), print(st.top()), st.pop();
        cerr << "}";
    }
    template <typename T>
    void print(queue<T> q)
    {
        int f = 0;
        cerr << '{';
        while (!q.empty())
            cerr << (f++ ? "," : ""), print(q.front()), q.pop();
        cerr << "}";
    }
    /* Printer functions responsible for.... printing beautifully ? */
    template <typename T>
    void printer(const char *name, T &&head)
    {
        /* Base conditions for printer */
        cerr << name << " = ";
        print(head);
        cerr << "]\n";
    }
    template <typename T, typename... V>
    void printer(const char *names, T &&head, V &&...tail)
    {
        /* Using && to capture both lvalues and rvalues */
        int bracket = 0, i = 0;
        while (names[i] != ',' or bracket != 0)
        {
            if (names[i] == '(')
                bracket++;
            else if (names[i] == ')')
                bracket--;
            i++;
        }
        cerr.write(names, i) << " = ";
        print(head);
        cerr << " ||";
        printer(names + i + 1, tail...);
    }
    /* PrinterArr */
    template <typename T>
    void printerArr(const char *name, T arr[], int N)
    {
        cerr << name << " : {";
        for (int i = 0; i < N; i++)
        {
            cerr << (i ? "," : ""), print(arr[i]);
        }
        cerr << "}]\n";
    }
}
/* Before submitting on LeetCode (Not CodeForces), change #ifndef to #ifdef */
#ifndef ONLINE_JUDGE
#define debug(...) std::cerr << __LINE__ << ": [", _DEBUG_UTIL_::printer(#__VA_ARGS__, __VA_ARGS__)
#define debugArr(arr, n) std::cerr << __LINE__ << ": [", _DEBUG_UTIL_::printerArr(#arr, arr, n)
#else
#define debug(...)
#define debugArr(arr, n)
#endif
#endif