#include <stdio.h>
#include <string.h>
int parser(char * str){//to get string to this function
    int in = 0;
    int newstr = 0;
    for(int i = 0; i<=strlen(str); i++){
        if(str[i]=='>'){
            in = 1;
            continue;
        }else if(str[i]=='<'){
            in = 0;
            continue;//so that >< dont get printed
        }
        if(in == 1){
            str[newstr] = str[i];
            newstr++;
        }
    }
    str[newstr]='\0';
}
int front(char * str){
    while(str[0]==' '){
        for(int i = 0; i<strlen(str); i++){
            str[i]=str[i+1];
        }
    }
}
int back(char * str){
    int a = strlen(str);
    while(str[a-1]==' '){
        for(int i = 0; i<a; i++){
            str[a-1]='\0';
        }
        a--;
    }
}
int caller(char * str){
    parser(str);
    front(str);
    back(str);
    printf("Parsed string is: \"%s\"\n", str);
}
int main() {
    char str[] = "<h1> the header is this bs <h1>";
    caller(str);
}
