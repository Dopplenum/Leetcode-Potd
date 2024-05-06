class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=word.size();
        string pre="";
        int ind=-1;
        for(int i=0; i<n; i++){
            pre=word[i]+pre;
            if(word[i]==ch){
                ind=i;
                break;
            }
        }
        cout<<ind<<endl;
        if(ind==-1){
            pre="";
            return word;
        }
        for(int i=ind+1; i<n; i++){
            pre+=word[i];
        }
        cout<<pre;
        return pre;
    }
};
