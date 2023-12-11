def parse(seeds : list[int], section : str) -> list[int]:
	sectionList : list[str]
	intSplit : list[str]
	destRangeStart : int
	srcRangeStart : int
	rangeLen : int
	result : list[int]

	sectionList = []
	intSplit = []
	destRangeStart = 0
	srcRangeStart = 0
	rangeLen = 0
	result = []

	sectionList = section.split("\n")[1:]
	for line in sectionList:
		intSplit = line.split(" ")
		destRangeStart = int(intSplit[0])
		srcRangeStart = int(intSplit[1])
		rangeLen = int(intSplit[2])
		for seed in list(seeds):
			if seed in range(srcRangeStart, srcRangeStart + rangeLen):
				result.append(destRangeStart + (seed - srcRangeStart))
				seeds.remove(seed)
	result += seeds
	return result


def main() -> None:
	sections : list[str]
	seedsStr : list[str]
	seeds : list[int]

	sections = []
	seedsStr = []
	seeds = []

	with open("/home/nissya/Dev/AdventCode/Day5/Python/Enigma2/input.txt") as f:
		sections = f.read().split("\n\n")
		for section in sections:
			if section.startswith("seeds:"):
				seedsStr = section.removeprefix("seeds: ").split(" ")
				for start, length in zip(seedsStr[::2], seedsStr[1::2]):
					for seed in range(int(start), int(start) + int(length)):
						seeds.append(seed)
			else:
				seeds = parse(seeds, section)
	print(min(seeds))

if __name__ == "__main__":
	main()