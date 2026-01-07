#include <bits/stdc++.h>
using namespace std;
int n;
void abc(){
    for(int i = 0; i < n; i++) cout << "abc";
    cout << '\n';
}
void acb(){
    for(int i = 0; i < n; i++) cout << "acb"; //acbacb , aa, bb, cc, ca, ab, bc //ba,cb,ac
    cout << '\n';
}
void bac(){
    for(int i = 0; i < n; i++) cout << "bac";
    cout << '\n';
}
void aaccbb(){
    for(int i = 0; i < n; i++) cout << "a";
    for(int i = 0; i < n; i++) cout << "c";
    for(int i = 0; i < n; i++) cout << "b";
    cout << '\n';
}
void bbaacc(){
    for(int i = 0; i < n; i++) cout << "b";
    for(int i = 0; i < n; i++) cout << "a";
    for(int i = 0; i < n; i++) cout << "c";
    cout << '\n';
}
void ccbbaa(){
    for(int i = 0; i < n; i++) cout << "c";
    for(int i = 0; i < n; i++) cout << "b";
    for(int i = 0; i < n; i++) cout << "a";
    cout << '\n';
}
void bbccaa(){
    for(int i = 0; i < n; i++) cout << "b";
    for(int i = 0; i < n; i++) cout << "c";
    for(int i = 0; i < n; i++) cout << "a";
    cout << '\n';
}
void ccaabb(){
    for(int i = 0; i < n; i++) cout << "c";
    for(int i = 0; i < n; i++) cout << "a";
    for(int i = 0; i < n; i++) cout << "b";
    cout << '\n';
}
void aabbcc(){
    for(int i = 0; i < n; i++) cout << "a";
    for(int i = 0; i < n; i++) cout << "b";
    for(int i = 0; i < n; i++) cout << "c";
    cout << '\n';
}

void bcaa(){
    for(int i = 0; i < n; i++) cout << "bc";
    for(int i = 0; i < n; i++) cout << "a";
    cout << '\n';
}
void cbaa(){
    for(int i = 0; i < n; i++) cout << "cb";
    for(int i = 0; i < n; i++) cout << "a";
    cout << '\n';
}
void abcc(){
    for(int i = 0; i < n; i++) cout << "ab";
    for(int i = 0; i < n; i++) cout << "c";
    cout << '\n';
}
void bacc(){
    for(int i = 0; i < n; i++) cout << "ba";
    for(int i = 0; i < n; i++) cout << "c";
    cout << '\n';
}
void acbb(){
    for(int i = 0; i < n; i++) cout << "ac";
    for(int i = 0; i < n; i++) cout << "b";
    cout << '\n';
}
void cabb(){
    for(int i = 0; i < n; i++) cout << "ca";
    for(int i = 0; i < n; i++) cout << "b";
    cout << '\n';
}

int main(){
    cin >> n;
    string s, t; cin >> s >> t;
    cout << "YES\n";
    if(s == "aa"){
        if(t == "aa" || t == "bb" || t == "cc") abc();
        else if(t == "ab" || t == "bc" || t == "ca") acb();
        else abc();
    } else if(s == "ab"){
        if(t == "aa" || t == "bb" || t == "cc" || t == "ca" || t == "ab" || t == "bc") acb();
        else if(t == "ba") aaccbb();
        else if(t == "cb") bbaacc();
        else ccbbaa();
    } else if(s == "ac"){
        if(t == "aa" || t == "ac" || t == "ba" || t == "bb" || t == "cb" || t == "cc") abc();
        else if(t == "ab") bbccaa();
        else if(t == "bc") ccaabb();
        else aabbcc();
    } else if(s == "ba"){
        if(t == "ba" || t == "aa" || t == "bb" || t == "cc" || t == "ac" || t == "cb") abc();
        else if(t == "ca" || "ab") aaccbb();
        else aaccbb();
    } else if(s == "bb"){
        if(t == "ba" || t == "aa" || t == "bb" || t == "cc" || t == "ac" || t == "cb") abc();
        else if(t == "ab") bcaa();
        else if(t == "bc") bacc();
        else cbaa();
    } else if(s == "bc"){
        if(t == "ac") ccaabb();
        else if(t == "cb") bacc();
        else if(t == "ba") aaccbb();
        else acb();
    } else if(s == "ca"){
        if(t == "ba") aaccbb();
        else if(t == "ac" || t == "cb") aabbcc();
        else bac();
    } else if(s == "cb"){
        if(t == "ab" || t == "bc" || t == "ca") bbaacc();
        else abc();
    } else if(s == "cc"){
        if(t == "ab" || t == "bc" || t == "ca") acb();
        else abc();
    }
    return 0;
}