def main() -> None:
	with open("input.txt", "r") as f:
		for line in f:
			id = int(line.split(':')[0].split(' ')[1])
			print(id)

if __name__ == "__main__":
	main()