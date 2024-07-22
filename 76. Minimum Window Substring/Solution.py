class Solution:
    def minWindow(self, s: str, t: str) -> str:
        tcounter = {}
        for c in t:
            tcounter[c] = 1 + tcounter.get(c,0)
        sliding = {}
        l = 0
        matches = 0
        res, resLen = [-1,-1], float("infinity")
        for r in range(len(s)):
            sliding[s[r]] = 1 + sliding.get(s[r], 0)

            if sliding[s[r]] == tcounter.get(s[r], 0):
                matches += 1
            while matches == len(tcounter): #possible solution
                #store the solution
                if (r-l+1) < resLen:
                    res = [l,r]
                    resLen = r-l+1
                #shrink the window
                sliding[s[l]] -= 1
                if sliding[s[l]] < tcounter.get(s[l], 0):
                    matches -= 1
                l += 1
        [l,r] = res
        return s[l:r+1] if resLen != float("infinity") else ""



                

        