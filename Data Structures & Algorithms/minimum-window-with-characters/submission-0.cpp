// class Solution {
// public:
//     string minWindow(string s, string t) {
//         if(s.length() < t.length()) return "";

//         vector<int> need(26,0);
//         for(char c: t){
//             need[c -'a']++;
//         }

//         int left = 0;
//         for(int right = 0; right <= s.length(); right++){
//             if(s == t) return s;
//         }

//         ......

//     }
// };


class Solution {
public:
    string minWindow(string s, string t) {
        if (s.length() < t.length()) return "";

        vector<int> need(128, 0);
        vector<int> window(128, 0);

        // Characters required from t
        for (char c : t) {
            need[c]++;
        }

        int left = 0;
        int required = t.length();

        int start = 0;
        int minLen = INT_MAX;

        for (int right = 0; right < s.length(); right++) {

            // Add current character to window
            char c = s[right];
            window[c]++;

            // If this character was still needed
            if (window[c] <= need[c]) {
                required--;
            }

            // Window is valid
            while (required == 0) {

                // Update answer
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }

                // Remove left character
                char leftChar = s[left];
                window[leftChar]--;

                // Now window became invalid
                if (window[leftChar] < need[leftChar]) {
                    required++;
                }

                left++;
            }
        }

        if (minLen == INT_MAX) return "";

        return s.substr(start, minLen);
    }
};

