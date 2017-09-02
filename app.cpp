#include <stdio.h>
#include <string.h>
#include <iostream>
#include "palindromes.h"
using namespace std;
//void palindromes(char *,int);
int main(){
    string word;
    Validate *v;
    char c[1024];
    cout<<"Please enter your input \n";
    getline(cin,word);
    cout<<"hello"<<word.size();
    strcpy(c, word.c_str());
     v=new Validate(word.size());
  //  palindromes(c,word.size());
  v->palindromes(c,word.size())==1?cout<<"true":cout<<"false";
    return(0);
}
// void palindromes(char *c,int size){
  
//     char *c1=new char[size];
//     for(int i=size;i>=0;i--){
//        c1[i]=c[i];
//     }
//    cout<<"compare char"<<strcmp(c1,c);
   
// }
