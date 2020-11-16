# Coding Style

The following rules should be applied when creating files or writing source code for this project.

## General Rules

### Naming

All names for files, classes, functions variables etc. should be descriptive in their wording. Abbreviations should not be used except for well known and commonly accepted forms.

### Indentation

Indentations are done using four spaces.

### Spaces

A space should be put before and after an operator. There should also be a space between `if`, `for`, `while`, `case` and similar keywords and the following opening bracket `(`.

### Brackets

Curly brackets `{` should always be used, even when there is just one line after e.g. an `if` statement. The bracket is placed on the same line as the preceding statement with a space in between.

### Line Length and Breaks

Each line should ideally not exceed 80 characters. However, they are allowed to be longer, when a line break would hamper readability. There is an absolute maximum of 120 characters per line. That limit must not be exceeded.

## Files and Directories

All files and directories should be named in kebab-case. Declarations should be put into header files using the file extension `.hpp` and the implementation is placed in `.cpp` files.

```
directory/
    some-file.cpp
    other-directory/
        main.txt
some-file.txt
```

## Namespaces

Code should practically always be placed in a namespace. Namespaces should have short, descriptive and unique names, written in PascalCase.

In Header files using-directives or inline namespaces should not be used. In CPP files the using directive of the major namespace is fine.

Correct:

```cpp
// .hpp

namespace Traffic {
    class CCar {
        void drive(float speed);
    }
}

// .cpp

#include <iostream>

using Traffic;

void CCar::drive(float speed) {
    std::cout << "The car is driving at " << speed << "mph." << std::endl;
}
```

Incorrect:

```cpp
// .hpp
#include <iostream>
using std; // using-directive is not allowed in header files

namespace traf { // no capital first letter, invalid abbreviation
    class CCar {
        void drive(float speed);
    }
}

// .cpp

#include <iostream>

using traf;
using std; // not the main namespace from header file

void CCar::drive(float speed) {
    cout << "The car is driving at " << speed << "mph." << endl; // no namespacing
}
```

## Constants

Constants, whether global or class constants, are written in ALL_CAPS_SNAKE_CASE.

```cpp
const float WINDOW_WIDTH = 640.0f;

class CCircle {
    static const float MAX_NUM_OF_DEGREES = 360.0f;
}
```

## Enums

Only use class enums to keep the namespace clean. Enums are written in PascalCase and prefixed with a capital `E`. The enum members are written in ALL_CAPS_SNAKE_CASE as they are somewhat similar to constants. Enum members can be written all in one line (as long the line length limits are not exceeded) or each on a separate line.

Correct:

```cpp
class enum EDirection { UP, DOWN, LEFT, RIGHT };

class enum EColor {
    RED;
    GREEN;
    BLUE;
};
```

Incorrect:

```cpp
enum Direction { UP, DOWN, LEFT, RIGHT }; // not a class enum, missing prefix 'E'

class enum ecolor { // not written in PascalCase
    red;   // not written in ALL_CAPS_SNAKE_CASE
    Green; // not written in ALL_CAPS_SNAKE_CASE
    BlUe;  // not written in ALL_CAPS_SNAKE_CASE
};
```

## Structs

Structs are somewhat similar to classes. Only use structs as structured data containers. Anything else should be a class. As a rule of thumb: as soon as a struct has some complex methods or uses private members, it should be a class.

Structs are written in PascalCase and prefixed with a capital `S`. Members with the same type might be written on the same line, when they are also somewhat similar things or concepts.

Correct:

```cpp
struct SVector {
    float x, y, z;
};

struct SPerson {
    const char* name;
    float age;
};
```

Incorrect:

```cpp
struct vector { // missing prefix 'S', no PascalCase
    float x, y, z, magnitude; // magnitude is not a similar thing to x, y and z
};

struct SPerson {
    public:
        float getAge() const;
        void setAge(unsigned int birthdayTimestamp); // such complex logic should not be used on structs

    private:       // as soon as something is declared as private
        float age; // it should be a class instead of a struct
};
```


## TODO from here ...

## Classes

Classes, structs and interfaces should be written in PascalCase and are prefixed with a single capital letter depending on the construct. Prefixes:

- Class: 'C'
- Struct: 'S'
- Interface: 'I'

_Note:_ Interfaces are classes, which are completely abstract.

```cpp
class CPerson {
    const char* name;
    int age;
}

struct SVector {
    float x, y;
}

class IEntity {
    virtual SVector getPostion()
}
```

## Interfaces




## Functions and methods

Functions and class methods are written in camelCase. The first word should be a noun. Common abbreviations like `calc` instead of `calculate` might be used.

## Variables, class members and arguments

Variables, class members and function arguments are written in camelCase and should be descriptive. Common abbreviations like `num` instead of `number` or `col` instead of `column` might be used.
