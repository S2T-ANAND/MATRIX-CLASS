//matrix class project
#include "bits/stdc++.h"
using namespace std;
template <typename T>
class matrix {
	vector<vector<T>> V;
	public :
	int R = 0,C = 0; 
	matrix(int r, int c,const T &x = 0) {
		R = r; C = c;
		V.assign(R, vector<T>((C), x));
	}
	void input() {
		for (int i = 0; i < R; ++i)
			for (int j = 0; j < C; ++j)
				cin >> V[(i)][(j)];
	}
	void print() {
		for (int i = 0; i < R; ++i,cout << endl)
			for (int j = 0; j < C; ++j)
				cout << V[(i)][(j)] <<" ";
	}
	vector<T>& operator [] (int i) {
		assert(i < R && i >= 0);
		return V[i];
	}
	const vector<T>& operator [](int i) const{
		assert(i >= 0 && i < R);
		return V[i];
	}
	friend ostream& operator << (ostream &out,const matrix<T> &M) {
		for (int i = 0; i < M.R; ++i, out << endl) {
			for (int j = 0; j < M.C; ++j)
				out << M[i][j] <<" ";
		}
		return out;
	}

};
signed main() {
			ios::sync_with_stdio(false); cin.tie(nullptr);
			matrix<string> M(4, 4,"stuti" );
			cout << M;
			return 0;
}
/* check for
    * TLE due to ll, array bounds
    * special cases (n=0,1)
    * DON'T GET STUCK ON ONE APPROACH
*/