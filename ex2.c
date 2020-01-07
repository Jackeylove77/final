#include<stdio.h>
#include<string.h>
void reverse(char s[],int i, int j){
    int x;
    int y;
    y = j-(i + 1);
    if(i<y){
        x=s[i];
        s[i]=s[y];
        s[y]=x;
        reverse(s,++i,j);
    }
}

int main(){

    char s;

    char t[50];

    int i = 0;

    int k = 0;

    while((s = getchar()) != '\n'){

        t[i]=s;

        k=++i;

    }

    reverse(t,0,k);

    for(i=0;i<k;i++)

    printf("%c",t[i]);

}