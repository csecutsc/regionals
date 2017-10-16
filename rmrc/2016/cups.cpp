#include<bits/stdc++.h>
#define len(x) (x).size()

using namespace std;

int N;
pair<double, string>arr[25];


bool is_number(string str){
    for(int j = 0;j < len(str);j++){
        if(isdigit(str[j]))continue;
        return false;
    }
    return true;
}

int string_to_int(string str){
    stringstream ss;
    int ret;
    ss << str;
    ss >> ret;
    return ret;
}

int main(){
    cin >> N;
    for(int i = 0;i < N;i++){
        string str[2];
        cin >> str[0] >> str[1];
        // colour radius
        if(is_number(str[1])){
            arr[i].first = string_to_int(str[1]);
            arr[i].second = str[0];
        } else{ // diameter colour
            arr[i].first = string_to_int(str[0])/2.0;
            arr[i].second = str[1];
        }
    }
    sort(arr, arr+N);
    for(int i = 0;i < N;i++){
        cout << arr[i].second << endl;
    }
    return 0;
}
