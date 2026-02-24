class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0;
        int y=0;
        int i=0;
        while(i<moves.size()){
            char & c= moves[i];
            if (c=='U'){
                y++;
                i++;
            }
            else if (c=='D'){y--;i++;}
            else if (c=='R'){x++;i++;}
            else if (c=='L'){x--;i++;}
        }
        return (x==0&&y==0);
    }
};
