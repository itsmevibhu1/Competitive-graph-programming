#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        int n = str.size();
        int arr[501];
        for(int i = 0;i < n;i++){
            arr[i] = str[i] - '0';
        }
        int cnt = 1;
        int cnt01 = 0;
        for(int i = 1;i < n;i++){
            if(arr[i] != arr[i-1]){
                if(cnt01 == 0){
                    if(arr[i-1] == 0 && arr[i] == 1){
                        cnt01++;
                    }
                    else cnt++;
                }
                else cnt++;
            }
        }
        cout << cnt << endl;
    }
}