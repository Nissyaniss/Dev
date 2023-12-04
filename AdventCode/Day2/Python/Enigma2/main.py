def main() -> None:
	cubeColor : str
	cubeNumber : str
	cubeMaxRed : int
	cubeMaxGreen : int
	cubeMaxBlue : int
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
	pop = 0

	with open("input.txt", "r") as f:
		for line in f:
			cubeMaxBlue = 0
			cubeMaxGreen = 0
			cubeMaxRed = 0
			id = int(line.split(':')[0].split(' ')[1])
			isGood = True
			for i in line.split(':')[1].split(';'):
				for j in i.split(','):
					cubeNumber, cubeColor = j.strip().split(' ')
					if cubeColor == "red":
						if cubeMaxRed < int(cubeNumber):
							cubeMaxRed = int(cubeNumber)
					if cubeColor == "blue":
						if cubeMaxBlue < int(cubeNumber):
							cubeMaxBlue = int(cubeNumber)
					if cubeColor == "green":
						if cubeMaxGreen < int(cubeNumber):
							cubeMaxGreen = int(cubeNumber)
			pop += cubeMaxRed * cubeMaxBlue * cubeMaxGreen
		print(pop)
	
if __name__ == "__main__":
	main()
