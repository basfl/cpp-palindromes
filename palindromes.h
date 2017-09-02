#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
class Validate{
    private :
    char *c1;
    int size;
    public :
    Validate();
    Validate(int);
    bool palindromes(char *,int);
};
Validate::Validate(){
    
}
Validate::Validate(int size){
    this->size=size;
    this->c1=new char[this->size];
}
bool Validate::palindromes(char *c,int size){
        for(int i=size;i>=0;i--){
        c1[i]=c[i];
        }
       
        if(strcmp(c1,c)==0){
             return (true);
        }else{
            return (false);
        }
       

}