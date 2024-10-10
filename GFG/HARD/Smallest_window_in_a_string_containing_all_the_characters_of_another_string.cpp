/*
Smallest window in a string containing all the characters of another string
Given two strings s and p. Find the smallest window in the string s consisting of all the characters(including duplicates) of the string p.  Return "-1" in case there is no such window present. In case there are multiple such windows of same length, return the one with the least starting index.
Note : All characters are in Lowercase alphabets. 

Examples:

Input: s = "timetopractice", p = "toc"
Output: toprac
Explanation: "toprac" is the smallest
substring in which "toc" can be found.
Input: s = "zoomlazapzo", p = "oza"
Output: apzo
Explanation: "apzo" is the smallest 
substring in which "oza" can be found.
Expected Time Complexity: O(|s|)
Expected Auxiliary Space: O(n), n = len(p)

Constraints: 
1 ≤ |s|, |p| ≤ 105
*/
class Solution
{
   bool present( int ch, int pre[] ){
        return pre[ch] == 1;
    }
    void checkAndAdd( int ch, int pre[], int f[] ){
        if ( present(ch, pre) ) f[ch]++;
    }
    void checkAndSub( int ch, int pre[], int f[] ){
        if ( present(ch, pre) ) f[ch]--;
    }
    bool valid( int f[] ){
        for ( int i = 0; i<30; i++ ) if ( f[i] > 0 ) return false;
        return true;
    }
    public:
    string smallestWindow (string s, string p){
        int n = s.size(), j = 0, pre[30], f[30], res = INT_MAX; string finalS = "-1"; 
        for ( int i = 0; i<30; i++ ) pre[i] = 0, f[i] = 0;
        for ( auto i : p ) {
            pre[i-'a'] = 1; 
            f[i-'a']++;
        }
        for ( int i = 0; i<n; i++ ){
            while ( j < n && !valid(f) ){
                checkAndSub(s[j]-'a', pre, f);
                j++;
            }
            if ( res > j-i && valid(f) ){
                res = j-i;
                finalS = s.substr(i, j-i);
            }
            checkAndAdd(s[i]-'a', pre, f);
        } return finalS;
    }
};