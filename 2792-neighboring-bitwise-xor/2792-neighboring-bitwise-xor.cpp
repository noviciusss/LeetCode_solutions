class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
    //  vector<int>chk(derived.size());
    //  for(int i=0;i<derived.size();i++){
    //     if(i==derived.size()-1){
    //         chk[i]=derived[i]^derived[0];
    //     }
    //     else{
    //         chk[i]=derived[i]^derived[i+1];
    //     }
    //  }   
    //  if(chk==derived)return true;
    //  return false;
    int chk =0;
    for(int i=0;i<derived.size();i++){
        chk^=derived[i];
    }
    return chk ==0;
    }
};