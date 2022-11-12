class Solution
{
public:
    string makeGood(string s)
    {
        string res = "";
        stack<char> st;
        int i = 0;
        while (i < s.length())
        {
            if (st.empty())
            {
                st.push(s[i]);
            }
            else if (abs(st.top() - s[i]) == 32)
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
            i++;
        }

        while (!st.empty())
        {
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};