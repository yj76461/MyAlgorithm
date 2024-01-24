#include <queue>
#include <vector>

#include <stack>
#include <cmath>
#include <algorithm>
#include <unordered_set>
#include <map>
#include <sstream>
#include <string>
#include <iostream>
#include <list>

using namespace std;

int T, N, M, K, E, L, v1, v2, W, H, S, R, C, P, D;
int mx = 0;
int mn = 999999999;
long long answer = 0;
int dir[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
//int dir2[4][2] = {{1, 1}, {-1, 1}, {-1, 1}, {-1, -1}};




int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int res = min(min(c - a, a), min(d - b, b));
	cout << res << '\n';
	
	return 0;
	
}

