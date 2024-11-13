#include <bits/stdc++.h>
using namespace std;

#define um unordered_map
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define sc static_cast

#define has(a, b) (a.find(b) != a.end())
#define all(x) (x).begin(), (x).end()
#define maxval(t) numeric_limits<t>::max()
#define minval(t) numeric_limits<t>::min()
#define imin(a,b) a = min(a,b)
#define imax(a,b) a = max(a,b)
#define fora(i, n) for(int i = 0; i < n; i++)
#define forb(i, n) for(int i = 1; i <= n; i++)
#define forc(a, b) for(const auto &a : b)
#define ford(i, l, r) for(int i = l; i <= r; i++)
#define fore(i, n) for(int i = n-1; i >= 0; --i)
#define pvec(v) copy(all(v), ostream_iterator<decltype(v)::value_type>(cout, " "))

#define dbgs(x) #x << " = " << x
#define dbgs2(x, y) dbgs(x) << ", " << dbgs(y)
#define dbgs3(x, y, z) dbgs2(x, y) << ", " << dbgs(z)
#define dbgs4(w, x, y, z) dbgs3(w, x, y) << ", " << dbgs(z)

typedef long long ll;
typedef long double ld;

typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vii;
typedef vector<vll> vlll;
typedef um<int,int> umii;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

void display (const vector<vector<int> >& vy) {  
    fora(i, (int) vy.size()) {
        fora(j, (int) vy[i].size()) cout << vy[i][j] << " ";
        cout << endl;
    }
}

ll power(ll a, ll n) {
     if (n == 0) return 1;
     ll x = power(a, floor(n/2));
     if (n & 1) return a*x*x;
     else return x*x;
}

void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}

void printArray(vi arr, int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);   
    
    int t; cin >> t;
    fora(_, t) {
        int n,m; cin >> n >> m;
        vi a(n);
        umii p;
        fora(i, n) cin >> a[i];
        fora(_, m) { int pt; cin >> pt; p[pt-1] = 1;}


        bool s = false;
        // simple bubblesort
        ford(i, 0, n-2) {
            ford(j, 0, n-i-2) {
                if (a[j] > a[j+1]) {
                    if (p.find(j) == p.end()) {cout << "NO" << endl; s = true; break;}
                    //cout << dbgs2(i,j) << endl;
                    swap(&a[j], &a[j+1]);
                }
            }
            if (s) break;
        }
        //printArray(a,n);
        if (!s) cout << "YES" << endl;
    }


    return 0;
}

