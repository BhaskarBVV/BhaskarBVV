#include <bits/stdc++.h>
#define si 10000000
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define th 3000
#define limit 1e9 + 7
#define ll long long int
#define pii pair<ll, ll>
#define vi vector<ll>
#define pb push_back
#define mkp make_pair
#define pf push_front
#define pob pop_back
#define pof pop_front
#define QUICK ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;
// void sieve(long long int arr[si])
// {
//     long long int x, y;
//     for (x = 3; x < si; x += 2)
//         arr[x] = 1;
//     for (x = 3; x < si; x += 2)
//         for (y = x * x; y < si; y += x)
//             arr[y] = 0;
//     arr[2] = 1;
// }
// int is_prime(ll n)
// {
//     long long int i = 3;
//     if (n == 1)
//         return 1;
//     else if (n == 2)
//         return 1;
//     else if (n % 2 == 0)
//         return 0;
//     else
//     {
//         for (i = 3; i <= sqrt(n); i++)
//             if (n % i == 0)
//                 return 0;
//     }
//     return 1;
// }
// int gcd(ll a, ll b)
// {
//     if (a == 0)
//         return b;
//     return gcd(b % a, a);
// }
// int XOOR(int n)
// {
//     if (n % 4 == 0)
//         return n;
//     if (n % 4 == 1)
//         return 1;
//     if (n % 4 == 2)
//         return n + 1;
//     return 0;
// }
// ll pw(ll z)
// {
//     ll x = 1;
//     while (z--)
//         x *= 2;
//     return x;
// }
// string to_binary(int x)
// {
//     string s = "";
//     while (x != 0)
//     {
//         s += ((x % 2) + '0');
//         x /= 2;
//     }
//     return s;
// // }

// string intToStr(int num)
// {
//     ostringstream str1;
//     str1 << num;
//     return str1.str();
// }
// int strToInt(string x)
// {
//     stringstream temp(x);
//     int num = 0;
//     temp >> num;
//     return num;
// }
void solve()
{
}
int main()
{
    QUICK;
    // string s;
    // ll arr[si];
    // sieve(arr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    w(t)
    {
        solve();
        // cout << endl;
    }
}
