#include<bits/stdc++.h>
#define len(x) (x).size()

using namespace std;

int main(){
    int N,X,Y;
    cin >> X >> Y >> N;
    for(int i = 1; i <= N; i++){
        if(i % X == 0 || i % Y == 0){
            if(i % X == 0)
                cout << "Fizz";
            if(i % Y == 0)
                cout << "Buzz";
            cout << endl;
        }else
            cout << i << endl;
    }
    return 0;
}

