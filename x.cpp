// BEGIN AUTOFOLD {{{
/*NOSUCHFILE
  cat
  // sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars// sixteen chars
  // ayy lamo
  */
// #include <bits/stdc++.h>
#include <bits/extc++.h>
using namespace std;
namespace gbd_ns {
	template<typename C>
	struct is_iterable {
		template<class T> static long check(...);
		template<class T> static char check(int,typename T::const_iterator = C().end());
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
	template<class T,size_t N> struct _gbd4_tupleC {
		static void call(ostream &os,const T &t) {
			_gbd4_tupleC<T,N-1>::call(os,t);
			os<<','<<get<N-1>(t);
		}
	};
	template<class T> struct _gbd4_tupleC<T,1> {
		static void call(ostream &os,const T &t) {
			os<<get<0>(t);
		}
	};
	template<typename... Types>
	ostream &_gbd4(ostream &os,const tuple<Types...> &t) {
		os<<'(';
		_gbd4_tupleC<tuple<Types...>,sizeof...(Types)>::call(os,t);
		return os<<')';
	}
	template<>
	ostream &_gbd4(ostream &os,const tuple<> &t) { (void)t; return os<<"()"; }
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
#define _gbd(...) gbd_ns::_gbd1(cerr<<__FILE__<<":"<<__LINE__<<":  ",#__VA_ARGS__,__VA_ARGS__)<<endl
#define fmt(...) gbd_ns::_gbd1(#__VA_ARGS__,__VA_ARGS__)
#ifdef ARST
#define JO 1
#define OJ 0
#else
#define JO 0
#define OJ 1
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
#define eb emplace_back
template<class S,class T> using omap = __gnu_pbds::tree<S,T,less<S>,__gnu_pbds::rb_tree_tag,__gnu_pbds::tree_order_statistics_node_update>;
template<class T> using oset = omap<T,__gnu_pbds::null_type>;
template<class T> using rope = __gnu_cxx::rope<T>;
#define all(v) begin(v),end(v)
#define sortu(v) (sort(all(v)), (v).resize(unique(all(v))-begin(v)))
const int e0=1, e1=10, e2=100, e3=1000;
const int e4=10*e3, e5=100*e3, e6=1000*e3;
const int e7=10*e6, e8=100*e6, e9=1000*e6;
const long double tau=2*acosl(-1);
typedef __uint128_t ulll;
typedef __int128_t lll;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld; //CARE
const ld eps=(ld)1e-8;
const int inf=e9+99;
const ll linf=1LL*e9*e9+99;
#if OJ
#define dbg(...) cerr
#else
#define dbg _gbd
#endif
// END AUTOFOLD }}}
const int P=e9+7;










int32_t main() { /* CURSOR START */
	
}
