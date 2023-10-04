#include <bits/stdc++.h>
using namespace std;
//s = sabunkeramaskekerara 
//t = kera 
//s.find(t) = 5
//t.length() = 4
//sabunmaskekerara 
//s.find(t) = 10
//t.length() = 4 
//sabunmaskera 
//s.find(t) = 7
//t.length() = 4 
// sabunmas
int main(){
    string s;
    cin >> s;
    string t;
    cin >> t;
    while (s.find(t) != -1){
        s.erase(s.find(t), t.length());
    }
    cout << s << endl;
    return 0;
}
