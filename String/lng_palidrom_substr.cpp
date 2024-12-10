string longestPalindrome(string s) {

        int n = s.length();
        int start = -1;
        int len = -1;
        for (int i = 0; i < n; i++) {

            int left = i;
            int right = i;

            while (left >= 0 && right < n && s[left] == s[right]) {
                int size = right - left + 1;
                if (size > len) {
                    len = size;
                    start = left;
                }
                left--;
                right++;
            }

            left=i;
            right =i+1;
            while (left >= 0 && right < n && s[left] == s[right]) {
                int size = right - left + 1;
                if (size > len) {
                    len = size;
                    start = left;
                }
                left--;
                right++;
            }
        }

        return s.substr(start, len);
    }