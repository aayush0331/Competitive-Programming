class Solution{
 public:
 vector<string> AllPossibleStrings(string s){
     // Code here
     vector<string> v;
     int n = s.size();
     for(int i = 1 ;i < (1<<n) ; i++){
         string cur = "";
         for(int j = 0 ;j < n ; j++)  {
             if(i&(1<<j)) {
                 cur+=s[j];
             }
         }
         v.push_back(cur);
     }
     sort(v.begin(),v.end());
     return v;
 }
};

