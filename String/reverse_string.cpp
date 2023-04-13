#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str[100];
    cout<<"Enter string:"<<endl;
    cin.getline(str,100);
    int len=strlen(str);
    int i;
    char temp;
    //it basically swaps the first and last till reaching the mid of string array
    for(i=0;i<(len/2);i++){ //iterates over string till mid of its length
        temp=str[len-i-1]; //temp to store the character at last
        str[len-i-1]=str[i];
        str[i]=temp;
    }
    cout<<str<<endl;
  return 0;
}