#include<stdio.h>

int main(){
    
    char ch;
    
    scanf("%c", &ch);
    switch(ch){
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        printf("Vowel");
        break;
    default:
        printf("Consonant");
        break;
        
    }
    
    
    return 0;
}