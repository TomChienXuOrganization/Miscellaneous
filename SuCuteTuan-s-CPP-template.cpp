//#include <Depression>
#include <bits/stdc++.h>
//#include <algorithm>

#define LIFESUCKS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#pragma GCC optimize("O3")
#pragma GCC optimize("O1")
#pragma GCC optimize("O1")
#pragma GCC target("avx2")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx")
#pragma GCC optimize(3)
#pragma GCC optimize("Ofast")
#pragma GCC optimize("inline")
#pragma GCC optimize("-fgcse")
#pragma GCC optimize("-fgcse-lm")
#pragma GCC optimize("-fipa-sra")
#pragma GCC optimize("-ftree-pre")
#pragma GCC optimize("-ftree-vrp")
#pragma GCC optimize("-fpeephole2")
#pragma GCC optimize("-ffast-math")
#pragma GCC optimize("-fsched-spec")
#pragma GCC optimize("-falign-jumps")
#pragma GCC optimize("-falign-loops")
#pragma GCC optimize("-falign-labels")
#pragma GCC optimize("-fdevirtualize")
#pragma GCC optimize("-fcaller-saves")
#pragma GCC optimize("-fcrossjumping")
#pragma GCC optimize("-fthread-jumps")
#pragma GCC optimize("-freorder-blocks")
#pragma GCC optimize("-fschedule-insns")
#pragma GCC optimize("inline-functions")
#pragma GCC optimize("-ftree-tail-merge")
#pragma GCC optimize("-fschedule-insns2")
#pragma GCC optimize("-fstrict-aliasing")
#pragma GCC optimize("-falign-functions")
#pragma GCC optimize("-fcse-follow-jumps")
#pragma GCC optimize("-fsched-interblock")
#pragma GCC optimize("-fpartial-inlining")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("-freorder-functions")
#pragma GCC optimize("-findirect-inlining")
#pragma GCC optimize("-fhoist-adjacent-loads")
#pragma GCC optimize("-frerun-cse-after-loop")
#pragma GCC optimize("inline-small-functions")
#pragma GCC optimize("-finline-small-functions")
#pragma GCC optimize("-ftree-switch-conversion")
#pragma GCC optimize("-foptimize-sibling-calls")
#pragma GCC optimize("-fexpensive-optimizations")
#pragma GCC optimize("inline-functions-called-once")
#pragma GCC optimize("-fdelete-null-pointer-checks")
#pragma GCC target("avx,avx2,sse,sse2,sse3,ssse3,sse4,sse4.1,sse4.2,mmx,abm")

#define ll long long
#define ld long double
#define fl float
#define db double
#define ull unsigned long long
#define str string
#define bb bool
#define cs const
#define ar array
#define ch char

#define pp pair
#define pll pair<ll,ll>
#define psl pair<str,ll>
#define pl pair<ch,ll>
#define plb pair<ll,bb>
#define pcb pair<ch,bb>

#define mll map<ll,ll>
#define msl map<str,ll>
#define mcl map<ch,ll>
#define fi first
#define se second

#define vll vt<ll>
#define vt vector
#define pb push_back

#define st stack
#define stl stack<ll>
#define p(x) push(x)

#define pqll priority_queue<ll>

#define qll queue<ll>

#define sll set<ll>
#define is(x) insert(x)
#define fd(x) find(x)

#define skip continue;
#define stop return 0;
#define ts(s) to_string(s)
#define LoveOpen freopen
#define SuKhongCopCode int main()

#define lb(a,n,x,k) lower_bound(a+x,a+x+n,k)
#define ub(a,n,x,k) upper_bound(a+x,a+x+n,k)

#define f1( b ) for(ll i = 1 ; i <= b ; i++ )
#define f2( b ) for(ll i = b ; i > 0; i-- )
#define fa(s) for ( auto i:s )
#define fw( i, b ) for(ll i = 1 ; i <= b ; i++ )
#define fe(i, b ) for(ll i = b ; i > 0; i-- )
#define fu(i , a , b) for(ll i = a ; i <= b ; i++ )
#define fd(i , b , a) for(ll i = b ; i >= a ; i-- )
#define fwu( i, a, b, x ) for( ll i = a; i <= b; i += x)
#define fed( i, a, b, x ) for( ll i = b; i  >= a; i -= x)
#define ssu(a,n,x) sort(a+x,a+x+n);
#define ssd(a,n,x) sort(a+x,a+x+n,greater<ll>());
#define stu(s) sort(s.begin(), s.end());
#define std(s) sort(s.begin(), s.end(), greater<ch>());

//#define I'm-Ok My-Life-Is-Sucks.I-Just-Wanna-Die

using namespace std;

mt19937_64 rd(chrono::high_resolution_clock::now().time_since_epoch().count());

template < typename T > T MAX ( T &x, T &y ) {if ( x > y ) return x;return y;}
template < typename T > T MIN ( T x, T y ) { if ( &x < &y ) return x;return y; }
template < typename T > T gcd (T a, T b) { T r; while ( b != 0 ) { r = a % b; a = b; b = r; } return a; }
template < typename T> T lcm ( T a, T b ) { return a / gcd(a, b) * b; }
template < typename T> T sqr ( T x)  { return x * x; }

cs ld PI = 3.1415926535897932384626433832795;
cs ll MOD = 1e9+7;
cs ll M = 1e6+7;
cs ll N = 1e3+7;
cs ll Max = 1e12-1;
cs ll Min = -1e12-1;
cs ll Days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
cs str Months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

ll n,m,x,k,a[M],q,cr,sad,Tree[4*M],Dp[M];
str s;
bb ST;

//  ヾ(•ω•`)o
// [K-Su?Minh]
//void Yeu(GTD) {while(true)cout<<"I-Love-You~NLAT"<<'\n';}

void MyINP () {

}

bb MyCheck ( ch x, ch y ) {

}

void DPS( ll u ) {

}

void MySol () {

}

void MyAns () {



}

void SNT () {

    ll Prime[M];
    Prime[0] = 1;
    Prime[1] = 1;

    fu ( i, 2, M )
        if ( !Prime[i] )
            fwu ( j, i*i, M , i ) Prime[j] = 1;

}

ll Rand ( ll l, ll h ) {
    assert(l <= h);
    return l + rand() * 1LL * rand() % (h - l + 1);
}

str MyPlus ( str s, str t ) {
    ll cr;
    if ( s.size() < t.size() ) swap ( s,t );

    reverse ( s.begin(), s.end() );
    reverse ( t.begin(), t.end() );
    ll gf = s.size() - t.size();
    if ( gf ) f1 ( gf ) t += '0';
    str su;
    fu ( i, 0, s.size() - 1)
    {
        ll x = ( t[i] - '0' ) + ( s[i] - '0' ) + cr;
        str u = ts ( x );
        if ( x >= 10 ) su += u[1];
        else su += u[0];
        cr = x >= 10;
    }
    if ( cr == 1 ) su += '1';
    reverse ( su.begin(), su.end() );
    return su;
}

void SegmentTreeMax ( ll id, ll l, ll r , ll a[] ) {
    if ( l == r ) {
        Tree[id] = a[l];
        return;
    }

    ll mid = l + ( r - l  ) / 2;

    SegmentTreeMax( id*2, l, mid, a );
    SegmentTreeMax( id*2+1, mid+1, r, a );

    Tree[id] = max ( Tree[id*2], Tree[id*2+1]);
}

void UpdateSegmentTreeMax ( ll id, ll l, ll r, ll u, ll v, ll x, ll a[] ) {
    if ( u > r || v < l ) return;

    if ( l == r ) {
        Tree[id] += x;
        return;
    }

    ll mid = l + ( r - l ) / 2;

    UpdateSegmentTreeMax( id*2, l, mid, u, v, x, a);
    UpdateSegmentTreeMax( id*2+1, mid+1, r, u, v, x, a );
    Tree[id] = max ( Tree[id*2], Tree[id*2+1]);

}

int64_t AnsSegmentTreeMax ( ll id, ll l, ll r, ll u, ll v, ll a[] ) {
    if ( u > r || v < l || l > r ) return Min;

    if ( l == r ) return Tree[id];

    ll mid = l + ( r - l ) / 2;

    return max ( AnsSegmentTreeMax( id*2, l, mid, u, v, a ), AnsSegmentTreeMax( id*2+1, mid+1, r, u, v, a ) );

}

SuKhongCopCode {

    // sin-1 ( v2 / 2 ) = 30°

    LIFESUCKS

    LoveOpen("1.INP","r",stdin);
    LoveOpen("1.OUT","w",stdout);
     // I Wanna Get Out This World!

    MyINP();
    MySol();
    MyAns();

    // Su So Cute


    ST = 1;

    [=] ( cs bb tt ) {




    } ( ST );





    [] ( ) -> ll {
            cout << Rand( 1, M );
        };
































    // What Do You Think ?



















































    // Why You Cry ?






















    // People-Are-Terrible


    return 0;
    //return The-Lie;
    //return The-Normal-Life
}



/** /\_/\
    (= ._.)
    / >🍵 \>🍮
  /_______________________________
 / Subscribe oR Die UwU /
/==============================/

// I Love This Life But This Life Does not Like Me //

*   ( •̀ ω •́ )✧
*  [K-Su?Minh]
*     UwU
*/
