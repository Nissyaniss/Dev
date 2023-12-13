def main() -> None:
	with open("/home/nissya/Dev/AdventCode/Day6/Python/Enigma2/input.txt") as f:
		for line in f:
			if line.startswith("Time:"):
				time = int("".join(filter(lambda x : len(x)!=0, line.split(":")[1].split(" "))))
			else:
				distance = int("".join(filter(lambda x : len(x)!=0, line.split(":")[1].split(" "))))
	count = 0
	speed = 0
	while time != 0:
		if speed * time > distance:
			count += 1
			time -= 1
			speed += 1
		else:
			speed += 1
			time -= 1
	print(count)

if __name__ == "__main__":
	main()