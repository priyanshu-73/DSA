class Node:
    def __init__(self, value):
        self.data = value
        self.next = None


class Solution(object):
    def mergeTwoLists(self, list1, list2):
        list3 = list1 + list2
        list3 = list(list3)
        list3.sort()
        return list3

        
a = Solution()
list1 = [1, 2, 4]
list2 = [1, 3, 4]
print(a.mergeTwoLists(list1, list2))

