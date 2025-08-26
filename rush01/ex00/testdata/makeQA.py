import countmodule as cd
import generateboad as gb


def generate_QAfiles(n, amount):
	n = n
	for am in range(amount):
		generated_board = gb.generate_full_sudoku(n)

		f = open(f'expected_output/{n}*{n}/expected_output_{n}*{n}_{am}.txt', 'w')
		for row in generated_board:
			print(" ".join(str(num) if num != 0 else '.' for num in row), file=f)
		f.close()

		label = cd.count(generated_board, n)

		f = open(f'input/{n}*{n}/input_{n}*{n}_{am}.txt', 'w')
		for i,row in enumerate(label):
			if (i == 3):
				print(" ".join(str(num) for num in row), end="\n",file=f)
				
			else:
				print(" ".join(str(num) for num in row), end=" ",file=f)
		f.close()

for i in range(9):
	generate_QAfiles(i + 1,100)