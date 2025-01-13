class Solution {
public:
    bool canBeValid(string ss, string locked) {
        stack<int>s;
        stack<int>v;
        int n = ss.size();

        int i=0;
        while(i<n)
        {
            if(ss[i]==')')
            {
                if(locked[i]=='0')
                {
                    v.push(i);
                }
                else
                {
                    if(!s.empty())
                    s.pop();
                    else
                    {
                        if(v.size()==0)
                        return false;
                        v.pop();
                    }
                }
            }
            else
            {

                if(locked[i]=='0')
                v.push(i);
                else
                s.push(i);
            }
            i++;
        }

        while(!s.empty())
        {
            if(v.size()==0)
            return false;

            int j=v.top();
            v.pop();
            int i=s.top();
            s.pop();
            if(i>j)
            return false;
        }


        if(v.size()%2==0)
        return true;

        return false;
    }
};