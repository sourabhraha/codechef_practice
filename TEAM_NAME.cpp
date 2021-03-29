#include <bits/stdc++.h>

#define pb push_back
#define ld long double
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> S(n);
        for (int i = 0; i < n; i++) {
            cin >> S[i];
        }
        vector<pair<string, int>> suffixes;
     
        for (int i = 0; i < n; i++) {
            string suf = "";
            for (int x = 1; x < (int) S[i].size(); x++) {
                suf += S[i][x];
            }
         
            suffixes.pb({suf, i});
        }
      
        sort(suffixes.begin(), suffixes.end());

        vector<int> compress(n);

        for (int i = 1; i < n; i++) {
            if (suffixes[i].first == suffixes[i - 1].first) {
                compress[suffixes[i].second] = compress[suffixes[i - 1].second];
            } else {
                compress[suffixes[i].second] = 1 + compress[suffixes[i - 1].second];
            }
        }
       

        vector<vector<bool>> is_word(26, vector<bool>(n, false));
        for (int i = 0; i < n; i++) {
           
            is_word[S[i][0] - 'a'][compress[i]] = true;
        }
        
        int ans = 0;
        for (int i = 0; i < 26; i++) {

            for (int j = 0; j < 26; j++) {
            

                int cnt_10 = 0, cnt_01 = 0;
                for (int x = 0; x < n; x++) {
                    if (is_word[i][x] && !is_word[j][x]) {
                        cnt_10++;
                    } else if (!is_word[i][x] && is_word[j][x]) {
                        cnt_01++;
                    }
                }
                
                ans += cnt_10 * cnt_01;
            }
        }
        cout << ans << '\n';
    }
}