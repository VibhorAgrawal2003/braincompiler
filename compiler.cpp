#include<iostream>
#include<fstream>
#include<string>

#define memsize 30000
using namespace std;

namespace memory {
  unsigned char array[memsize]{};
}

void braincompiler(string& program, ostream& oss, istream& iss) {

  unsigned int ptr = 0;
  unsigned int lptr = 0;
  size_t lr = 0;

  for (size_t pc = 0; pc < program.size(); pc++) {

    char &x = program[pc];

    // Right
    if (x == '>') {
      if (ptr != memsize-1) {
        ptr++;
      }
    }

    // Left
    else if (x == '<') {
      if (ptr != 0) {
        ptr--;
      }
    }

    // Increment
    else if (x == '+') {
      memory::array[ptr]++;
    }

    // Decrement
    else if (x == '-') {
      memory::array[ptr]--;
    }

    // Read
    else if (x == '.') {
      oss << memory::array[ptr];
    }

    // Write
    else if (x == ',') {
      iss >> memory::array[ptr];
    }

    // Loop Head
    else if (x == '[') {
      lptr = ptr;
      lr = pc;
    }

    // Loop Tail
    else if (x == ']') {
      if (memory::array[lptr] != 0) {
        pc = lr;
      }
    }
  }
}

int main(int argc, char *argv[]) {

  if (argc > 1) {
    string path = argv[1];
    ifstream ifs(path);
    string line, program;
    while(getline(ifs, line)){program += line;};
    braincompiler(program, cout, cin);
  }

  return 0;
}