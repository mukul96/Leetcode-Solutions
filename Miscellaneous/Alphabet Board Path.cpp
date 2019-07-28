class Solution {
public:
    string alphabetBoardPath(string target) {
       int curr_row =0;
		int curr_col=0;
		string res="";
		for(int i=0;i<target.length();i++){
			char a = target[i];
			int loc = a - 'a';
			int row = loc/5;
			int col = (loc%5);
			int diff_row = row-curr_row;
			int diff_col = col-curr_col;
			 res += string(max(0, -diff_row), 'U') + string(max(0, diff_col), 'R') +
			string(max(0, -diff_col), 'L') + string(max(0, diff_row), 'D') + "!";
			curr_row=row;
			curr_col=col;
		}
		return res;
    }
};
