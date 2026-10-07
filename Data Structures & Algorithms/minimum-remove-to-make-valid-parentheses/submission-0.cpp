class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int sum=0;
        string temp="";
        for(int i=0;i<s.size();i++){
            if (s[i]=='('){
                sum++;
            }
            else if(s[i]==')'){
                sum--;
            }
            if(sum<0){
                temp+="";
                sum=0;
            }
            else{
                temp+=s[i];
            }
        }
        if (sum==0){
            return temp;
        }
        else{
            s=temp;
            temp="";
            for(int i=s.size()-1;i>=0;i--){
                if(s[i]=='(' && sum!=0){
                    temp+="";
                    sum--;
                }
                else{
                    temp+=s[i];
                }   
            }
        }
        reverse(temp.begin(), temp.end());
        return temp;
        
    }
};
