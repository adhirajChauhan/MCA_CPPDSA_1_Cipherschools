//Problem statement
// You are given a string 'S'. Your task is to check whether the string is palindrome or not. For checking palindrome, consider alphabets and numbers only and ignore the symbols and whitespaces.
// Note :
// String 'S' is NOT case sensitive.

#include <iostream>
using namespace std;

bool isValid(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
}

char toLowerCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch - 'A' + 'a';
    }
    return ch;
}

bool isPalindrome(string arr) {
    int start = 0;
    int end = arr.length() - 1;
    while (start <= end) {
        while (start < end && !isValid(arr[start])) start++;
        while (start < end && !isValid(arr[end])) end--;
        if (toLowerCase(arr[start]) != toLowerCase(arr[end])) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

bool checkPalindrome(string s) {
    string temp = "";
    for (int i = 0; i < s.length(); i++) {
        if (isValid(s[i])) {
            temp.push_back(s[i]);
        }
    }
    return isPalindrome(temp);
}


//return a maximum occuring character in an input string
//You are given a string of words, you need to replace all the spaces with "@9"
// Remove All Occurrences of a Substring -> on leetcode cehck plutonn

