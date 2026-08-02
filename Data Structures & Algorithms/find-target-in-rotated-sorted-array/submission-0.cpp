class Solution {
public:
    int search(vector<int>& arr, int target) {
        int l=0;
        int r=arr.size()-1;
        while (l <= r) {
    int mid = l + (r - l) / 2;

    if (arr[mid] == target)
        return mid;

    if (arr[l] <= arr[mid]) {          // Left half sorted

        if (arr[l] <= target && target < arr[mid])
            r = mid - 1;
        else
            l = mid + 1;

    } else {                           // Right half sorted

        if (arr[mid] < target && target <= arr[r])
            l = mid + 1;
        else
            r = mid - 1;
    }
}

return -1;
    }
};
