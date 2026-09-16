Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.


  #include <iostream>
int main() {
    Solution s;
    vector<int> a = {1, 3}, b = {2};
    cout << s.findMedianSortedArrays(a, b) << endl;   // 2

    vector<int> c = {1, 2}, d = {3, 4};
    cout << s.findMedianSortedArrays(c, d) << endl;   // 2.5
}
