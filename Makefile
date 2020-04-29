CXX=g++
.PHONY:
  clean
init.o:
  init.cpp
effective-train.elf:
  init.o
clean:
  rm init.cpp
  rm effective-train
