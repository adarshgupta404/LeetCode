class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int lc = 0, rc = 0;
        for(int i = 0; i<moves.size(); i++){
            if(moves[i]=='L'){
                lc++;
            }
            else if(moves[i]=='R'){
                rc++;
            }
            else{
                continue;
            }
        }

        return moves.size()-lc-rc+abs(lc-rc);
    }
};