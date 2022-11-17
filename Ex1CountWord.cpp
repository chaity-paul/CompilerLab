#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    freopen("input1a.txt", "r", stdin);
    getline(cin, s);

    int letter = 0, word = 0, digit = 0, character = 0;
    int l = s.size();
    for(int i = 0; i < l; i++){
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <='Z'))
            letter++;
        else if(s[i] >= '0' && s[i] <= '9')
            digit++;
        else if(s[i] == ' ' && isalpha(s[i + 1]))
            word++;
        else 
            if(s[i] != ' ')
                character++;
    }
    cout<<"Entered string is : "<<"\n"<<s<<"\n\n"<<endl;
    printf("Number of words = %d\nNumber of letters = %d\nNumber of digits = %d\nNumber of characters = %d\n", word+1, letter, digit, character);
}