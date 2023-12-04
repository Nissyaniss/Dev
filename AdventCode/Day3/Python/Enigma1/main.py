def main() -> None:
	fileCopy : list[str]
	i : int
	y : int
	isPartNb : bool
	result : int
	nbLen : int
	
	result = 0
	fileCopy = []
	i = 0
	y = 0
	isPartNb = False
	nb = 0
	nbLen = 0

	with open("/home/nissya/Dev/AdventCode/Day3/Python/Enigma1/input.txt", "r") as f:
		for line in f:
			fileCopy.append(line)
		while i < len(fileCopy):
			line = fileCopy[i]
			while y < len(line):
				while line[y].isdigit():
					nb = nb * 10 + int(line[y])
					nbLen += 1
					y += 1
				y -= nbLen
				while line[y].isdigit():
					if i - 1 >= 0 and y - 1 >= 0 and y + nbLen + 1 < len(fileCopy[i]) and i + 1 < len(fileCopy):
						for j in range(-1, nbLen + 1):
							if fileCopy[i - 1][y + j] != '.' and not fileCopy[i - 1][y + j].isdigit() and fileCopy[i - 1][y + j] != '\n':
								isPartNb = True
						for j in range(-1, nbLen + 1):
							if fileCopy[i][y + j] != '.' and not fileCopy[i][y + j].isdigit() and fileCopy[i][y + j] != '\n':
								isPartNb = True
						for j in range(-1, nbLen + 1):
							if fileCopy[i + 1][y + j] != '.' and not fileCopy[i + 1][y + j].isdigit() and fileCopy[i + 1][y + j] != '\n':
								isPartNb = True
					elif y - 1 >= 0 and y + nbLen + 1 < len(fileCopy[i]) and i + 1 < len(fileCopy):
						for j in range(-1, nbLen + 1):
							if fileCopy[i][y + j] != '.' and not fileCopy[i][y + j].isdigit() and fileCopy[i][y + j] != '\n':
								isPartNb = True
						for j in range(-1, nbLen + 1):
							if fileCopy[i + 1][y + j] != '.' and not fileCopy[i + 1][y + j].isdigit() and fileCopy[i + 1][y + j] != '\n':
								isPartNb = True
					elif i - 1 >= 0 and y - 1 >= 0 and y + nbLen + 1 < len(fileCopy[i]):
						for j in range(-1, nbLen + 1):
							if fileCopy[i - 1][y + j] != '.' and not fileCopy[i - 1][y + j].isdigit() and fileCopy[i - 1][y + j] != '\n':
								isPartNb = True
						for j in range(-1, nbLen + 1):
							if fileCopy[i][y + j] != '.' and not fileCopy[i][y + j].isdigit() and fileCopy[i][y + j] != '\n':
								isPartNb = True
					y += 1
				if isPartNb:
					print(nb)
					result += nb
					isPartNb = False
				nb = 0
				nbLen = 0
				y += 1
			y = 0
			i += 1
		print(result)

if __name__ == "__main__":
	main()