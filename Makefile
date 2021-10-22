all:
	gcc main.c -o main
	gcc main_2.c -o main_2

clean:
	rm -rf main
	rm -rf main_2

