def main() -> None:
	isWinningNumbers : bool
	nbTemp : int
	winningNumbers : list[int]
	numbers : list[int]
	result : int
	count : int
	cardResult : int

	nbTemp = 0
	isWinningNumbers = True
	isName = True
	winningNumbers = []
	numbers = []
	result = 0
	count = 0
	cardResult = 0

	with open("/home/nissya/Dev/AdventCode/Day4/Python/Enigma1/input.txt", "r") as f:
		for line in f:
			for char in line:
				if char == ":":
					isName = False
					continue
				elif char != "|" and not char.isdigit() and char != '\n' and isName is False:
					if nbTemp != 0 and isWinningNumbers is True:
						winningNumbers.append(nbTemp)
						nbTemp = 0
					elif nbTemp != 0 and isWinningNumbers is False:
						numbers.append(nbTemp)
						nbTemp = 0
					continue
				elif char.isdigit() and isName is False:
					nbTemp = nbTemp * 10 + int(char)
				elif char == "|":
					isWinningNumbers = False
			numbers.append(nbTemp)
			nbTemp = 0
			isWinningNumbers = True
			isName = True
			for win in winningNumbers:
				if win in numbers:
					if count == 0:
						cardResult += 1
					else:
						cardResult *= 2
					count += 1
			count = 0
			winningNumbers = []
			numbers = []
			result += cardResult
			cardResult = 0
		print(result)

if __name__ == "__main__":
	main()