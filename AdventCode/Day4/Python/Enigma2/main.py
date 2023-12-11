def main() -> None:
	isWinningNumbers : bool
	nbTemp : int
	winningNumbers : list[int]
	numbers : list[int]
	count : int
	cardCardList : list[str]
	fileCopy : list[str]
	numCard : int
	result : int

	nbTemp = 0
	isWinningNumbers = True
	isName = True
	winningNumbers = []
	numbers = []
	count = 0
	cardCardList = []
	fileCopy = []
	numCard = 0
	result = 0

	with open("/home/nissya/Dev/AdventCode/Day4/Python/Enigma2/input.txt", "r") as f:
		for line in f:
			fileCopy.append(line)
	f.close()

	for num, line in enumerate(fileCopy):
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
				count += 1
		winningNumbers = []
		numbers = []
		result += 1
		for i in range(num + 1, count + num + 1):
			cardCardList.append(fileCopy[i])
		count = 0
	while cardCardList:
		line = cardCardList.pop(0)
		result += 1
		for char in line:
			if char == ":":
				isName = False
				continue
			elif isName is True and char.isdigit():
				numCard = numCard * 10 + int(char)
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
				count += 1
		winningNumbers = []
		numbers = []
		for i in range(numCard + 1, count + numCard + 1):
			cardCardList.append(fileCopy[i - 1])
		numCard = 0
		count = 0
	print(result)

if __name__ == "__main__":
	main()