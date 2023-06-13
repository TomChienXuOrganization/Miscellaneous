/*
Tips:
    1.int? long long?
    2.don't submit wrong answer
    3.figure out logic first, then start writing please
    4.know about the range
    5.check if you have to input t or not
    6.modulo of negative numbers is not a%b, it is a%b + abs(b)
*/

#include <bits/stdc++.h>
using namespace std;

/*
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("O3")
*/

#define print_op(...) ostream& operator<<(ostream& out, const __VA_ARGS__& u)
// DEBUGING TEMPLETE ////////////////////////////////////////////////////////////////////////
#define db(val) "["#val" = "<<(val)<<"] "
#define CONCAT_(x, y) x##y
#define CONCAT(x, y) CONCAT_(x, y)
#ifdef LOCAL_DEBUG
#   define clog cerr << setw(__db_level * 2) << setfill(' ') << "" << setw(0)
#   define DB() debug_block CONCAT(dbbl, __LINE__)
    int __db_level = 0;
    struct debug_block {
        debug_block() { clog << "{" << endl; ++__db_level; }
        ~debug_block() { --__db_level; clog << "}" << endl; }
    };
#else
#   define clog if (0) cerr
#   define DB(...)
#endif

template<class U, class V> print_op(pair<U, V>) {
    return out << "(" << u.first << ", " << u.second << ")";
}
template<class Con, class = decltype(begin(declval<Con>()))>
typename enable_if<!is_same<Con, string>::value, ostream&>::type
operator<<(ostream& out, const Con& con) {
    out << "{";
    for (auto beg = con.begin(), it = beg; it != con.end(); ++it)
        out << (it == beg ? "" : ", ") << *it;
    return out << "}";
}
// ACTUAL SOLUTION START HERE ////////////////////////////////////////////////////////////////

#define LIFESUCKS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pii pair<int,int>
#define MOD 1000000007
#define fi first
#define se second
#define bit(n,i) ((n>>i)&1)
#define valid(i,n) (i>=1&&i<=n)

int main(){
    LIFESUCKS;
//    freopen("TASK.INP","r",stdin);
//    freopen("TASK.OUT","w",stdout);

    return 0;
}

/* stuff you should look for
    * int overflow, array bounds
    * special cases (n=1?)
    * do smth instead of nothing and stay organised
    * WRITE STUFF DOWN
    * DON'T GET STUCK ON ONE APPROACH
*/
