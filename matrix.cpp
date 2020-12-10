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
	matrix operator *(const matrix&P)
	{
		assert(C == P.R);
		matrix <T> MT(R, P.C);
		for (int i = 0;i < R; ++i) {
			for (int j = 0;j < P.C; ++j) {
				T sum = 0;
				for (int it = 0; it < C; ++it) {
					sum += (V[i][it] * P[it][j]);
				}
				MT[i][j] = sum;
			}
		}
		return MT;
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
			matrix<int> M1(4, 4,2), M2(4,4, 3);
			cout << (M1 * M2);
			return 0;
}
