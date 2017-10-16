#include <bits/stdc++.h>
using namespace std;

int N,M;
int times[1001][1001];

int main(){
    cin >> N >> M;
    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
            cin >> times[i][j];
    for(int i = 1; i < N; i++)
        times[i][0] += times[i-1][0];
    for(int j = 1; j < M; j++)
        times[0][j] += times[0][j-1];
    for(int i = 1; i < N; i++)
        for(int j = 1; j < M; j++)
            times[i][j] += max(times[i-1][j], times[i][j-1]);
    for(int i = 0; i < N; i++)
        cout << times[i][M-1] << " ";
    cout << endl;
    return 0;
}
