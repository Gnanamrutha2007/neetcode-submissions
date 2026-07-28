class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        stack<pair<int, int>> s;   // {startIndex, height}
        int maxArea = 0;
        int n = heights.size();

        for (int i = 0; i < n; i++) {

            int start = i;

            while (!s.empty() && s.top().second > heights[i]) {

                int index = s.top().first;
                int height = s.top().second;

                maxArea = max(maxArea, height * (i - index));

                s.pop();

                start = index;
            }

            s.push({start, heights[i]});
        }

        // Calculate area for remaining bars
        while (!s.empty()) {

            int index = s.top().first;
            int height = s.top().second;

            maxArea = max(maxArea, height * (n - index));

            s.pop();
        }

        return maxArea;
    }
};