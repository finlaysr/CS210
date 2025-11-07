# Usage: make to build, make run to run, make clean to remove executable

GREEN := \033[0;32m
NC := \033[0m # No Color

# A bunch of arguments to enforce code safety and best practices
arguments := -Wall -Wextra -Wpedantic -Wshadow -Wconversion -Wpointer-arith -Wstrict-overflow=2 -Wformat=2 -Wundef -Wcast-align -Wswitch-enum -Wuninitialized -Wfloat-equal -fstack-protector-strong -D_FORTIFY_SOURCE=2 -O2 -g
dev_args := -g -fsanitize=address,undefined,leak


# Make for part 2
files2 := main02.c list.c
output2 := main02.out

build2: $(files2)
	@echo -e "$(GREEN)Compilling [$(files)] ...${NC}"
	gcc $(files2) $(arguments) $(dev_args) -o $(output2)

run2: build2
	@echo -e "$(GREEN)Running $(output2) ...${NC}"
	./$(output2)

# Make for part 3
files3 := main03.c list.c
output3 := main03.out

build3: $(files3)
	@echo -e "$(GREEN)Compilling [$(files3)] ...${NC}"
	gcc $(files3) $(arguments) $(dev_args) -o $(output3)

run3: build3
	@echo -e "$(GREEN)Running $(output3) ...${NC}"
	./$(output3)

# Make for part 4
files4 := main04.c list.c
output4 := main04.out

build4: $(files4)
	@echo -e "$(GREEN)Compilling [$(files4)] ...${NC}"
	gcc $(files4) $(arguments) $(dev_args) -o $(output4)

run4: build4
	@echo -e "$(GREEN)Running $(output4) ...${NC}"
	./$(output4)





clean: $(wildcard *.out)
	rm -rf $?
