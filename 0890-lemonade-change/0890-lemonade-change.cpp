class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int l =0,r=0,z=0;
        for(int num:bills){
            if(num==5){l++;}
            else if( num==10 && l>0 ){l--;r++;}
            else if(num==20 && l>0 && r>0){l--;r--;z++;}
            else if(num==20 && l>=3){l-=3;}
            else {return false;} 
        }
        return true;
       
    }
};