#include<iostream>
using namespace std;
int main()
{
    int longestPalindrome(string s)
    {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        stringstream ss;
        int n = s.size();
        ss << "#";
        for(int i = 0; i < n; i++){
            ss << s[i] << "#";
        }
        string ns = ss.str();

        int ret = 0;

        vector<int> arr(ns.size(), 0);
        int cm = 0;
        int ci = 0;
        for(int i = 0; i < ns.size(); i++){
            int pi = 2 * ci - i;
            int pl = 0;
            if(pi >= 0){
                pl = arr[pi];
            }
            if(i + pl < cm){
                arr[i] = pl;
            }else{
                while(i + pl < ns.size() && i - pl >= 0){
                    if(ns[i + pl] != ns[i - pl]) break;
                    else pl++;
                }
                pl -= 1;
                arr[i] = pl;
                if(pl > cm) cm = pl;
            }
            ret += (arr[i] + 1) / 2;
        }

        return ret;
    }

}


