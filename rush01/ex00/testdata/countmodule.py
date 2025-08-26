def count_visible(line):
	i = 0
	max = 0
	count = 0
	length = len(line)
	while (max != length):
		if (line[i] > max):
			max = line[i]
			count += 1
		i += 1
	return count

def count(board, n):
	label = [[0 for _ in range(n)] for _ in range(4)]
	# 上からカウント
	for i in range(n):
		label[0][i] = count_visible([r[i] for r in board])

	# 下からカウント
	for i in range(n):
		label[1][i] = count_visible(list(reversed([r[i] for r in board])))

	# 左からカウント
	for i in range(n):
		label[2][i] = count_visible(board[:][i])

	# 右からカウント
	for i in range(n):
		label[3][i] = count_visible(list(reversed(board[:][i])))
	
	return label

def format_label(label, n):
	for i,row in enumerate(label):
		if (i == n - 1):
			print(" ".join(str(num) for num in row), end="\n")
		else:
			print(" ".join(str(num) for num in row), end=" ")