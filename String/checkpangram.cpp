#include<iostream>
#include<vector>
using namespace std;
bool isPangram(string sentence){
    vector<bool> alpha(26,0);

    for(int i=0;i<sentence.size();i++){
        char ch = sentence[i];

        int temp = ch - 'a';

        alpha[temp] = 1;

    }

    for(int i=0;i<26;i++){
        if(alpha[i] == 0){
            cout << "Not Pangram...." << endl;
            return 0;
        }
    }

    cout << "Pangram....." << endl;
    return 1;
}

int main(){
    string sentence = "thequickbrownforjumpsoverthelazydog";

    isPangram(sentence);
    return 0;
}