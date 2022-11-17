#include<bits/stdc++.h>
using namespace std;

bool isVowel(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
        return true;
    return false;
}

int vowel, consonant;
void countVowelConsonant(string s){
    int l = s.size();
    for(int i = 0; i < l; i++){
        if(isalpha(s[i])){
            if(isVowel(s[i]))
                vowel++;
            else
                consonant++;
        }
    }
}
int main(){
    string s;
    freopen("input2.txt", "r", stdin);
    getline(cin, s);
    cout<<"Entered string is : "<<s<<endl;
    countVowelConsonant(s);
    cout << "No of Vowel : " << vowel << endl;
    cout << "No of Consonant : " << consonant << endl;
}