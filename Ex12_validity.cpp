#include<bits/stdc++.h>
using namespace std;

bool isArithmatic(char c){
    if(c == '+'|| c == '-'||c == '*'||c == '/')
        return 1;
    return 0;
}

bool check(string s){
    stack<char> st;
    int length = s.size();
    if(isArithmatic(s[length - 1])) //last operator
        return 0;
    for(int i = 0; i < length - 1; i++){
        //cout << "Current Character: " << s[i] << endl;
        if((isArithmatic(s[i])) && (isArithmatic(s[i + 1]) || s[i + 1] == ')'))// ++, +)
            return 0;
        else if((s[i] == ')' ) && (isalpha(s[i + 1]) ||isdigit(s[i + 1]) || s[i + 1] == '('))// )id,)(
            return 0;
        else if((s[i] == '(') and (s[i + 1] == ')' or isArithmatic(s[i + 1])))// (), (*
            return 0;

            
        if(s[i] == '(') // (((())
            st.push('(');
        else if(s[i] == ')'){  
        if(st.empty())
            return 0; 
        st.pop();
         }
    }
    if(s[length - 1] == '(')
            st.push('(');
        else if(s[length - 1] == ')') {
            if(st.empty())
            return 0;
            st.pop();
        }  
        
    return 1;

}
int main(){
    string s;
    while(1){
       cin>>s;
        if(check(s))
            cout<<"VALID"<<endl;
        else
            cout<<"INVALID"<<endl; 
            
    }
}