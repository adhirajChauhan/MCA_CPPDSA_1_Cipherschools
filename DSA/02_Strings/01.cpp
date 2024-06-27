//Strings -> string is a collection of characters.
// 2 types -> Strings that are objects of string class(STL)
            ///C-strings(c-style strings)

#include<iostream>
#include<string>
using namespace std;

char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z') return ch;

    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool isPalindrome(char arr[], int size){
    int start = 0;
    int end = size - 1;
    while(start <= end){
        if(toLowerCase(arr[start]) != toLowerCase(arr[end])){
            return false;
        }
        else{
            start++; 
            end--;
        }
    }
    return true;
}

int getLength(char item[]){
    int count = 0;
    for(int i = 0; item[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){
    // char str[] = "Hello";
    // char str[] = {'H', 'e', 'l', 'l', 'o'};

    // char str[100];
    // cout << "Enter you name : ";
    // // cin >> str;
    // cin.getline(str, 100);

    // cout << str;

    //Strings

    string str = "Hello world, how are you"; // old string
    //"Hello world, test how are you"
    // cout << str << endl;

    // str.append(" New string");
    // cout << str;

    // cout << str.find("world");
    // cout << str.size();

}