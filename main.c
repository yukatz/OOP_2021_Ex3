#include <stdio.h>
#include <conio.h>
#define TXT 1024
#define WORD 30


int CharToNum(char c){
    int num;
    int cn = (int)c;
    if(c>64&&c<91){num=cn-64;}
    if(c>96&&c<123){num=cn-96;}
    if(c<64&&c>91||c<96&&c>123){num=0;}
    return num;
    
}

int WordCalc(char *c){
    int ans=0;
    for (int i = 0; i < strlen(c); i++) {
        int s = CharToNum(c[i]);
        ans = ans+s;
    }
    return ans;
    
}



void main()
{
    char str[WORD];
    char txt[TXT];
    gets(str);
    gets(txt);
    
    int wordGem = WordCalc(str);
    char gematry[TXT];
    while(txt!='~'){
        while()
    }
    
    printf("word =%s, number = %d \n ",str,WordCalc(str));
    printf("Gematria Sequences: %s\n",gematry);
   
}