#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main() {
    int w;
    cin >> w;
    vector<vector<int>> tot;
    for(int i = 0; i < w; ++i){
        vector<int> sure(3);
        for(int j = 0; j < 3; ++j){
            cin >> sure[j];
        }
        tot.push_back(sure);
    }
    int count = 0;
    for(int i = 0; i < tot.size()-1; ++i){
        for(int j = 0; j < 3; ++j){
            if(tot[i][j] == 1 && tot[i+1][j] == 1){
                ++count;
            }
        }
    }
    cout << count << endl;
}
