/* 
Rewrite an arithmetic statement as a sequence of statements that do not use parenthesis.

*/

#include <bits/stdc++.h>
using namespace std;

stack<string> st;
int c=1;

void func1(string s){
    string ans="";
    if(s == ")"){
        while(st.top() != "("){
            ans = st.top() + ans;
            st.pop();
        }
        st.pop();
        string new_ele="z"+to_string(c);
        st.push(new_ele);
        c++;
        cout<<new_ele<<"="<<ans<<endl;
    }
    
    else if(s == ";"){
        while(!st.empty()){
            ans = st.top() + ans;
            st.pop();
        }
        string new_ele="z";
        c++;
        cout<<ans<<endl;
    }
    else
        st.push(s);
    return;
}


int main() {
    string s,temp="";
    cin>>s;
    for(int i=0;i<s.length();i++){
        func1(temp+s[i]);
    }
	return 0;
}
