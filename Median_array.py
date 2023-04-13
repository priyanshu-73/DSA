class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        nums3 = nums1 + nums2
        nums3.sort()
        for i in range(len(nums3)):
            if len(nums3) % 2 != 0:
                c = (0 + len(nums3) - 1)/2
                return nums3[int(c)]
            else:
                c = (0 + len(nums3) - 1) / 2
                d = ((0 + len(nums3) - 1) / 2) + 1
                e = (nums3[int(c)] + nums3[int(d)])/2
                return e


a = Solution()
nums1 = [1.79, 1.61, 2.09, 1.84]
nums2 = [1.96, 2.11, 1.75]
print(a.findMedianSortedArrays(nums1, nums2))