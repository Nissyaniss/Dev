def main() -> None:
	with open("/home/nissya/Dev/AdventCode/Day6/Python/Enigma1/input.txt") as f:
		for line in f:
			if line.startswith("Time:"):
				times = list(map(int ,filter(lambda x : len(x)!=0, line.split(":")[1].split(" "))))
			else:
				distances = list(map(int ,filter(lambda x : len(x)!=0, line.split(":")[1].split(" "))))
	count = 0
	speed = 0
	result = 1
	for time, distance in zip(times, distances):
		while time != 0:
			if speed * time > distance:
				count += 1
				time -= 1
				speed += 1
			else:
				speed += 1
				time -= 1
		result *= count
		count = 0
		speed = 0
	print(result)

if __name__ == "__main__":
	main()