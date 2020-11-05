// #1614 Maximum Nesting Depth of Parantheses
int maxDepth(string s)
{
    if (s.empty())
        return 0;
    if (s.length() == 1 && (s[0] != '(' || s[0] != ')'))
        return 0;
    int currDepth = 0;
    int maxDepth = 0;

    for (char c : s)
    {
        if (c == '(')
        {
            currDepth++;
            maxDepth = max(currDepth, maxDepth);
        }
        else if (c == ')')
            currDepth--;
    }
    return maxDepth;
}