#include<bits/stdc++.h>
using namespace std;

int main()
{
    /// Declaration of set of integers
    set<int> s = { 1, 1, 2, 1, 3 };
 
    /// Printing size and elements
    cout << s.size() << endl;
    for ( auto u : s ) cout << u << " "; /// 1 2 3
    cout << endl;
 
    set<int>:: iterator it;
    for ( it = s.begin(); it != s.end(); it++ ) cout << *it << " "; /// 1 2 3
    cout << endl;
 
    /// clearing and checking is empty set
    s.clear();
    cout << s.empty() << endl; /// 1
 
    /// inserting in set
    s.insert ( 1 );
    s.insert ( 1 );
    s.insert ( 1 );
    s.insert ( 2 );
    s.insert ( 1 );
    s.insert ( 3 );
 
    cout << s.size() << endl; /// 3
    for ( auto u : s ) cout << u << " "; /// 1 2 3
    cout << endl;
 
    /// checking is specific element is in a set
    cout << s.count ( 2 ) << endl; /// 1
    cout << s.count ( 4 ) << endl; /// 0
 
 
    /// Front element in set
    cout << *s.begin() << endl; /// 1
 
    /// Last element in set
    cout << *(--s.end()) << endl; /// 3
    cout << *s.rbegin() << endl; /// 3
 
 
    /// Erase an element;
 
    s = { 1, 2, 3, 4, 5, 6 };
 
    s.erase ( 2 );
    cout << s.size() << endl; /// 5
    for ( auto u : s ) cout << u << " "; /// 1 3 4 5 6
    cout << endl;
 
    s.erase ( 10 );
    cout << s.size() << endl; /// 5
    for ( auto u : s ) cout << u << " "; /// 1 3 4 5 6
    cout << endl;
 
 
    /// Erasing front element in set
 
    s = { 1, 2, 3, 4, 5, 6 };
 
    s.erase ( s.begin() );
    cout << s.size() << endl; /// 5
    for ( auto u : s ) cout << u << " "; /// 2 3 4 5 6
    cout << endl;
 
    /// Erasing back element in set
 
    s = { 1, 2, 3, 4, 5, 6 };
 
    s.erase ( --s.end() );
    cout << s.size() << endl; /// 5
    for ( auto u : s ) cout << u << " "; /// 1 2 3 4 5
    cout << endl;
 
 
    /// set of pair
    set<pair<int, int>> s1;
 
    s1.insert ( { 1, 2 } );
    s1.insert ( { 1, 2 } );
    s1.insert ( { 4, 2 } );
    s1.insert ( { 4, 3 } );
    s1.insert ( { 2, 2 } );
    s1.insert ( { 2, 1 } );
 
    /**
 
    Output :
 
    5
    1 2
    2 1
    2 2
    4 2
    4 3
 
    */
 
    cout << s1.size() << endl;
    for ( auto u : s1 ) cout << u.first << " " << u.second << endl;
 
    /// Set of string
 
    set<string> s2;
 
    s2.insert ( "momo" );
    s2.insert ( "momo" );
    s2.insert ( "prety" );
    s2.insert ( "prety" );
    s2.insert ( "shahriar" );
    s2.insert ( "nobel" );
    s2.insert ( "sharif" );
    s2.insert ( "proma" );
 
    cout << s2.size() << endl;
    for ( auto u : s2 ) cout << u << endl;
 
    /**
 
    Output :
 
    6
    momo
    nobel
    prety
    proma
    shahriar
    sharif
 
    */
 
    /// set in discanding order
    set<int, greater<int>> s3 = {3, 4, 1, 2};
    for ( auto u : s3 ) cout << u << " "; /// 4 3 2 1
    cout << endl;
 
 
    set<string, greater<string>> s4;
 
    s4.insert ( "momo" );
    s4.insert ( "momo" );
    s4.insert ( "prety" );
    s4.insert ( "prety" );
    s4.insert ( "shahriar" );
    s4.insert ( "nobel" );
    s4.insert ( "sharif" );
    s4.insert ( "proma" );
 
    cout << s4.size() << endl;
    for ( auto u : s4 ) cout << u << endl;
 
    /**
    Output :
 
    6
    sharif
    shahriar
    proma
    prety
    nobel
    momo
 
    */
 
    set<pair<int, int>, greater<pair<int,int>>> s5;
 
    s5.insert ( { 1, 2 } );
    s5.insert ( { 1, 2 } );
    s5.insert ( { 4, 2 } );
    s5.insert ( { 4, 3 } );
    s5.insert ( { 2, 2 } );
    s5.insert ( { 2, 1 } );
 
 
    cout << s5.size() << endl;
    for ( auto u : s5 ) cout << u.first << " " << u.second << endl;
 
    /**
 
    Output :
    5
    4 3
    4 2
    2 2
    2 1
    1 2
 
    */
       return 0;
}
