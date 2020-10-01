#include <bits/stdc++.h>
#include <string.h>
#include <math.h>
using namespace std;

typedef long long ll;

const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;

bool composite[1000007] = {false};
void seive(ll x)
{
    composite[0] = true;
    composite[1] = true;
    for (ll i = 2; i <= x; i++)
    {
        if (!composite[i])
        {
            for (ll j = 2 * i; j <= x; j += i)
            {
                composite[j] = true;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    seive(n);
    return 0;
}