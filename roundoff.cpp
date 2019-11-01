#include <bits/stdc++.h>

using namespace std;

int main(){
    float f;
    int r;
    long p;
    cin>>f>>r;
    p=pow(10,r);
    //to round till rth decimal add 0.__r_0s__5 and truncate
    //eg:round to 1 decimal place 1.23 + 0.05=1.28 after truncate=1.2 and thus for 1.26 +0.05=1.31 truncate = 1.3
    //it works well when required to have trailing zeros in output as string
    float temp=5.0/(p*10);
    f+=temp;
    cout<<"without truncate "<<f<<endl;
    int t=f*(p);
    f=float(t)/float(p);
    cout<<"with truncate "<<f;
}
