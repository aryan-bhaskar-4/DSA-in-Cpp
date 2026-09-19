#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1 = "anagram";
    string str2 = "nagaram";
    int isAnagram = true;
    int freq[26] = {0};

    if(str1.size() != str2.size()){
        isAnagram = false;     
    } 

    for(int i=0;i<str1.size();i++){
        char ch = str1[i] - 'a';
        int temp = (int)ch;

        freq[temp]++;
    }

    for(int i=0;i<str2.size();i++){
        char ch = str2[i]-'a';
        int temp = (int)ch;

        if(freq[temp] == 0){
            isAnagram = false;
        }
        freq[temp]--;
    }

    if(isAnagram){
        cout << "Anagram..." << endl;
    } else {
        cout << "Not Anagram..." << endl;
    }

    return 0;
}