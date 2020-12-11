// ostream overloading
#include "bits/stdc++.h"
using namespace std;

template<typename T> 
ostream &operator << (ostream & out, const vector<T>&V) {
    for (auto &x : V) 
        out << x << " ";
    out << endl;
    return out;
}

template<typename T>
istream& operator >> (istream &in, vector<T>&V) {
    for (auto &x : V)
        in >> x;
    return in;
}

template <typename T,typename U>
ostream& operator << (ostream &out,const pair<T, U>&P) {
    out << P.first <<" "<<P.second << endl;
    return out;
}

template<typename T>
ostream & operator << (ostream& out, const set<T>&ST) {
    for (const auto &x : ST) out << x << " ";
         out << endl;
    return out; 
}

template<typename T>
ostream& operator << (ostream &out, unordered_set<T>&ST) {
    for (const auto &x : ST) out << x <<" ";
        return out;
}

template<typename T,typename U>
ostream &operator <<(ostream &out,const map<T,U>&MP) {
    for (const auto &[x, y] : MP) out << x <<" "<<y <<endl;
        return out;
}

int main ()
{
    vector <int> v(4);
    cin >> v; // 1 2 3 4
    cout << v; // 1 2 3 4
}