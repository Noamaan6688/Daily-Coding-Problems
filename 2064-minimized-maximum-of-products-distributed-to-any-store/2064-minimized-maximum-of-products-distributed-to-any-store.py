class Solution:
    def fun(self, n: int, products: List[int]) -> int:
        products.sort(reverse=True)
        left, right = 1, products[0]
        while left <= right:
            mid = (left + right) // 2
            extra = n - len(products)
            for p in products:
                extra -= math.ceil(p / mid) - 1
                if extra < 0: break
            if extra < 0:
                left = mid + 1
            else:
                right = mid - 1
                res = mid
        return res
    def minimizedMaximum(self, n: int, quantities: List[int]) -> int:
        if n == len(quantities):
            return max(quantities)  
        return self.fun(n, quantities)
        