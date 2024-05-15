#include <bits/stdc++.h>
#define sz(x) ((int)x.size())
#define int long long
#define fi first
#define se second
#define pii pair<int, int>
#define pb push_back
#define vi vector<int>
#define bit(i, x) ((x >> i) & 1)
#define ALL(x) x.begin(), x.end()
#define REP(i, n) for (int i = 1; i <= n; ++i)
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define FORD(i, a, b) for (int i = a; i >= b; --i)
#define Random(lf, rt) (lf + rand() % (rt - lf + 1))
#define Task "program"

using namespace std;
const int maxn = 2e5 + 7, N = 1e9 + 7, mod = 1e9 + 7;

void ADD(int &x, int y) {
    x += y;
    if (x >= mod) x -= mod;
    if (x < 0) x += mod;
}
void MAXIMIZE(int &x, int y) {
    x = max(x, y);
}
void MINIMIZE(int &x, int y) {
    x = min(x, y);
}

int n;
vi v;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    if (fopen(Task".inp", "r")) {
        freopen(Task".inp", "r", stdin);
        freopen(Task".out", "w", stdout);
    }

    cin >> n;
    REP(i, n) {
        int x; cin >> x;
        v.pb(x);
    }
    sort(ALL(v));
    for (int x : v) cout << x << " ";

    // mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); 
    // cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}