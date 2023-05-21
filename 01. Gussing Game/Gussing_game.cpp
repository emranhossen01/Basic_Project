#include<bits/stdc++.h>
using namespace std;

int32_t main() {
    int magic_number = 6;
    int guess = -1;
    int guess_cnt = 0;
    bool guess_limit_crossed = false;

    while (guess != magic_number && guess_limit_crossed != true) {
        if (guess_cnt < 3) {
            cout << "Guess One Number : ";
            guess_cnt++;
            cin >> guess;
        } else {
            guess_limit_crossed = 1;
        }
    }

    if (guess_limit_crossed) {
        cout << "Sad (: " << '\n';
    } else
        cout << "Congrats";

    return 0;
}