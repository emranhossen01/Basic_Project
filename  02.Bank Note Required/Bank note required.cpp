#include<bits/stdc++.h>
using namespace std;
int32_t main() {
    int given_Tk;
    cout << "Hello Sir, Please Enter Your Amount : ";
    cin >> given_Tk;
    int cnt[9];
    int note[9];
    memset(cnt, 0, sizeof(cnt));
    while (given_Tk != 0) {
        if (given_Tk > 1000) {
            cnt[0]++;
            note[0] = 1000;
            given_Tk -= 1000;
        } else if (given_Tk < 1000 && given_Tk >= 500) {
            cnt[1]++;
            given_Tk -= 500;
            note[1] = 500;
        } else if (given_Tk < 500 && given_Tk >= 200) {
            cnt[2]++;
            given_Tk -= 200;
            note[2] = 200;
        }
        else if (given_Tk < 200 && given_Tk >= 100) {
            cnt[3]++;
            given_Tk -= 100;
            note[3] = 100;
        }
        else if (given_Tk < 100 && given_Tk >= 50) {
            cnt[4]++;
            given_Tk -= 50;
            note[4] = 50;
        }
        else if (given_Tk < 50 && given_Tk >= 20) {
            cnt[5]++;
            given_Tk -= 20;
            note[5] = 20;
        }
        else if (given_Tk < 20 && given_Tk >= 10) {
            cnt[6]++;
            given_Tk -= 10;
            note[6] = 10;
        }
        else if (given_Tk < 10 && given_Tk >= 5) {
            cnt[7]++;
            given_Tk -= 5;
            note[7] = 5;
        }
        else if (given_Tk < 5 && given_Tk >= 2) {
            cnt[8]++;
            given_Tk -= 2;
            note[8] = 2;
        }
        else {
            cnt[9]++;
            given_Tk -= 1;
            note[9] = 1;
        }
    }
    for (int i = 0; i < 10; i++) {
        if (cnt[i] != 0) {
            cout << "Number of " << note[i] << " TK Note : " << cnt[i] << '\n';
        }
    }
    return 0;
}