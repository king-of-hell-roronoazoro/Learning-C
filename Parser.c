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
int main() {
    char str[] = "<h1> the header is this bs <h1>";
    parser(str);
    printf("The parsed string is \"%s\"", str);
}
