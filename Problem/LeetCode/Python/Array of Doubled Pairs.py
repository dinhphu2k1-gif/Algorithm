class Solution:
    def canReorderDoubled(self, arr: List[int]) -> bool:
        arr_count = {}
        for x in arr:
            arr_count[x] = 0

        for x in arr:
            arr_count[x] += 1 

        mark = 1
        arr.sort()
        for x in arr:
            if arr_count[x] != 0:
                if x < 0:
                    if x/2 not in arr_count:
                        mark = 0
                        break
                    if arr_count[x/2] != 0:
                        arr_count[x/2] -= 1
                    else :
                        mark = 0
                        break
                else :
                    if 2*x not in arr_count:
                        mark = 0
                        break
                    if arr_count[2*x] != 0:
                        arr_count[2*x] -= 1
                    else :
                        mark = 0
                        break
                arr_count[x] -= 1
                
        return mark