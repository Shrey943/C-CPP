class ProductOfNumbers:

    def __init__(self):
        self.result = []
        

    def add(self, num: int) -> None:
        self.result.append(num)
        

    def getProduct(self, k: int) -> int:
        product = 1
        print("Current list:", self.result)
        for i in range(-1, -k-1, -1):
            print('product of:', self.result[i])
            product *= self.result[i]
        
        return product



# Your ProductOfNumbers object will be instantiated and called as such:

# obj.add(num)
# param_2 = obj.getProduct(k)

op = eval(input())
inp = eval(input())
# print(op, inp)
obj = ProductOfNumbers()
final = [None]

for i in range(1, len(op)):
    
    if op[i][0] == 'a':
        # print(type(inp[i]))
        obj.add(inp[i][0])
    elif op[i][0] == 'g':
        final.append(obj.getProduct(inp[i][0]))
        continue
    
    final.append(None)

print(final)







