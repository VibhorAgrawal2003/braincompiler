# braincompiler
A standard compiler written in C++ for the famous esoteric language, brainf*ck. It reads a single argument, the path of the file, and executes it using a 30,000 character array as program memory. :brain:

### Installation

1. Start by cloning the repository.
2. Create a new file with file extension .bf (although, it _should_ run on any text file).
3. Run the file "brain.exe" and pass your source code file path as argument.
4. You can also set path to "brain.exe" as an environment variable _at your own risk_.

```
./brain helloWorld.bf
```

You can also refer to compiler.cpp to check how the source code is executed, make any necessary changes and recompile using any popular C++ compilers such as g++ / clang.

```
g++ compiler.cpp -o brain
```

### Contribution
This is a small project I worked on to learn about handling command-line inputs in C++ but would love to expand upon if any idea or opportunity presents itself.

For any suggestions, raise an issue. Or you may make some changes and send me a Pull Request. Cheers! :beer: