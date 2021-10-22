all:
	gcc main.c -o main
	gcc main_2.c -o main_2
	gcc main_3.c -o main_3

clean:
	rm -rf main
	rm -rf main_2
	rm -rf main_3
