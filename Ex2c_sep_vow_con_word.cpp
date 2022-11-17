#include<bits/stdc++.h>
using namespace std;

set<string> words;

bool isVowel(char x){
     if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
        return true;
    return false;
}

void separateWord(string s){
    string word = "";
    for(auto letter : s){
        if(letter == ' '){
            words.insert(word);
            word = "";
        }
        else{
            word += letter;
        } 
    }
    words.insert(word);
}
int main(){
    string s;
    freopen("input2.txt", "r", stdin);
    getline(cin, s);

    separateWord(s);
    cout<<"Words start with vowel are : "<<endl;

    for(auto x : words){
        if(isVowel(x[0])){
            cout<<x<<' ';
        }
    }
    cout<<endl;
    cout<<"Words start with consonant are : "<<endl;

    for(auto x : words){
        if(isalpha(x[0]) && !isVowel(x[0])){
            cout<<x<<' ';
        }
    }
    cout<<endl;

}