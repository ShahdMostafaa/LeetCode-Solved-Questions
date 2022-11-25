class Solution {
public:
    bool isAnagram(string s, string t) {
      
       if(s.length() != t.length()) 
       {
           return false;
       }
        if(s.length() == t.length()==0) 
       {
           return true;
       }
       else
       {
          int len = s.length();
           sort(s.begin(),s.end());
           sort(t.begin(),t.end());
           for(int i=0 ; i<len ; i++)
           {
               if(s[i]!=t[i])
               {
                   return false;
                   break;
               }
               
           }
       }
        return true;
    }
};