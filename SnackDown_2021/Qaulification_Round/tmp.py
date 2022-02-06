from itertools import combinations
test_str = "abcde"
res = [test_str[x:y] for x, y in combinations(
			range(len(test_str) + 1), r = 2)]
print(str(res))
