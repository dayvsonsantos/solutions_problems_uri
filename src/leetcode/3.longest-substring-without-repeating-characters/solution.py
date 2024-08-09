class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        char_set = set()
        left = 0
        max_lengh = 0
        
        for right in range(len(s)):
            while(s[right] in char_set):
                char_set.remove(s[left])
                left += 1
            
            char_set.add(s[right])
            max_lengh = max(max_lengh, right-left+1)

        return max_lengh
