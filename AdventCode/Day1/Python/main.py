NUMBERS = {
	"one": "1",
	"two": "2",
	"three": "3",
	"four": "4",
	"five": "5",
	"six": "6",
	"seven": "7",
	"eight": "8",
	"nine": "9",
	"1": "1",
	"2": "2",
	"3": "3",
	"4": "4",
	"5": "5",
	"6": "6",
	"7": "7",
	"8": "8",
	"9": "9",
}

def main() -> None:
	resultStr : str
	result : int

	resultStr = ""
	result = 0
	with open("input.txt", "r") as f:
		for line in f:
			for i in range(0, len(line)):
				for num in NUMBERS:
					if line[i:].startswith(num):
						resultStr += NUMBERS[num]
			result += int(resultStr[0]) * 10 + int(resultStr[len(resultStr) - 1])
			resultStr = ""
	print(result)

if __name__ == "__main__":
	main()