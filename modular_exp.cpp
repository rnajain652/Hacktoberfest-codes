#include <bits/stdc++.h>
#include <string.h>
#include <math.h>
using namespace std;

typedef long long ll;

const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;

ll power(ll x_f, ll y_f, ll m_f)
{
    ll res_f = 1;

    x_f = x_f % m_f;
    while (y_f)
    {
        if (y_f & 1)
            res_f = (res_f * x_f) % m_f;
        y_f = y_f >> 1;
        x_f = (x_f * x_f) % m_f;
    }
    return res_f;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, m;
    cin >> n >> m;
    cout << power(n, m, MOD) << endl; //n to the power m with MOD modulo
    return 0;
}