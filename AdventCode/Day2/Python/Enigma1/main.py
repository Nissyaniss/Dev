def main() -> None:
	cubeColor : str
	cubeNumber : str
	result : int
	i : str
	j : str
	isGood : bool

	cubeColor = ""
	cubeNumber = ""
	result = 0
	i = ""
	j = ""
	isGood = True

	with open("input.txt", "r") as f:
		for line in f:
			id = int(line.split(':')[0].split(' ')[1])
			isGood = True
			for i in line.split(':')[1].split(';'):
				for j in i.split(','):
					cubeNumber, cubeColor = j.strip().split(' ')
					if cubeColor == "red" and int(cubeNumber) > 12:
						isGood = False
					elif cubeColor == "green" and int(cubeNumber) > 13:
						isGood = False
					elif cubeColor == "blue" and int(cubeNumber) > 14:
						isGood = False
			if isGood:
				result += id
		print(result)

if __name__ == "__main__":
	main()
