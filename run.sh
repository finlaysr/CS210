#! /bin/bash

#How to use: ./run.sh [path-to-file.c], e.g. ./run.sh excercises/test.c

#text colours
GREEN='\033[0;32m'
NC='\033[0m' # No Color

filename=$@               #read filename as argument
filename=${filename%".c"} #remove .c extension if included

#Compile c program using gcc
echo -e "${GREEN}Compilling ${filename}.c ...${NC}"
gcc -Wall -pedantic "${filename}.c" -o "${filename}.out"

#if compilation was succesful then run output file
if [ $? -eq 0 ]; then
  echo -e "${GREEN}Running ${filename}.out ...${NC}"
  ./"${filename}.out"
fi
