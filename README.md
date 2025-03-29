# Cpkg

A package project containing custom headers/libs for various functionalities.

## Table of Contents

- [Cpkg](#cpkg)
  - [Table of Contents](#table-of-contents)
  - [Description](#description)
  - [Folder Structure](#folder-structure)
  - [How to Use (**Installation**)](#how-to-use-installation)
  - [Contributing](#contributing)
  - [License](#license)
  - [Contact](#contact)

## Description

This package project consists of custom headers that provide macros, prototypes, and definitions for different functionalities, including error messages, text colors, user input validation, and printing variable types.

## Folder Structure

- **fonts**: Contains multiples fonts (.ttf)
- **custom**: Contains C/C++ custom header files with there shared files (.so)
- **templates**: Contains C/C++ pre-builded projects templates
- **CMakes**: Contains various `CMakeLists.txt` files that support multiple projects

```sh
Cpkg
.
├── CMAKES
├── custom
│   ├── C home
│   │   ├── func
│   │   ├── im
│   │   └── inc
│   └── C++ home
│       ├── inc
│       ├── lib
│       ├── src
│       └── test
├── downloads
│   ├── SDL2-devel-2.28.5-mingw
│   │   ├── cmake
│   │   ├── docs
│   │   ├── i686-w64-mingw32
│   │   │   ├── bin
│   │   │   ├── include
│   │   │   ├── lib
│   │   │   │   ├── cmake
│   │   │   │   │   └── SDL2
│   │   │   │   └── pkgconfig
│   │   │   └── share
│   │   │       └── aclocal
│   │   ├── test
│   │   │   ├── emscripten
│   │   │   ├── n3ds
│   │   │   ├── nacl
│   │   │   └── shapes
│   │   └── x86_64-w64-mingw32
│   │       ├── bin
│   │       ├── include
│   │       │   └── SDL2
│   │       ├── lib
│   │       │   ├── cmake
│   │       │   │   └── SDL2
│   │       │   └── pkgconfig
│   │       └── share
│   │           └── aclocal
│   └── SDL-devel-1.2.15-mingw32
│       └── SDL-1.2.15
│           ├── bin
│           ├── build-scripts
│           ├── docs
│           │   ├── html
│           │   └── images
│           ├── include
│           │   └── SDL
│           ├── lib
│           ├── man
│           │   └── man3
│           ├── share
│           │   └── aclocal
│           └── test
├── fonts
├── res
│   ├── html
│   └── img
└── templates

60 directories, 937 files
```

## How to Use (**Installation**)

To import the package on your Linux system, follow these steps:

1. **Clone the Repository**:

   ```sh
   git clone https://github.com/ZouariOmar/Cpkg.git
   ```

2. **Navigate to the Directory**:

   ```sh
   cd Cpkg
   ```

## Contributing

We welcome contributions from the community. If you wish to contribute, please follow these steps:

1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Commit your changes (`git commit -am 'Add new feature'`).
4. Push to the branch (`git push origin feature-branch`).
5. Create a new Pull Request.

Please make sure your code adheres to our coding standards and includes appropriate tests.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Contact

If you have any questions or suggestions, please feel free to reach out to us at [zouariomar20@gmail.com](mailto:zouariomar20@gmail.com)
