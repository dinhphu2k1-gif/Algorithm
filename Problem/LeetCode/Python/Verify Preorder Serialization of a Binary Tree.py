class Solution:
    def isValidSerialization(self, preorder: str) -> bool:
        nodes = preorder.split(',')

        diff = 1
        for node in nodes:
            diff -= 1
            if diff < 0:
                return False
            if node != '#': 
                diff += 2
        # print(diff)
        return diff == 0

test = Solution()

preorder = "9,3,4,#,#,1,#,#,2,#,6,#,#"
print(test.isValidSerialization(preorder))

        