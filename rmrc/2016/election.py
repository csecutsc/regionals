def factorial(n):
    ret = 1
    for i in range(1,n+1):
        ret *= i
    return ret

def choose(n, k):
    return  factorial(n)/(factorial(k)*factorial(n-k))

T = int(input())
for t in range(T):
        n,v1,v2,w = map(int, input().split())
        m = v1+v2
        rb = n-m        
        p = 0.0
        for i in range(1, rb+1):
                if v1 + i > n/2:
                        p += choose(rb, i)*(0.5**i)*(0.5**(rb-i))
        # print(p, w/100, v1/n)
        if p > w/100 or v1/n > 0.5:
                print('GET A CRATE OF CHAMPAGNE FROM THE BASEMENT!')
        elif p > 0:
                print('PATIENCE, EVERYONE!')
        else:
                print('RECOUNT!')

