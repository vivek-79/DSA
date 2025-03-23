
# include <bits/stdc++.h>

class Solution
{
public:
    // finding previous smaller elem
    vector<int> PSE(vector<int> nums)
    {

        stack<int> st;
        vector<int> ans(nums.size());

        for (int i = 0; i < nums.size(); i++)
        {

            while (!st.empty() && nums[st.top()] > nums[i])
            {
                st.pop();
            }

            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        return ans;
    }

    // finding next smaller elem
    vector<int> NSE(vector<int> nums)
    {
        stack<int> st;
        vector<int> ans(nums.size());

        for (int i = nums.size() - 1; i >= 0; i--)
        {

            while (!st.empty() && nums[st.top()] >= nums[i])
            {
                st.pop();
            }

            ans[i] = st.empty() ? nums.size() : st.top();
            st.push(i);
        }

        return ans;
    }

    // finding min-sum
    long long minSum(vector<int> nums)
    {

        vector<int> pse = PSE(nums);
        vector<int> nse = NSE(nums);

        long long total = 0;

        for (int i = 0; i < nums.size(); i++)
        {

            long long left = i - pse[i];
            long long right = nse[i] - i;

            total = (total + (left * right * nums[i]));
        }
        return total;
    }

    // finding previous greater elem
    vector<int> PGE(vector<int> nums)
    {

        stack<int> st;
        vector<int> ans(nums.size());

        for (int i = 0; i < nums.size(); i++)
        {

            while (!st.empty() && nums[st.top()] < nums[i])
            {
                st.pop();
            }

            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        return ans;
    }

    // finding next greater elem
    vector<int> NGE(vector<int> nums)
    {
        stack<int> st;
        vector<int> ans(nums.size());

        for (int i = nums.size() - 1; i >= 0; i--)
        {

            while (!st.empty() && nums[st.top()] <= nums[i])
            {
                st.pop();
            }

            ans[i] = st.empty() ? nums.size() : st.top();
            st.push(i);
        }

        return ans;
    }
    // finding max-sum
    long long maxSum(vector<int> nums)
    {
        vector<int> pge = PGE(nums);
        vector<int> nge = NGE(nums);

        long long total = 0;

        for (int i = 0; i < nums.size(); i++)
        {

            long long left = i - pge[i];
            long long right = nge[i] - i;

            total = (total + (left * right * nums[i]));
        }
        return total;
    }
    long long subArrayRanges(vector<int> &nums)
    {

        return (maxSum(nums) - minSum(nums));
    }
};