#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    freopen("input1a.txt", "r", stdin);
    getline(cin, s);
    char letter[100], digit[100], character[100];
    int j = 0, k = 0, m = 0;
    int l = s.size();
    for(int i = 0; i < l; i++){
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <='Z'))
            letter[j++] = s[i];
        else if(s[i] >= '0' && s[i] <= '9')
            digit[k++] = s[i];
        else 
            if(s[i] != ' ')
                character[m++] = s[i];
    }
    cout<<"Entered string is : "<< s << endl;
    cout<<"Letters are : "<<endl;
    for(int i = 0; i < j; i++)
        cout<<letter[i]<<' ';
        cout<<endl;

    cout<<"Digits are : "<<endl;
    for(int i = 0; i < k; i++)
        cout<<digit[i]<<' ';
        cout<<endl;

    cout<<"Characters are : "<<endl;
    for(int i = 0; i < m; i++)
        cout<<character[i]<<' ';
        cout<<endl;
}