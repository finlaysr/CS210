# Usage: make to build, make run to run, make clean to remove executable

GREEN := \033[0;32m
NC := \033[0m # No Color

# A bunch of arguments to enforce code safety and best practices
arguments := -Wall -Wextra -Wpedantic -Wshadow -Wconversion -Wpointer-arith -Wstrict-overflow=2 -Wformat=2 -Wundef -Wcast-align -Wswitch-enum -Wuninitialized -Wfloat-equal -fstack-protector-strong -D_FORTIFY_SOURCE=2 -O2 -g
dev_args := -g -fsanitize=address,undefined,leak

files := employee.c excercise10.c
output := excercise10.out

excercise10.out: $(files)
	@echo -e "$(GREEN)Compilling [$(files)] ...${NC}"
	gcc $(files) $(arguments) $(dev_args) -o $(output)

release: $(files)
	@echo -e "$(GREEN)Compilling [$(files)] for release ...${NC}"
	gcc $(files) $(arguments) -o $(output)

run: excercise10.out
	@echo -e "$(GREEN)Running $(output) ...${NC}"
	./$(output)

clean:
	rm -rf $(output)
