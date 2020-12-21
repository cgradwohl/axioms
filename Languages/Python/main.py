def add_ten(num):
    return num + 10

print(add_ten(5)) # 15
print(add_ten(add_ten(5))) # 25

# therefore add_ten() is not idempotent, since f(x) === f(f(x)) does not hold.

def api_req(x):
    print(x)

def return_self(x):
    api_req(x)
    return x

print(return_self(5)) # 5
print(return_self(return_self(5))) # 5

# therefore return_self() is idempotent, since f(x) === f(f(x)) holds.


