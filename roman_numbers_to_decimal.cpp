#include<bits/stdc++.h>
using namespace std;
map<char, int> vals = { {'I', 1}, 
                        {'V', 5}, 
                        {'X', 10}, 
                        {'L', 50}, 
                        {'C', 100}, 
                        {'D', 500}, 
                        {'M', 1000}
                    };

int romanToInt(string s){
    int res = vals[s[s.size() - 1]];
    for (int i = s.size() - 2; i >= 0; i--) {
        if (vals[s[i]] < vals[s[i+1]])
            res -= vals[s[i]];
        else
            res += vals[s[i]];
    }
    return res;
}

int main(){
    string s;
    int T;
    cin>>T;
    while(T--){
        cin>>s;
        cout<<s<<" "<<romanToInt(s)<<endl;
    }
}
