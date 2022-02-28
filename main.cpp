#include <bits/stdc++.h>
#pragma GCC optimize("-O3")
#pragma GCC optimize("unroll-loops")
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ll long long
#define pll pair<ll,ll>
#define pii pair<int,int>
#define all(v) v.begin(),v.end()

using namespace std;

long double tim;
ll n, m, R;
ll a[100005];
map<vector<int>, int> cm;

void rec(int h) {
    if (h==n+1) {
        long double sm1 = 0, sm2 = 0, sm3 = 0;
        for (int i = 1; i <= n/2; i++) {
            sm1 += a[i];
            sm2 += a[n/2+i];
            sm3 += a[i] * a[n/2+i];
        }
        if (sm1 * sm2 != n/2 * sm3) {
            for (int i = 1; i <= n; i++) {
                cout << a[i] << " ";
            }
            cout << "\n";
            system("pause\n");
        }
        return;
    }
    for (int i = 2; i <= 10; i++) if (h==n/2+1 || i!=a[h-1]) {
        a[h] = i;
        rec(h+1);
    }
}

void solve() {
    cin >> n;
    for (int i = 1; i <= n; i++) a[i]=i;
    rec(1);
}

int main() {
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    int t = 1;
    while (t--) {
        solve();
    }
    cerr << "Time: " << (long double)(clock()-tim)/CLOCKS_PER_SEC << "\n";
    return 0;
}

/*
 450000
 42 76 85
 1
 500000
 4 53 86313
 7 86532 12
 2 42756 4315
 */