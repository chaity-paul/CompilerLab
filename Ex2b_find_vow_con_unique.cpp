#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    char vowel[100], consonant[100];
    int distvow[100] = {0};
    int distconst[100] = {0};
    char str[100];
    int j = 0, k = 0;
    freopen("input2.txt", "r", stdin);
    gets(str);
    int len = strlen(str);
    for(int i = 0; i < len; i++){
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U'){
            if(isupper(str[i])){
                if(distvow[str[i] - 'A'] == 0)
                    vowel[j++] = str[i];
                distvow[str[i] - 'A']++;
            }
            if(islower(str[i])){
                if(distvow[str[i] - 'a'] == 0)
                    vowel[j++] = str[i];
                distvow[str[i] - 'a']++;
            }
        }
        else{
            if(isalpha(str[i])){
                if(isupper(str[i])){
                    if(distconst[str[i] - 'A'] == 0)
                        consonant[k++] = str[i];
                    distconst[str[i] - 'A']++;
                }
                if(islower(str[i])){
                    if(distconst[str[i] - 'a'] == 0)
                        consonant[k++] = str[i];
                    distconst[str[i] - 'a']++;
                }
            }
        }
    } 
    printf("Entered string is : \n%s\n\n", str);
    printf("Vowels are : ");
    for(int i = 0; i < j; i++)
        printf("%c ", vowel[i]);

    printf("\nConsonants are : ");
    for(int i = 0; i < k; i++)
        printf("%c ", consonant[i]);
}