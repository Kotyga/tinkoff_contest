#include <iostream>

using namespace std;

const int MAXN = 10000500; 
const int MAXVALUE = -6;
const int MINVALUE = 6;
int n; 
int a[MAXN];

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    
    cin >> n; 
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    
    int maxa = MAXVALUE; 
    for (int i = 0; i < n; ++i)
        if (maxa < a[i]) 
                maxa = a[i];
    int mina = MINVALUE;
    for (int i = 0; i < n; ++i)
        if (mina > a[i]) 
                mina = a[i];
    
    for (int i = 0; i < n; ++i)
        if(a[i] == maxa)
            a[i] = mina;
    cout <<"\n\n";
    for (int i = 0; i < n; ++i)
        cout << a[i] << "\n"; 
    return 0;
}