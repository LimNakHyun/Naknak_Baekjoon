n=int(input())

print(' '*(n-1)+'*')

for i in range(2,n):
    print(' '*(n-i)+'*'+' '*(2*(i-1)-1)+'*')

if n!=1:
    print('*'*(2*n-1))