# simple-ray-tracer
_(This project is not yet complete and is in progress)_

I came across the following book: [The Ray Tracer Challenge by Jamis Buck](https://pragprog.com/titles/jbtracer/the-ray-tracer-challenge/) and it seemed very interesting.
So I chose the C programming language and started implementing the ray tracer using the Phong model.
The book follows a very novel approach.
It does not give you the code directly.
Rather, it gives you the test cases which a correctly written implementation should pass.

As of now the code in this repo can only render a canvas with arbitrary pixels.
I indent to complete this in a month or two.

This project is written in C and uses dynamic memory allocation.
**It is my goal to write a very efficient and fast implementation by doing memory management manually.**
I chose C instead of Java/Python/Golang as this would give me fine grained control over how exactly memory is allocated and freed.
Plus, I also wanted to strengthen my understanding of pointers in C.

## Building this project
On Windows, make sure you have Visual Studio 2019 Community and CMake.
Clone this repo, `cd` into it and run:
```
> mkdir build
> cmake -B build
> cmake --build build
> cd build
> ctest
```
All tests should pass successfully.

On GNU/Linux, first uncomment the indicated line in `src/CMakeLists.txt` then run
```
$ mkdir build
$ cmake -B build
$ cmake --build build
$ cd build
$ ctest
```

The same steps as above may work for macOS, but I have not tested it.