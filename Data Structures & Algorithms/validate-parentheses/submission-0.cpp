class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack;
        std::unordered_map<char, char> valid = 
        {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for(auto c : s){
            if(valid.count(c)){
                if(!stack.empty() && stack.top() == valid[c]){
                stack.pop();
                } else {
                    return false;
                }
            } else {
                stack.push(c);
            }

        }


        return stack.empty();

    }
};
