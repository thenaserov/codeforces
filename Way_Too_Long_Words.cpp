#include <iostream>
#include <string>
    #include <vector>
 
    using namespace std;
 
    int main() {
        int w;
        cin >> w;
        vector<string> strings(w);
        for(int i = 0;i < w; i++){
            cin >> strings[i];
        }
        for(string s: strings){
            if(s.size() >= 11){
                string t = s[0] + to_string(s.size()-2) + s[s.size()-1];
                cout << t << endl;
            }
            else{
                cout << s << endl;
            }
        }
    }
