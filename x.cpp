// BEGIN AUTOFOLD {{{
	/*NOSUCHFILE
	cat
	// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars
	// ayy lamo
	*/
	#include <bits/stdc++.h>
	using namespace std;
	namespace gbd_ns {
		template<typename C>
		struct is_iterable {
			template<class T> static long check(...);
			template<class T> static char check(int,
				typename T::const_iterator = C().end());
			enum {
				value = sizeof(check<C>(0)) == sizeof(char),
				neg_value = sizeof(check<C>(0)) != sizeof(char)
			};
		};
		template<bool B,typename T=void> using eit=typename enable_if<B,T>::type;
		template<class T> struct _gbd3C;
		template<class T> ostream &_gbd3(ostream &os,const T &x) {
			return _gbd3C<T>::call(os,x);
		}
		template<> ostream &_gbd3(ostream &os,const string &x) {
			return os<<'"'<<x<<'"';
		}
		template<> ostream &_gbd3(ostream &os,char *const &x) {
			return os<<'"'<<x<<'"';
		}
		template<class T> ostream &_gbd35(ostream &os,const T &x) {
			return _gbd3(os,x);  // why??
		}
		template<class A,class B>
		ostream &_gbd4(ostream &os,const pair<A,B> &p) {
			_gbd3(os<<'(',p.first);
			_gbd3(os<<',',p.second);
			return os<<')';
		}
		template<class T> ostream &_gbd4(ostream &os,const T &x) {
			return os<<x;
		}
		template<class T> struct _gbd3C {
			template<class U=T>
			static ostream &call(ostream &os,eit<is_iterable<U>::value,const T> &V) {
				os<<"{";
				bool ff=0;
				for(const auto &E:V) _gbd35<decltype(E)>(ff?os<<",":os,E), ff=1;
				return os<<"}";
			}
			template<class U=T>
			static ostream &call(ostream &os,eit<is_iterable<U>::neg_value,const T> &x) {
				return _gbd4(os,x);
			}
		};
		template<class T,typename... Args> ostream &_gbd2(ostream &os,bool,vector<string>::iterator nm,const T &x,Args&&... args);
		ostream &_gbd2(ostream &os,bool,vector<string>::iterator) { return os; }
		template<typename... Args>
		ostream &_gbd2(ostream &os,bool fi,vector<string>::iterator nm,const char *x,Args&&... args) {
			return _gbd2(os<<(fi?"":"  ")<<x,0,nm+1,args...);
		}
		template<class T,typename... Args>
		ostream &_gbd2(ostream &os,bool fi,vector<string>::iterator nm,const T &x,Args&&... args) {
			return _gbd2(_gbd3<T>(os<<(fi?"":"  ")<<*nm<<"=",x),0,nm+1,args...);
		}
		vector<string> split(string s) {
			vector<string> Z;
			string z="";
			s+=',';
			int dep=0;
			for(char c:s) {
				if(c==',' && !dep) Z.push_back(z),z="";
				else z+=c;
				if(c=='(') ++dep;
				if(c==')') --dep;
			}
			return Z;
		}
		template<typename... Args> ostream &_gbd1(ostream &os,const string &nm,Args&&... args) {
			return _gbd2(os,1,split(nm).begin(),args...);
		}
		template<typename... Args> string _gbd1(const string &nm,Args&&... args) {
			ostringstream oss;
			_gbd2(oss,1,split(nm).begin(),args...);
			return oss.str();
		}
	}
	#define _gbd(...) gbd_ns::_gbd1(cerr<<"L"<<__LINE__<<":  ",#__VA_ARGS__,__VA_ARGS__)<<endl
	#define fmt(...) gbd_ns::_gbd1(#__VA_ARGS__,__VA_ARGS__)
	#ifdef ARST
	#define QQ
	#else
	#define OJ
	#endif
	template<class Fun> struct _y_combinator_result {
		Fun _fun;
		template<class T> explicit _y_combinator_result(T &&fun) : _fun(std::forward<T>(fun)) {}
		template<typename... Args> decltype(auto) operator()(Args &&... args) {
			return _fun(std::ref(*this),std::forward<Args>(args)...);
		}
	};
	template<class Fun> decltype(auto) FIX(Fun &&fun) {
		return _y_combinator_result<std::decay_t<Fun>>(std::forward<Fun>(fun));
	}
	inline void nop() {}
	#define sz(x) (int((x).size()))
	#define eprintf(...) fprintf(stderr,__VA_ARGS__)
	#define fi first
	#define se second
	#define pb push_back
	#define OMAP(S,T) tree<S,T,less<S>,rb_tree_tag,tree_order_statistics_node_update>
	#define OSET(S) OMAP(S,null_type)
	#define all(v) begin(v),end(v)
	const int e3=1000;
	const int e6=e3*e3;
	const int e9=e6*e3;
	const long double tau=2*acosl(-1);
// END AUTOFOLD }}}
// #include <bits/extc++.h>
// using namespace __gnu_pbds;
#define dbg _gbd
// #define dbg(...) cerr
typedef __uint128_t ulll;
typedef __int128_t lll;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld; //CARE
typedef complex<ld> pt;
const ld eps=(ld)1e-8;
const int inf=e9+99;
const ll linf=1LL*e9*e9+99;
const int P=e9+7;











int32_t main() { /* CURSOR START */
	
}
