#include <iostream>
#include <cassert>
#include <cstring>
#include <chrono>
#include <map>
#include <vector>
#include <set>
#include <algorithm>
#include <bitset>
#include <cmath>
#include <queue>
#include <complex>
#include <utility>
#include <cstdlib>
#include <climits>
#include <functional>
#include <random>
#include <stack>
#include <array>
#include <list>
#include <forward_list>
#include <ctime>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
#include <valarray>
#include <iterator>
#include <typeinfo>
#include <new>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>

using ordered_set =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define ll long long int
#define ull unsigned long long int
#define lld long long double
#define fast ios_base::sync_with_stdio(false); cin.tie(0);
#define mp make_pair
#define nl "\n"
#define lb lower_bound
#define up upper_bound
#define srt(x) sort(x.begin(), x.end());
#define rsrt(x) sort(x.rbegin(), x.rend());
#define reverse(x) reverse(x.begin(), x.end());
#define ft first
#define sd second
#define pb push_back
#define eb emplace_back
#define count(x,y) count(x.begin(),x.end(),y)

using pii = pair<int, int>;
using pll = pair<ll, ll>;
const ll MOD = 1000000007;

template <typename T>

T square(T a)
{
    return a * a;
}

template <typename TT>

TT cube(TT a)
{
    return a * a * a;
}

int main()
{
    fast;
    int tt;
    cin >> tt;
    while (tt--)
    {
        string a;
        cin >> a;
        int cnt0 = count(a.begin(), a.end(), '0');
        int cnt1 = count(a.begin(), a.end(), '1');
        if (a.size() == 1)
        {
            cout << 0 << nl;
        }
        else if (a.size() == 2 && cnt0 == cnt1)
        {
            cout << 0 << nl;
        }
        else if (cnt0 == cnt1)
        {
            cout << --cnt0 << nl;
        }
        else
        {
            cout << min(cnt0, cnt1) << nl;
        }
    }
    return 0;
}