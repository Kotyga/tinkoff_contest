#include <iostream>
using namespace std;

const int MAXN = 10000500; 
int n; 
string a[MAXN];
int s = 0;

string mystery_government(string s){
    string t = "";
    for (int i = 0; i < s.length(); i++){
        if (s[i] == 'a' ||  s[i] == 'b' || s[i] == 'c')
            t += '2';
        if (s[i] == 'd' ||  s[i] == 'e' || s[i] == 'f')
            t += '3';
        if (s[i] == 'g' ||  s[i] == 'h' || s[i] == 'i')
            t += '4';
        if (s[i] == 'j' ||  s[i] == 'k' || s[i] == 'l')
            t += '5';
        if (s[i] == 'm' ||  s[i] == 'n' || s[i] == 'o')
            t += '6';
        if (s[i] == 'p' ||  s[i] == 'q' || s[i] == 'r' || s[i] == 's')
            t += '7';
        if (s[i] == 't' ||  s[i] == 'u' || s[i] == 'v')
            t += '8';
        if (s[i] == 'w' ||  s[i] == 'x' || s[i] == 'y' || s[i] == 'z')
            t += '9';
        
    }
  return t;
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    
    cin >> n; 
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    
    for (int i = 0; i < n; ++i)
        a[i] = mystery_government(a[i]);
    
    
    for (int i=0; i<n; i++) 
      for(int k=n; k>i; k--)
        if(a[i]==a[k])
            s++;
    
    cout << n - s;
    return 0;
}