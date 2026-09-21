#include<iostream>
using namespace std;
void rotateclockwise(string &str){
    int n = str.size();
    char temp = str[n-1];

    for(int i=n-2;i>=0;i--){
        str[i+1] = str[i];
    }
    str[0] = temp;

    return;
}


void rotateanticlockwise(string &str){
    int n = str.size();
    char temp = str[0];

    for(int i=0;i<n-1;i++){
        str[i] = str[i+1];
    }
    str[n-1] = temp;

    return;
}


bool isRotated2Spaces(string str1, string str2){
    string clockwise = str1;
    string anticlockwise = str1;

    rotateclockwise(clockwise);
    rotateclockwise(clockwise);

    if(clockwise == str2){
        cout << "True....." << endl;
        return true;
    }

    rotateanticlockwise(anticlockwise);
    rotateanticlockwise(anticlockwise);

    if(anticlockwise == str2){
        cout << "True....." << endl;
        return true;
    }  

    cout << "False..." << endl;

    return false;
}


int main(){
    string str1 = "leetcode";
    string str2 = "deleetco";

    isRotated2Spaces(str1,str2);

    return 0;
}