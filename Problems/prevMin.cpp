// to find the previous minimum value for each element in the array

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> findMin(vector<int> array)
{
    int n = array.size();
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        int index = i - 1;
        while (index >= 0)
        {
            if (array[index] < array[i])
            {
                ans[i] = array[index];
                break;
            }
            else
            {
                index--;
            }
        }
        if (index == -1)
        {
            ans[i] = -1;
        }
    }
    return ans;
}

vector<int> findMinStack(vector<int>array){
    int n = array.size();
    stack<int>st;
    vector<int>ans(n);
    for(int i = 0; i < n; i++){
        while(!st.empty() && array[i] <= array[st.top()]){
            st.pop();
        }
        if(st.empty()){
            ans[i] = -1;
        }else{
            ans[i] = array[st.top()];
        }

        st.push(i);
    }
    return ans;
}

int main()
{
    vector<int> array = {3, 1, 0, 8, 6};
    vector<int> minArray = findMinStack(array);
    for (int x : minArray)
    {
        cout << x << " ";
    }

    return 0;
}