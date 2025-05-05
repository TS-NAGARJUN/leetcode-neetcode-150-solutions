class Solution {
    public:
        bool isValid(string s) {
            int m = s.length();
            stack<char>st;
            for(int i=0;i<m;i++)
            {
                char ch = s[i];
                if(ch == '(' || ch == '[' || ch == '{')
                {
                    st.push(ch);
                }
                else if(!st.empty())
                {
                    switch(ch){
                    case ')':
                        if(st.top() == '(')
                        {
                            st.pop();
                        }
                        else
                        {
                            return false;
                        }
                        break;
                        case ']':
                        if(st.top() == '[')
                        {
                            st.pop();
                        }
                        else
                        {
                            return false;
                        }
                        break;
                        case '}':
                        if(st.top() == '{')
                        {
                            st.pop();
                        }
                        else
                        {
                            return false;
                        }
                        break;
                    }
                }
                else
                {
                    return false;
                }
            }
            return st.empty();
        }
    };
    