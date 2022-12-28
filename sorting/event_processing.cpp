#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin>>n;

    vector<pair<int, int>> events;

    for(int i = 0; i<n; i++){
        int l, r;
        cin>>l>>r;
        events.push_back(make_pair(l, 0));
        events.push_back(make_pair(r, 1));
    }

    sort(events.begin(), events.end());

    int ans = 0, current = 0;

    for(int i= 0; i<events.size(); i++){
        if(events[i].second == 0){ /// enter event
            current++;
        }
        else{   /// leave event
            current--;
        }

        ans = max(ans, current);
    }

    cout<<ans<<endl;
}