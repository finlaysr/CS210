# Usage: make to build, make run to run, make clean to remove executable

GREEN := \033[0;32m
NC := \033[0m # No Color

arguments := -pedantic -Wall
files := employee.c excercise10.c
output := excercise10.out

excercise10.out: $(files)
	@echo -e "$(GREEN)Compilling $(files) ...${NC}"
	gcc $(files) $(arguments) -o $(output)

run: excercise10.out
	@echo -e "$(GREEN)Running $(output) ...${NC}"
	./excercise10.out

clean:
	rm -rf excercise10.out
