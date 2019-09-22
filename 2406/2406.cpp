#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
using namespace std;

int main(){_
    int t;
    stack <char> p_abre;
    stack <char> p_fecha;
    cin >> t;
    while(t--){
        string a;
        cin >> a;
        for (auto i: a){
            if (i == '(' || i == '[' || i == '{'){
                p_abre.push(i);
            }
            if (i == ')' || i == ']' || i == '}'){
                if (!p_abre.empty()) p_abre.pop();
            }
        }

        if (p_abre.empty()) cout << "S" << endl;
        else cout << "N" << endl;
    }
    
    return(0);
}
