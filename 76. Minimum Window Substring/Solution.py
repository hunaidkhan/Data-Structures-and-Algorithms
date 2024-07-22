class Solution:
    def minWindow(self, s: str, t: str) -> str:
        tcounter, window = {}, {}
        for char in t:
            tcounter[char] = 1 + tcounter.get(char, 0)
        maxString = ""
        have, need = 0, len(tcounter)
        res, resLen = [-1,-1], float("infinity")
        l = 0
        for j in range(len(s)):
            window[s[j]] = 1 + window.get(s[j], 0)
            if s[j] in tcounter and tcounter[s[j]] == window[s[j]]:
                have += 1
            while have==need:
                if (j-l+1) < resLen:
                    resLen = j-l+1
                    res = [l,j]
                window[s[l]] -= 1
                if s[l] in tcounter and window[s[l]] < tcounter[s[l]]:
                    have -= 1
                l += 1
        l,r= res
        return s[l:r+1] if resLen != float("infinity") else ""

        