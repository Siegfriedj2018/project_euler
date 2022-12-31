cc = g++  # use g++ compiler
path = .. # include pwd in paths
standard = c++17

flags = -std=$(standard)  # compile with standard
flags += -Wall  # compile with all warnings
flags += -pedantic  # even more warnings

link = $(cc) $(flags) -o  # final linked build to binary executable

compile = $(cc) $(flags) -c  # compilation to intermediary .o files

run-problem.o : problem9.cpp
	$(compile) $< -o $@


clean:
	rm -f *.o *.exe 