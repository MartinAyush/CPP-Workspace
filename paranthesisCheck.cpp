#include<bits/stdc++.h>
using namespace std;

bool isMatching(char a, char b){
    if(a == '(' && b == ')'){
        return true;
    }else if(a == '[' && b == ']'){
        return true;
    }else if(a == '{' && b == '}'){
        return true;
    }else{
        return false;
    }
}

bool checkBalanced(string str){
    stack<char> s;
    for(auto x : str){
        if(x == '(' || x == '[' || x == '{'){
            s.push(x);
        }else{
            if(s.empty()){
                return false;
            }
            else if(isMatching(s.top(), x) == false){
                return false;
            }else{
                s.pop();
            }
        }
    }
    return (s.empty() == true);
}

int main(){
    string str = "";
    (checkBalanced(str)) ? cout << "Balanced\n" : cout << "Not balanced\n";
    
    return 0;
}