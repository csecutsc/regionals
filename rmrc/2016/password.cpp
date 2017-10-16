#include<bits/stdc++.h>
#define len(x) (x).size()

using namespace std;

int N;
pair<double, string>arr[1000];

bool compare(pair<double, string>p1, pair<double,string>p2){
    return p1.first > p2.first;
}
int main(){
    cin >> N;
    double expected = 0;
    for(int i = 0;i < N;i++){
        cin >> arr[i].second >> arr[i].first;
    }
    sort(arr, arr+N, compare);
    for(int i = 0;i < N;i++){
        expected += (i+1)*arr[i].first; 
    }
    printf("%.4lf\n", expected);
    return 0;
}
