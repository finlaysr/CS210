#! /bin/bash

#How to use: ./run.sh [path-to-file.c], e.g: ./run.sh excercises/test.c

#text colours
GREEN='\033[0;32m'
RED='\033[0;31m'
NC='\033[0m' # No Color

filename=$@ #read filename as argument

#check if file ends with .c
if [ ".${filename##*.}" != ".c" ]; then
  echo -e "${RED}Not a c file!${NC}"
  exit 1
fi

output="${filename%".c"*}.out" #change .c to .out

#Compile c program using gcc
echo -e "${GREEN}Compilling ${filename} ...${NC}"
gcc -Wall -pedantic $filename -o $output

#if compilation was succesful then run output file, else show errors
if [ $? -eq 0 ]; then
  echo -e "${GREEN}Running ${output} ...${NC}"
  ./"${output}"

  if [ $? -eq 0 ]; then
    echo -e "${GREEN}Finished Running${NC}"
  else
    echo -e "${RED}Running not succesful :(${NC}"
  fi

else
  echo -e "${RED}Compilation not succesful :(${NC}"
fi
