class Solution:
    def sortPeople(self, names: List[str], heights: List[int]) -> List[str]:
        people ={}
        n=len(heights)
        for i in range(n):
            people[heights[i]] = names[i]
        return list(dict(sorted(people.items(), key=lambda item: item[0], reverse=True)).values())