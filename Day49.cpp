#include <bits/stdc++.h>
using namespace std;

stack<int> copyStack(stack<int>input){
    stack<int> temp;
    while (!input.empty()){
        temp.push(input.top());
        input.pop();
    }
    stack<int> result;
    while(! temp.empty()){
        result.push(temp.top());
        temp.pop();
    }
    return result;
}

void copyStackRecursively(stack<int>&st, stack<int>&result){
    if(st.empty()){
        return;
    }
    int curr = st.top();
    st.pop();
    copyStackRecursively(st, result);
    result.push(curr);
}
void insertAtBottom(stack<int>&st, int x){
    if(st.empty()){
        st.push(x);
        return;
    }
    int curr = st.top();
    st.pop();
    insertAtBottom(st,x);
    st.push(curr);
}
void removeAtBottom(stack<int>&st){
    if(st.size()==1){
        st.pop();
        return;
    }
    int curr = st.top();
    st.pop();
    removeAtBottom(st);
    st.push(curr);
}

void reverseStack(stack<int>&st){
    if(st.empty())
        return;

    int curr = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st, curr);
}
bool isValidParenthesis(string str){
    stack<char> s;
    for (int i = 0; i < str.size();i++){
        char ch = str[i];
        if(ch=='(' or ch=='[' or ch=='{'){
            s.push(ch);
        }else{
            if(ch==')'  and !s.empty() and s.top()=='('){
                s.pop();
            }else if(ch==']'  and !s.empty() and s.top()=='[' ){
                s.pop();
            }else if(ch=='}'  and !s.empty() and s.top()=='{'){
                s.pop();
            }else{
                return false;
            }
        }
    }
    return s.empty();
}

vector<int> nextGreaterElement(vector<int>&arr){
    int n = arr.size();
    vector<int> output(n, -1);
    stack<int> st;
    st.push(0);
    for (int i = 1; i < n;i++){
        while(!st.empty() and arr[i]> arr[st.top()]){
            output[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    // while(!st.empty()){
    //     output[st.top()] = -1;
    //     st.pop();
    // }
    return output;
}
vector<int> nextSmallerElement(vector<int>&arr){
    int n = arr.size();
    vector<int> output(n, -1);
    stack<int> st;
    st.push(0);
    for (int i = 1; i < n;i++){
        while(!st.empty() and arr[i] < arr[st.top()]){
            output[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    return output;
}

vector<int>stockSpanPrice(vector<int>&arr){
    int n = arr.size();
    reverse(arr.begin(), arr.end());
    vector<int> output(n, -1);
    stack<int> st;
    st.push(0);
    for (int i = 1; i < n;i++){
        while(!st.empty() and arr[i]> arr[st.top()]){
            output[st.top()] = n-1-i;
            st.pop();
        }
        st.push(i);
    }
    reverse(arr.begin(), arr.end());
    reverse(output.begin(), output.end());
    return output;
}

int histogram(vector<int>&arr){
    int n = arr.size();
    stack<int> st;
    int ans = INT_MIN;
    st.push(0);
    for (int i = 1; i < n; i++)
    {
        while (!st.empty() and arr[i]<arr[st.top()]){
            int el = arr[st.top()];
            st.pop();
            int nse = i;
            int pse = (st.empty()) ? -1 : st.top();
            ans = max(ans, (nse - pse-1) * el);
        }
        st.push(i);
    }
    while(st.empty()){
        int el = arr[st.top()];
            st.pop();
            int nse = n;
            int pse = (st.empty()) ? -1 : st.top();
            ans = max(ans, (nse - pse-1) * el);
    }
    return ans;
}

// postfix
int calc(int v1, int v2, char op){
    if(op=='^'){
            return pow(v1, v2);
    }
    if(op=='*'){
        return v1 * v2;
    }
    if(op=='/'){
        return v1 / v2;
    }
    if(op=='+'){
        return v1 + v2;
    }
    else{
        return v1 - v2;
    }
}

int evalprefix(string &str){
    stack<int> st;
    int n = str.size();
    for (int i = n-1; i>=0;i--){
            char ch = str[i];
            if(isdigit(ch)){
                st.push(ch - '0');
            }else{
                int v2 = st.top();
                st.pop();
                int v1 = st.top();
                st.pop();
                st.push(calc(v1, v2, ch));
            }
    }
    return st.top();
}

int evalPostfix(string &str){
    stack<int> st;
    int n = str.size();
    for (int i = 0; i < n;i++){
            char ch = str[i];
            if(isdigit(ch)){
                st.push(ch - '0');
            }else{
                int v2 = st.top();
                st.pop();
                int v1 = st.top();
                st.pop();
                st.push(calc(v1, v2, ch));
            }
    }
    return st.top();
}

int precedence(char ch){
    if(ch=='^')
        return 3;
    else if(ch=='*' or ch=='/' )
        return 2;
    else if(ch=='+' or ch=='-')
        return 1;
    else
        return -1;
}

int evalinfix(string &str){
    stack<int> nums;
    stack<char> ops;

    for (int i = 0; i < str.size();i++){
        if(isdigit(str[i])){
                nums.push(str[i] - '0');
        }else if(str[i]=='('){
                ops.push(str[i]);
        }else if(str[i]==')'){
            while(!ops.empty() and ops.top()!='('){
                char op = ops.top();
                ops.pop();

                int v2 = nums.top();
                nums.pop();
                int v1 = nums.top();
                nums.pop();
                nums.push(calc(v1, v2, op));
            }
            if(!ops.empty())
                ops.pop();
        }else{
            while(!ops.empty() and precedence(ops.top()) >=precedence(str[i])){
                char op = ops.top();
                ops.pop();

                int v2 = nums.top();
                nums.pop();
                int v1 = nums.top();
                nums.pop();
                nums.push(calc(v1, v2, op));
            }
            ops.push(str[i]);
        }
    }
    while(!ops.empty()){
        char op = ops.top();
                ops.pop();

                int v2 = nums.top();
                nums.pop();
                int v1 = nums.top();
                nums.pop();
                nums.push(calc(v1, v2, op));
    }
    return nums.top();
}

string preToPostfix(string &pre){
    stack<string> st;
    reverse(pre.begin(), pre.end());
    for (int i = 0; i < pre.size();i++){
        if(isdigit(pre[i])){
            st.push(to_string(pre[i] - '0'));
        }else{
            string v1 = st.top();
            st.pop();
            string v2 = st.top();
            st.pop();
            string newexp = v1 + v2 + pre[i];
            st.push(newexp);
        }
    }
    return st.top();
}

int main(){
    // stack<int> st;
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.push(4);
    // while(!st.empty()){
    //     cout << st.top() << " ";
    //     st.pop();
    // }

    // stack<int> res;
    // copyStackRecursively(st, res);
    // while(!res.empty()){
    //     cout << res.top() << " ";
    //     res.pop();
    // }

    // insertAtBottom(st, 0);
    // removeAtBottom(st);
    // reverseStack(st);
    // while(!st.empty()){
    //     cout << st.top() << " ";
    //     st.pop();
    // }

    // string str = "({[()]})";
    // cout << isValidParenthesis(str) << endl;

    // vector<int> v = {100,80,60,70,60,75,85};
    // vector<int> res = nextGreaterElement(v);
    // vector<int> res = nextSmallerElement(v);

    // vector<int> res = stockSpanPrice(v);
    // for (int i = 0; i < res.size();i++){
    //     cout << i - res[i]<< " ";
    // }

    // vector<int> inputVector = {2, 1, 5, 6, 2, 3, 0, 2, 1, 5, 6, 2, 3};
    // cout << histogram(inputVector);

    // string postfix = "231*+9-"; //postfix
    // string prefix = "-9+*132";
    // cout << evalprefix(prefix);

    // string infix = "1+(2*(3-1))+2";
    // cout << evalinfix(infix);

    string s = "*+31-15";
    cout << evalprefix(s) << endl;
    cout << preToPostfix(s);
    cout << evalPostfix(s) << endl;
}