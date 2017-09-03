#include <stdio.h>
#include <string.h>
#include <iostream>
#include "palindromes.h"
using namespace std;
int main(){
    string word;
    Validate *v;
    char c[1024];
    cout<<"Please enter your input \n";
    getline(cin,word);
    strcpy(c, word.c_str());
    v=new Validate(word.size());
    v->palindromes(c,word.size())==1?cout<<"true":cout<<"false";
    delete v;
    return(0);
}

