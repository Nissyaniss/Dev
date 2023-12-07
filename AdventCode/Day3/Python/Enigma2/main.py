def checkNumbers(line : str, pos : int) -> int:
	nb : int

	nb = 0

	while line[pos].isdigit():
		pos -= 1
	pos += 1
	while line[pos].isdigit():
		nb = nb * 10 + int(line[pos])
		pos += 1
	return nb

def main() -> None:
	fileCopy : list[str]
	i : int
	y : int
	result : int
	partList : list[int]
	
	result = 0
	fileCopy = []
	i = 0
	y = 0
	partList = []

	with open("/home/nissya/Dev/AdventCode/Day3/Python/Enigma2/input.txt", "r") as f:
		for line in f:
			fileCopy.append(line)
		while i < len(fileCopy):
			line = fileCopy[i]
			while y < len(line):
				if line[y] == "*":
					if i - 1 >= 0 and i + 1 < len(fileCopy) and y + 1 < len(line):
						if fileCopy[i][max(0, y - 1)].isdigit():
							partList.append(checkNumbers(fileCopy[i], max(0, y - 1)))
						if fileCopy[i][max(0, y + 1)].isdigit():
							partList.append(checkNumbers(fileCopy[i], max(0, y + 1)))
						for j in range(-1, 2):
							if fileCopy[i - 1][max(0, y + j)].isdigit():
								partList.append(checkNumbers(fileCopy[i - 1], max(0, y + j)))
								if not fileCopy[i - 1][y] == ".":
									break
						for j in range(-1, 2):
							if fileCopy[i + 1][max(0, y + j)].isdigit():
								partList.append(checkNumbers(fileCopy[i + 1] , max(0, y + j)))
								if not fileCopy[i + 1][y] == ".":
									break
					elif i + 1 < len(fileCopy) and y + 1 < len(line):
						if fileCopy[i][max(0, y - 1)].isdigit():
							partList.append(checkNumbers(fileCopy[i], max(0, y - 1)))
						if fileCopy[i][max(0, y + 1)].isdigit():
							partList.append(checkNumbers(fileCopy[i], max(0, y + 1)))
						for j in range(-1, 2):
							if fileCopy[i + 1][max(0, y + j)].isdigit():
								partList.append(checkNumbers(fileCopy[i + 1], y + j))
								if not fileCopy[i + 1][y] == ".":
									break
					elif i - 1 >= 0 and y + 1 < len(line):
						for j in range(-1, 2):
							if fileCopy[i - 1][max(0, y + j)].isdigit():
								partList.append(checkNumbers(fileCopy[i - 1], y + j))
								if not fileCopy[i - 1][y] == ".":
									break
						if fileCopy[i][max(0, y - 1)].isdigit():
							partList.append(checkNumbers(fileCopy[i], max(0, y - 1)))
						if fileCopy[i][max(0, y + 1)].isdigit():
							partList.append(checkNumbers(fileCopy[i], max(0, y + 1)))
				if len(partList) == 2:
					result += partList[0] * partList[1]
				partList = []
				y += 1
			y = 0
			i += 1
		print(result)

if __name__ == "__main__":
	main()